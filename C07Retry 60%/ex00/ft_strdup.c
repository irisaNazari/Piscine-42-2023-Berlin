/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:55:56 by inazari           #+#    #+#             */
/*   Updated: 2023/08/06 19:02:35 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

char	*ft_strdup(char *src)
{
	char	*dupe;
	int		i;
	int		size;

	size = ft_strlen(src) + 1;
	i = 0;
	dupe = (char *)malloc(sizeof(char) * size);
	if (dupe == NULL)
		return (NULL);
	while (src[i])
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
/*
#include <stdio.h>
int main()
{
int i = 0;
char *str = "hello";
while(str[i])
{
printf("%c", str[i]);
i++;
}
}*/	
