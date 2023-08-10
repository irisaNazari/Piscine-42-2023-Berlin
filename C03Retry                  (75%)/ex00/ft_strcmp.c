/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:50:28 by inazari           #+#    #+#             */
/*   Updated: 2023/07/31 19:37:02 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i; 

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(){
printf("%d",ft_strcmp("hello", "hello"));
printf("%d",ft_strcmp("abc", "cba"));
printf("%d",ft_strcmp("", "ccc"));
printf("%d",ft_strcmp("z", ""));
}*/	
