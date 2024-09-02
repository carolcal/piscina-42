/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:52:25 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/25 19:54:29 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

void	initialize_matrix(int matrix[4][4]);
void	combine_restrictions(char *str, int restr[4][4]);
void	verify_possibilities(int matrix[4][4], int restr[4][4]);
void	filter_restrictions(int row, int col, int cell[2][2], int restr[4][4]);
int		filter_permutations(int row, int col, int cell[2][2], int matrix[4][4]);
void	possib_arrays(int arr1[4], int arr2[4], int arr3[4], int arr4[4]);
void	col_possib(int row, int cell[2][2], int matrix[4][4], int possib[4]);
void	row_possib(int col, int cell[2][2], int matrix[4][4], int possib[4]);
void	generate_comparison_array(int array1[4], int array2[4], int array3[4]);
int		verify_num_possib(const int possib[4]);
void	insert_number_matrix(int number, int col, int row, int matrix[4][4]);
void	verify_col_row(int row, int col, int array[4], int matrix[4][4]);
void	print_matrix4(int matrix[4][4]);
int		verify_num_array(int array[4], int num);
int		check_and_insert(int number, int col, int row, int matrix[4][4]);
int		check_existence(int value, int array[4]);
void	add_value_if_needed(int value, int array[4]);
int		value_exists_in_array(int value, int array[4]);
void	copy_values(int array1[4], int array2[4], int array3[4]);

#endif
