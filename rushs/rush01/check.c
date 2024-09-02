/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:29:09 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/25 21:29:14 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "permutations.h"
#include "main.h"

int	check_and_insert(int number, int col, int row, int matrix[4][4])
{
	if (number)
	{
		insert_number_matrix(number, col, row, matrix);
		return (0);
	}
	return (1);
}

int	check_existence(int value, int array[4])
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (array[k] == value)
			return (1);
		k++;
	}
	return (0);
}

void	add_value_if_needed(int value, int array[4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (array[j] == 0)
		{
			array[j] = value;
			break ;
		}
		j++;
	}
}

int	value_exists_in_array(int value, int array[4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (value == array[j])
		{
			return (1);
		}
		j++;
	}
	return (0);
}

void	copy_values(int array1[4], int array2[4], int array3[4])
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		if (array1[i] != 0 && value_exists_in_array(array1[i], array2))
		{
			if (k < 4)
			{
				array3[k] = array1[i];
				k++;
			}
		}
		i++;
	}
}
