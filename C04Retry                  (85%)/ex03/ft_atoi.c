/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:17:12 by inazari           #+#    #+#             */
/*   Updated: 2023/08/03 20:28:13 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int		sign;
	long	r;
	int		num_minus;

	num_minus = 0;
	r = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			num_minus++;
		str++;
	}
	if (num_minus % 2 == 1)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (sign * (int) r);
}
/*
#include <stdio.h>
int main () {
char str[] = "----+--+1234ab567";
printf("%d", ft_atoi(str));
}*/
