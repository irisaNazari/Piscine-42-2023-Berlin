/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:21:47 by inazari           #+#    #+#             */
/*   Updated: 2023/07/26 15:32:22 by inazari          ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	ft_strlowcase(str);
	cap = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (cap)
			{
				str[i] = 65 + (str[i] - 97);
				cap = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9') 
			cap = 0;
		else
			cap = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main () 
{
char str[] = "saLut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
printf("%s",ft_strcapitalize(str));
}*/
