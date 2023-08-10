/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:54:30 by inazari           #+#    #+#             */
/*   Updated: 2023/08/03 20:54:34 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i > 1)
	{
		write(1, argv[i - 1], ft_strlen(argv[i - 1]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
