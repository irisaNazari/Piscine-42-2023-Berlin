/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:54:55 by inazari           #+#    #+#             */
/*   Updated: 2023/07/20 13:29:50 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rev_alph;

	rev_alph = 'z';
	while (rev_alph >= 'a')
	{
		write(1, &rev_alph, 1);
		rev_alph--;
	}
}
