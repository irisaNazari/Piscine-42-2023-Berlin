/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:19:32 by inazari           #+#    #+#             */
/*   Updated: 2023/07/26 14:48:35 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main () 
{
char str[] = "Hell0";
char str1[] = "hello";
printf("%u",ft_str_is_lowercase(str));
printf("%u",ft_str_is_lowercase(str1));
}*/
