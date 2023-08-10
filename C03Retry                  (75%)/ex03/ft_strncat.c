/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:36:03 by inazari           #+#    #+#             */
/*   Updated: 2023/07/27 18:39:36 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt;
	unsigned int	i;

	i = 0;
	cnt = 0;
	while (dest[cnt] != '\0')
	{
		cnt++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[cnt + i] = src[i];
		i++;
	}
	dest[cnt + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main() 
{
char str1[100] = "Hello";
char str2[] = "word";
ft_strncat(str1,str2,2);
printf("%s", str1);
}*/
