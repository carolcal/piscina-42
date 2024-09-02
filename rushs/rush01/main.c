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

int	main(int argc, char *argv[])
{
	int	matrix[4][4];
	int	restrictions[4][4];

	initialize_matrix(matrix);
	if (argc == 2)
	{
		combine_restrictions(argv[1], restrictions);
	}
	else
		write(1, "You need to write arguments.", 28);
	verify_possibilities(matrix, restrictions);
	print_matrix4(matrix);
	return (0);
}
