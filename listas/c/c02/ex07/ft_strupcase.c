/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:43:43 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/26 16:53:34 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] += -32;
		n++;
	}
	return (str);
}
/*int	main(void)
{
	char str[20] = "Vila da 42!";
	
	ft_strupcase(str);
	printf("%s", str);
	return(0);
}*/
