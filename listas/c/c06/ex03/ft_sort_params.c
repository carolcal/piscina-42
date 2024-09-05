/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:44:39 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/05 17:18:49 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

char	**sort_strings(int size, char *strs[])
{
	int		i;
	int		swapped;
	char	*temp;

	i = 1;
	swapped = 0;
	while (i < size)
	{
		if (ft_strcmp(strs[i], strs[i + 1]) > 0)
		{
			temp = strs[i];
			strs[i] = strs[i + 1];
			strs[i + 1] = temp;
			swapped = 1;
		}
		i++;
	}
	if (swapped > 0)
		return (sort_strings(size, strs));
	return (strs);
}

void	put_string(char *str)
{
	if (*str != '\0')
	{
		write(1, &str[0], 1);
		str++;
		put_string(str);
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		sort_strings(argc - 1, argv);
		while (i < argc)
		{
			put_string(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
