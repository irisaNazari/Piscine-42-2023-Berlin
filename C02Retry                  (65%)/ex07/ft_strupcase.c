/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:37:00 by inazari           #+#    #+#             */
/*   Updated: 2023/07/26 15:33:46 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = 65 + (str[i] - 97);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main () 
{
char str[] = "HEllo, 56, nukEd, i";
printf("%s",ft_strupcase(str));
}*/
