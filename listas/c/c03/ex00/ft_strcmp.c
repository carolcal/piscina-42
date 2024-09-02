/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:10:55 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 16:45:14 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		j = s1[i] - s2[i];
		if (j != 0)
		{
			return (j);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[14] = "Oii, tudo bem?";
	char s2[14] = "Oii, tudo bom?";
	int i;
	int j;
	i = strcmp(s1, s2);
	j = ft_strcmp(s1, s2);
	printf("%i / ", i);
	printf("%i", j);
	return(0);
}*/
