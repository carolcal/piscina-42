/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:44:39 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 16:44:34 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
int	main(void)
{
	char	s1[10] = "Eu uso";
	char	s2[] = "Linux";
	char	s3[10] = "Eu uso";
	char    s4[] = "Linux";


	printf("Original: \n");
	strcat(s1, s2);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	
	printf("Lista: \n");
	ft_strcat(s3, s4);
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);

	return(0);
}
*/
