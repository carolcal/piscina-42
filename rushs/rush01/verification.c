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

#include "main.h"

void	verify_possibilities(int matrix[4][4], int restr[4][4])
{
	int	i;
	int	row;
	int	col;
	int	cellrestr[2][2];

	i = 0;
	while (i < 4)
	{
		row = 0;
		while (row < 4)
		{
			col = 0;
			while (col < 4)
			{
				filter_restrictions(row, col, cellrestr, restr);
				filter_permutations(row, col, cellrestr, matrix);
				col++;
			}
			row++;
		}
		i++;
	}
}

void	verify_col_row(int row, int col, int array[4], int matrix[4][4])
{
	int	i;
	int	j;
	int	count;
	int	present[4];

	i = 0;
	j = 0;
	count = 0;
	while (i < 4)
	{
		present[matrix[row][i] - 1] = 1;
		present[matrix[i][col] - 1] = 1;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!present[i])
		{
			array[count++] = i + 1;
		}
		i++;
	}
}

int	verify_num_array(int array[4], int num)
{
	int	i;
	int	exist;

	i = 0;
	exist = 0;
	while (i < 4)
	{
		if (array[i] == num)
		{
			exist = 1;
			break ;
		}
		i++;
	}
	return (exist);
}

void	insert_number_matrix(int number, int col, int row, int matrix[4][4])
{
	matrix[row][col] = number;
}
