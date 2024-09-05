/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:29:23 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/04 11:04:50 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}

/*#include <stdio.h>
int	main(void)
{
	int num = ft_iterative_power(-3, 3);
	printf("%i", num);
	return (0);
}*/
