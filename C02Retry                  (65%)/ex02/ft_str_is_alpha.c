/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:06:58 by inazari           #+#    #+#             */
/*   Updated: 2023/07/27 13:04:17 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main() {

char str[] = "hello";
char str1[] = ",&*%";
char str2[] = "";
printf("%d",ft_str_is_alpha(str));
printf("%d",ft_str_is_alpha(str1));
printf("%d",ft_str_is_alpha(str2));
}*/
