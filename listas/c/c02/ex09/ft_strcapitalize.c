/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:06:15 by cayamash          #+#    #+#             */
/*   Updated: 2024/08/28 09:30:07 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	is_special_char(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z' ))
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || is_special_char(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int	main(int argc, char *argv[])
{
	char	*str;
	if(argc == 2)
		str = ft_strcapitalize(argv[1]);
	else
		str = "";
	printf("%s", str);
	return (0);
}*/
