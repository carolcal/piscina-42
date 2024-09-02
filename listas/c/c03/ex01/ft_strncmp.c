/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:18:31 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 16:44:48 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if(argc == 4)
	{
		char 	*s1 = argv[1];
		char 	*s2 = argv[2];
		int	n = argv[3][0] - '0';
		int	i;
		int	j;

		printf("%i\n", n);
		i = strncmp(s1, s2, n);
		j = ft_strncmp(s1, s2, n);
		printf("original: %i\n", i);
		printf("lista: %i", j);
	}
	return (0);
}*/
