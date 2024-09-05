/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:47:20 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/05 12:55:49 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char 	*dest;
	int	size;

	size = ft_strlen(src);
	dest = (char *) malloc(size);
	dest = ft_strcpy(dest, src);
	return (dest);
}

int	main(void)
{
	char	s1[10] = "Hello You";
	char	*s2;
	char	*s3;

	s2 = strdup(s1);
	s3 = ft_strdup(s1);
	printf("s1 value:%s\n", s1);
	printf("s1 point:%p\n", s1);
	printf("s2 value:%s\n", s2);
	printf("s2 point:%p\n", s2);
	printf("s3 value:%s\n", s3);
	printf("s3 point:%p\n", s3);

}
