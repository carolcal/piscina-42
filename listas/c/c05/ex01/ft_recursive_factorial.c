/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:03:03 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/04 11:03:54 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb >= 0)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int num = ft_recursive_factorial(1);
	printf("%i", num);
	return (0);
}*/
