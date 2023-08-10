/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:47:25 by inazari           #+#    #+#             */
/*   Updated: 2023/08/06 20:07:23 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long int	first;
	long int	last;
	long int	mid;

	first = 1;
	last = nb;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			last = mid - 1;
		else if (mid * mid < nb)
			first = mid + 1;
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
printf("%d\n", ft_sqrt(-2147483648));
printf("%d\n", ft_sqrt(2147483647));
}*/			
