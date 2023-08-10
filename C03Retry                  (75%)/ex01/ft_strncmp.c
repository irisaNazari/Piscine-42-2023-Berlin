/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:06:35 by inazari           #+#    #+#             */
/*   Updated: 2023/07/31 19:39:22 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i; 

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] -(unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(){
printf("%d",ft_strncmp("hello", "hello", 3));
printf("%d",ft_strncmp("abc", "cba", 1));
printf("%d",ft_strncmp("", "ccc", 2));
printf("%d",ft_strncmp("z", "", 3));
}*/
