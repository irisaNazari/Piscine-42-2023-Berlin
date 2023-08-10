/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:00:54 by inazari           #+#    #+#             */
/*   Updated: 2023/08/03 13:24:48 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	i;
	unsigned int	total;

	dest_size = 0;
	i = 0;
	while (dest[dest_size] != '\0' && dest_size < size)
		dest_size++;
	while (i < (size - dest_size - 1) && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (dest_size < size)
		dest[dest_size + i] = '\0';
	total = dest_size + i;
	while (src[i] != '\0')
	{
		total++;
		i++;
	}
	return (total);
}
/*
#include <stdio.h>
int main ()
{
unsigned int s1;
char dest[10] = "Hello";
char src[] = "There";
s1 = 10;
printf(" %u \n", ft_strlcat(dest, src, s1));
}*/
