/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:04:01 by inazari           #+#    #+#             */
/*   Updated: 2023/07/19 16:17:29 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				write(1, &d1, 1);
				write(1, &d2, 1);
				write(1, &d3, 1);
				if (d1 != '7' || d2 != '8' || d3 != '9')
					write(1, ", ", 2);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
