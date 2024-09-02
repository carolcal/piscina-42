#include <unistd.h>
#include "main.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] != '\n')
			write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (!str)
		return (res);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}
