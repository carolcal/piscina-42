/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:33:00 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 08:19:00 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}
/*int     main(void)
{       
        char    str[15] = "HELLO WORLD!";
        int     i;
        i=ft_str_is_uppercase(str);
	printf("%i", i)
        return(0);
}  */
