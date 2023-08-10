/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:15:07 by inazari           #+#    #+#             */
/*   Updated: 2023/07/26 15:34:20 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = 97 + (str[i] - 65);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main () 
{
char str[] = "saLut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
printf("%s",ft_strlowcase(str));
}*/
