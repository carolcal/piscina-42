/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:28:35 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/04 18:04:12 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(char *str)
{
	if (*str != '\0')
	{
		write(1, &str[0], 1);
		str++;
		ft_putstring(str);
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstring(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
