/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:50:57 by inazari           #+#    #+#             */
/*   Updated: 2023/08/09 20:46:27 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *src)
{
	char	*dupe;
	int		i;
	int		size;

	size = ft_strlen(src) + 1;
	i = 0;
	dupe = (char *)malloc(sizeof(char) * size);
	if (dupe == NULL)
		return (NULL);
	while (src[i])
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;
	int			cnt;

	if (ac <= 0 || av == NULL)
		return (NULL);
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) *(ac + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		cnt = 0;
		while (av[i][cnt] != '\0')
			cnt++;
		arr[i].size = cnt;
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[ac].str = NULL;
	return (arr);
}
