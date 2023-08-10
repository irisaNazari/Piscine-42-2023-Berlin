/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:10:23 by inazari           #+#    #+#             */
/*   Updated: 2023/08/06 20:37:23 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	i = 0;
	range = max - min;
	arr = (int *)malloc(sizeof(int) * (range + 1));
	if (arr == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int main()
{
int i = 0;
int *arr = ft_range(3,6);
while (arr[i])
{
printf("%d ", arr[i]);
i++;
}
}*/	
