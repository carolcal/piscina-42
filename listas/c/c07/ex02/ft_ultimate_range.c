/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:27:02 by cayamash          #+#    #+#             */
/*   Updated: 2024/09/05 17:45:16 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if(min >= max)
	{
		*range = NULL;
		return(0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	i = 0;
	while(min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return(len);
}

int	main(void)
{
	int	**array;
	int 	arr_len;

	array = NULL;
	arr_len = ft_ultimate_range(array, 5, 9);
	unsigned long	i;
	i = 0;
	while(i < sizeof(*array))
	{
		printf("%i\n", *array[i]);
		i++;
	}
	printf("%i", arr_len);

}
