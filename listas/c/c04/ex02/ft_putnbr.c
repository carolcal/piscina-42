/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:50:59 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 10:08:17 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(int nb)
{
	char	c[10];
	int		i;

	i = 0;
	while (nb != 0)
	{
		c[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &c[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 0)
		ft_printnbr(nb);
}

/*int	main(void)
{
	ft_putnbr(-2147483647);
}*/
