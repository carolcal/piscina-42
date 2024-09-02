/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:14:27 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 08:17:05 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	if (!str)
		return (res);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
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
        char    str[10] = "z";
        int     i;
        i = ft_str_is_alpha(str);
	printf("%i", i); 
	return (0);
}*/
