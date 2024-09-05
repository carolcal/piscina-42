/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:50:59 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/03 12:50:46 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(long nb)
{
	char	c;

	if (nb > 9)
		ft_printnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		write(1, "-", 1);
		long_nb = -long_nb;
	}
	ft_printnbr(long_nb);
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
