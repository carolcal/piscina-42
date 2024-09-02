/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:09:52 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/29 09:13:05 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	convert_number(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	negativo;

	i = 0;
	nbr = 0;
	negativo = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
			negativo++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr = convert_number(&str[i]);
			break ;
		}
		i++;
	}
	if (negativo % 2 == 1)
		nbr = -nbr;
	return (nbr);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	i;
	char	c[20]= "    ---+--+1234ab567";

	i = ft_atoi(c);
	printf("Lista:%i", i);
}*/
