#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void	create_num(int index, char *cons2)
{
    cons2[0] = '1';
    cons2[index + 1] = '\0';
    while (index > 0)
    {
        cons2[index] = '0';
        index--;
    }
}
int	ft_rev_num(char *arg, char *cons1)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(arg);
	while (i < len)
	{
		cons1[i] = arg[len - i - 1];
		i++;
	}
	cons1[i] = '\0';
	len--;
	return(len);
}

int	organize_num(char *arg, t_data *dict)
{
	char	*cons1;
	int		resp;
	int		len;
	int		jump_zero;

	cons1 = (char *)malloc(40 * sizeof(char));
	len = ft_rev_num(arg, cons1);
	jump_zero = 0;
	if(len > 1)
		jump_zero = 1;
	while (len >= 0)
	{
		if (jump_zero && cons1[len] == '0')
			len--;
		else
		{
			resp = consult_num(len, cons1, dict);
			if(resp != 0)
				return(-1);
			if ((len == 1 || len % 3 == 1) && cons1[len] == '1')
			len--;
		}
		len--;
	}
	free(cons1);
	return (0);
}
