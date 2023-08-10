/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:20:53 by inazari           #+#    #+#             */
/*   Updated: 2023/07/27 18:35:33 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (dest[cnt] != '\0')
	{
		cnt++;
	}
	while (src[i] != '\0')
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
ft_strcat(str1,str2);
printf("%s", str1);
}*/
