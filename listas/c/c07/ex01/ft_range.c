/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:57:56 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/05 16:25:58 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;
	
	array = NULL;
	if(min > max)
		return (array);
	i = 0;
	len = max - min;
	array = (int *)malloc(len * sizeof(int));
	max --;
	while (min <= max)
	{
		array[i] = max;
		max--;
		i++;
	}
	return(array);
}

int	main(void)
{
	int	*array;
	array = ft_range(12, 9);
/*	unsigned long	i;
	i = 0;
	while(i < sizeof(*array))
	{
		printf("%i\n", array[i]);
		i++;
	}*/
	printf("%p", array);
}
