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

#include "permutations.h"
#include "main.h"

int	filter_permutations(int row, int col, int cell[2][2], int matrix[4][4])
{
	int	possib_col[4];
	int	possib_row[4];
	int	possib_col_row[4];
	int	possib_total[4];
	int	number;

	possib_arrays(possib_col, possib_row, possib_col_row, possib_total);
	verify_col_row(row, col, possib_col_row, matrix);
	number = verify_num_possib(possib_col_row);
	if (!check_and_insert(number, col, row, matrix))
		return (0);
	col_possib(row, cell, matrix, possib_col);
	number = verify_num_possib(possib_col);
	if (!check_and_insert(number, col, row, matrix))
		return (0);
	row_possib(col, cell, matrix, possib_row);
	number = verify_num_possib(possib_row);
	if (!check_and_insert(number, col, row, matrix))
		return (0);
	return (1);
}

void	possib_arrays(int arr1[4], int arr2[4], int arr3[4], int arr4[4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		arr1[j] = 0;
		arr2[j] = 0;
		arr3[j] = 0;
		arr4[j] = 0;
		j++;
	}
}

void	col_possib(int row, int cell[2][2], int matrix[4][4], int possib[4])
{
	int	i;
	int	j;
	int	value;

	i = 0;
	while (i < 24)
	{
		if (cell[0][0] == g_permut[i].v1 && cell[0][1] == g_permut[i].v2)
		{
			j = 0;
			while (j < 4)
			{
				value = g_permut[i].permutation[row];
				if (!check_existence(value, possib))
				{
					add_value_if_needed(value, possib);
				}
				j++;
			}
		}
		i++;
	}
}

void	row_possib(int col, int cell[2][2], int matrix[4][4], int possib[4])
{
	int	i;
	int	j;
	int	value;

	i = 0;
	while (i < 24)
	{
		if (cell[1][0] == g_permut[i].v1 && cell[1][1] == g_permut[i].v2)
		{
			j = 0;
			while (j < 4)
			{
				value = g_permut[i].permutation[col];
				if (!check_existence(value, possib))
				{
					add_value_if_needed(value, possib);
				}
				j++;
			}
		}
		i++;
	}
}

int	verify_num_possib(const int possib[4])
{
	int	i;
	int	number;

	number = 0;
	while (i < 4)
	{
		if (possib[i] != 0 && !number)
			number = possib[i];
		else if (possib[i] != 0 && number)
		{
			break ;
		}
	}
	if (possib[1] == 0 && (possib[0] > 0 && possib[0] <= 4))
		return (possib[0]);
	return (0);
}
