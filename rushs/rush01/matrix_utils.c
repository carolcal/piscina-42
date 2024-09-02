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
#include "permutations.h"
#include "main.h"

void	initialize_matrix(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		if (j == 4)
			i++;
	}
}

void	print_matrix4(int matrix[4][4])
{
	int	i;
	int	j;
	int	number;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			number = matrix[i][j] + '0';
			write(1, &number, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	generate_comparison_array(int array1[4], int array2[4], int array3[4])
{
	int	i;

	copy_values(array1, array2, array3);
	i = 0;
	while (i < 4 && array3[i] != 0)
	{
		i++;
	}
	while (i < 4)
	{
		array3[i] = 0;
		i++;
	}
}
