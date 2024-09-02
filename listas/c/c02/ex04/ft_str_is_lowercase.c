/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:04:48 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 08:18:17 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (!str)
		return (res);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
        char    str[10] = "oLa";
        int     i;
        
        i = ft_str_is_lowercase(str);
	printf("%i", i);
        return (0);
}*/
