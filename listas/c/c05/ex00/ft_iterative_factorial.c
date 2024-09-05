/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 10:23:47 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/04 11:03:16 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb > 1)
	{
		i = nb - 1;
		while (i > 0)
		{
			nb = nb * i;
			i --;
		}
		return (nb);
	}
	else if (nb >= 0)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(){
	int num = ft_iterative_factorial(6);
	printf("%i", num);
	return(0);
}*/
