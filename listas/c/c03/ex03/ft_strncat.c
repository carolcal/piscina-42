/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:59:47 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 16:46:42 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	s1[10] = "Eu uso ";
	char	s2[4] = "MAC";
	char	s3[10] = "Eu uso ";
	char	s4[4] = "MAC";
	char	*s5;
	char	*s6;

	s5 = strncat(s1, s2, 5);
	printf("s1:%s\n", s1);
	printf("s2:%s\n", s2);
	printf("s5:%s\n", s5);
	
	s6 = ft_strncat(s3, s4, 5);
	printf("s3:%s\n", s3);
	printf("s4:%s\n", s4);
	printf("s6:%s\n", s6);
}*/
