/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:30:04 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/03 16:52:58 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
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

int	check_contain_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_sin(char *str, int *sin)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sin *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str, int num_base, char *base)
{
	int	i;
	int	nbr;
	int	sin;
	int	num;

	nbr = 0;
	sin = 1;
	i = ft_atoi_sin(str, &sin);
	while (str[i] != '\0')
	{
		num = check_contain_base(str[i], base);
		if (num < 0)
			break ;
		nbr *= num_base;
		nbr += num;
		i++;
	}
	return (nbr * sin);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num_base;
	int	num;

	num_base = check_base(base);
	if (num_base == -1)
		return (0);
	num = ft_atoi(str, num_base, base);
	return (num);
}

/*#include <stdio.h>
int	main()
{
	printf("%i", ft_atoi_base(" 	--++-+--7FFFFFFF", "0123456789abcdef"));
	return(0);
}*/
