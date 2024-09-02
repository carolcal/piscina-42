/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:43:59 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/01 20:50:21 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int verify_int_positive(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int check_args(int argc, char *arg)
{
	if (argc == 1 || !verify_int_positive(arg) || argc > 3 || ft_strlen(arg) > 39)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

char	*read_dict_content(int argc, char *argv[])
{
    if (argc == 3)
 	   return (read_dict(argv[1]));
    return (read_dict("numbers.dict"));
}

void	free_resources(t_data *dict, char *content, int resp)
{
    if (dict != NULL)
 	   free(dict);
    if (content != NULL)
 	   free(content);
    if (resp == -1)
 	   write(1, "Error\n", 6);
}

int main(int argc, char *argv[])
{
	char *arg;
	char *content;
	t_data *dict;
	int resp;

	dict = NULL;
	resp = 0;
	arg = argv[argc - 1];
	if (!check_args(argc, arg))
		return (-1);
	content = read_dict_content(argc, argv);
	dict = fill_dict(dict, content);
	if (!content || !is_dict_valid(content))
	{
		write(1, "Dict Error\n", 11);
		free(content);
		return (1);
	}
	resp = organize_num(arg, dict);
	free_resources(dict, content, resp);
	return (0);
}
