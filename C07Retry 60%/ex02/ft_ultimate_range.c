/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:06:28 by inazari           #+#    #+#             */
/*   Updated: 2023/08/09 18:03:26 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (size + 1));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
int main()
{
	int *range = NULL;
	int min = 5;
	int max = 15;
	int size;

	size = ft_ultimate_range(&range, min, max);

	if (size == -1)
	{
		printf("Error: Invalid range (min >= max).\n");
	}
	else if (range == NULL)
	{
		printf("Error: Memory allocation failed.\n");
	}
	else
	{
		printf("Generated array: ");
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");
	}


	free(range);

	return 0;
}*/
