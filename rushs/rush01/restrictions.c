/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:19:40 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/25 14:11:03 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"

void	combine_restrictions(char *str, int restr[4][4])
{
	int	i;
	int	row;
	int	col;

	i = 0;
	row = 0;
	col = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i] > '0' && str[i] <= '4'))
		{
			restr[row][col] = str[i] - '0';
			col++;
			if (col == 4)
			{
				col = 0;
				row++;
			}
		}
		i++;
	}
}

void	filter_restrictions(int row, int col, int cell[2][2], int restr[4][4])
{
	cell[0][0] = restr[0][col];
	cell[0][1] = restr[1][col];
	cell[1][0] = restr[2][row];
	cell[1][1] = restr[3][row];
}
