/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:34:44 by inazari           #+#    #+#             */
/*   Updated: 2023/08/03 20:47:51 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		result = result * nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
/*
#include <stdio.h>
int main() {
printf("%d", ft_recursive_power(2,3));
}*/
