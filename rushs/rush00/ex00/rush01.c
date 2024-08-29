/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:32:21 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/08/18 17:55:07 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

char	ft_putchar(int x, int y, int i, int j);

int	is_valid(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Erro: parametro menor ou igual a 0.", 35);
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	letra;

	if (is_valid(x, y) == 1)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			letra = ft_putchar(x, y, i, j);
			write(1, &letra, 1);
			i++;
		}
		write(1, &"\n", 1);
		j++;
	}
	return ;
}
