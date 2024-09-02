#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *consult_num1(char cons1)
{
	char *resp;

	resp = malloc(2 * sizeof(char));
	resp[0] = cons1;
	resp[1] = '\0';
	return (resp);
}

char *consult_num2(char *cons1, int len)
{
	char *resp;

	resp = malloc(3 * sizeof(char)); 
	resp[0] = cons1[len];
	resp[1] = cons1[len - 1];
	resp[2] = '\0';
	return (resp);
}

char *consult_num3(char cons1)
{
	char *resp;

	resp = malloc(3 * sizeof(char)); 
	resp[0] = cons1;
	resp[1] = '0';
	resp[2] = '\0';
	return (resp);
}

char *consult_num4(int len)
{
	char *resp;

	resp = malloc(40 * sizeof(char)); 
	create_num(len, resp);
	return (resp);
}


char	*get_resp1(int len, char *cons1)
{
	if (len == 0 || len % 3 == 0) // units
	{
		return (consult_num1(cons1[len]));
	}
	else if (len % 3 == 1) // decimals
	{
		if (cons1[len] == '1')
			return (consult_num2(cons1, len));
		else if (cons1[len] >= '2')
			return (consult_num3(cons1[len]));
	}
	else // hundreds
	{
		return (consult_num1(cons1[len]));
	}
	return ("");
}

char	*get_resp2(int len, char *cons1)
{
	if (len == 0 || len % 3 == 0) // units
	{
		if (len > 0)
			return (consult_num4(len));
	}
	else if (len % 3 == 1) // decimals
	{
		if (cons1[len] == '1' && len > 1)
			return (consult_num4(len - 1));
		else if (cons1[len] >= '2' && len > 1 && cons1[len - 1] == '0')
			return (consult_num4(len - 1));
	}
	else // hundreds
	{
		return ("100");
	}
	return ("");
}

int	consult_num(int len, char *cons1, t_data *dict)
{
	char	*resp1;
	char	*resp2;
	int		resp;

	resp1 = get_resp1(len, cons1);
	resp2 = get_resp2(len, cons1);
	resp = filter_dict(resp1, dict);
	if (ft_strlen(resp2) && !resp)
	{
		resp = filter_dict(resp2, dict);
	}
	return (resp);
}
