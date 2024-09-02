/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:54:12 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/29 15:21:25 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (size <= dlen)
		return (size + slen);
	while ((dlen + i) < (size - 1) && (i < slen))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

//dlen + i => começa a sobrepor no caracter \0
//size - 1 => ultimo índice válido no destino deixando 1 caracter para \0
#include <stdio.h>
#include <string.h>
int	main()
{
	int	i;
	char	s1[15] = "Ola";
	char	s2[8] = "mundo";

	i = ft_strlcat(s1, s2, 9);
	printf("%i\n", i);
	printf("%s\n", s1);
	printf("%s\n", s2);
	return(0);
}
