/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:30:25 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/04 15:14:11 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_helper(int nb, int test)
{
	if (test * test < nb)
		return (ft_sqrt_helper(nb, test + 1));
	if (test * test == nb)
		return (test);
	if (test * test > nb || test >= 46341)
		return (0);
	return (0);
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_sqrt_helper(nb, 0));
}

/*#include <stdio.h>
int	main(void)
{
	printf("sqrt(%i) == %i\n", -1, ft_sqrt(-1));
    	printf("sqrt(%i) == %i\n", 0, ft_sqrt(0));
    	printf("sqrt(%i) == %i\n", 1, ft_sqrt(1));
    	printf("sqrt(%i) == %i\n", 2, ft_sqrt(2));
    	printf("sqrt(%i) == %i\n", 4, ft_sqrt(4));
    	printf("sqrt(%i) == %i\n", 16, ft_sqrt(16));
    	printf("sqrt(%i) == %i\n", 255, ft_sqrt(225));
    	printf("sqrt(%i) == %i\n", 10000, ft_sqrt(10000));
    	printf("sqrt(%i) == %i\n", 2147395600, ft_sqrt(2147395600));
    	return (0);
}*/
