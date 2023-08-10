/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:36:29 by inazari           #+#    #+#             */
/*   Updated: 2023/08/05 14:36:38 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(long c)
{
	char	a;

	a = c + '0';
	write(1, &c, 1); 
}

int	is_valid(char *base, long base_length)
{
	int	i;
	int	j;

	i = 0;
	if (base_length < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	length;
	long	c;
	long	nb;

	length = 0;
	nb = nbr;
	while (base[length])
		length++;
	if (!is_valid(base, length))
		return ;
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	if (nb >= length)
		ft_putnbr_base((nb / length), base);
	c = base[nb % length];
	ft_putchar(c);
}
/*
int main () {
char base[] = "0123456789abcdef";
int c=-2;
ft_putnbr_base(c,base);

}*/	
