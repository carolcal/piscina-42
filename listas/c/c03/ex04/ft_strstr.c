/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:22:39 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 16:31:37 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j])
			&& str[i + j] != '\0' && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		else if (str[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if(argc == 3)
	{
		char *s1;
		char *s2;

		s1 = strstr(argv[1], argv[2]);
		s2 = ft_strstr(argv[1], argv[2]);
		printf("%s\n", s1);
		printf("%s\n", s2);
	}
	return (0);
}*/
