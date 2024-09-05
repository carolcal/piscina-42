/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:53:52 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/04 20:00:31 by cayamash         ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		ft_putstring(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
