/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:13:39 by inazari           #+#    #+#             */
/*   Updated: 2023/08/03 20:46:02 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result = result * nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>
int main() {
int c = 5;
printf("%d", ft_recursive_factorial(c));
}*/		
