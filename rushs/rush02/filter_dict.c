#include <stdio.h> 
#include "main.h"

int filter_dict(char *number, t_data *dict)
{
	int	index;

	index = 0;
    //printf("number: %s", number);
	 while (index < 41)
    {
        if(ft_strcmp(dict[index].number, number) == 0)
        {
            ft_putstr(dict[index].word);
            return (0);
        }
        index++;
    }
	return (-1);
}