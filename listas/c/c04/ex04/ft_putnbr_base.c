/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 09:14:53 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/03 13:13:11 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (-1);
		j = 0;
		while (base[j] != '\0')
		{
			if (j != i && base[j] == base[i])
				return (-1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (-1);
	return (i);
}

void	ft_putnbr(long nbr, char *base, int num_base)
{
	int	index;

	if (nbr > num_base - 1)
		ft_putnbr (nbr / num_base, base, num_base);
	index = (nbr % num_base);
	write(1, &base[index], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		num_base;
	long	long_nbr;

	num_base = check_base(base);
	long_nbr = nbr;
	if (num_base == -1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		long_nbr = -long_nbr;
	}
	ft_putnbr(long_nbr, base, num_base);
}

/*int	main()
{
	ft_putnbr_base(-2147483648, "01");
	return(0);
}*/
