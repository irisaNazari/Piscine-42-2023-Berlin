/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:19:23 by inazari           #+#    #+#             */
/*   Updated: 2023/07/19 18:46:24 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char d1, char d2, char d3, char d4)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d3, 1);
	write(1, &d4, 1);
}

void	print_combinations(char d1, char d2)
{
	char	d3;
	char	d4;

	d3 = '0';
	while (d3 <= '9')
	{
		d4 = '0';
		while (d4 <= '9')
		{
			if (d1 < d3 || (d1 == d3 && d2 < d4))
			{
				print_numbers(d1, d2, d3, d4);
				if (!(d1 == '9' && d2 == '8' && d3 == '9' && d4 == '9'))
					write(1, ", ", 2);
			}
			d4++;
		}
		d3++;
	}
}

void	ft_print_comb2(void)
{
	char	d1;
	char	d2;

	d1 = '0';
	while (d1 <= '9')
	{
		d2 = '0';
		while (d2 <= '9')
		{
			print_combinations(d1, d2);
			d2++;
		}
		d1++;
	}
}
