/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:16:35 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/21 07:32:22 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	int	nb;
	int	nb_max;
	int	temp;
	int	i;
	char	c[n];


	nb = 1;
	//nb_max = 10^n;
	//write(1, &nb_max, 3);
	//write(1, "\n", 1);
	while (1)
	{
		i = n - 1;
		temp = nb;
		while( i >= 0)
		{
			if(temp == 0)
				c[i] = '0';
			else
			{
				c[i] = (temp % 10) + '0';
				temp /= 10;
			}
			i--;
		}
		if(c[0] == 9)
			break;

	//	printf("%s", c);
	//	printf("\n");
		write(1, &c, n);
		write(1, "\n", 1);
		printf("%d", temp);
		if(temp == 0)
			nb++;
		printf("nb = %d", nb);
	//	return ;
	//	if(nb < nb_max)
	//		write(1, "\n", 1);
	//	nb++;
	//	printf("%d", nb);
	//	return;
	}
}

int	main()
{
	ft_print_combn(2);
	return(0);
}
