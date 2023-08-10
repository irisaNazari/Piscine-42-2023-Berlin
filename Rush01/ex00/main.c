/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:59:20 by adiler            #+#    #+#             */
/*   Updated: 2023/07/31 17:02:40 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		str_to_int(char *str);
int		is_valid(int matrix[4][4], int clues[4][4]);
void	print_matrix(int matrix[4][4]);

int	can_put(int matrix[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix [row][i] == num || matrix[i][col] == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	solve(int matrix[4][4], int clues[4][4], int row, int col)
{
	int	i;

	if ((row == 3) && (col == 4))
		return (is_valid(matrix, clues));
	if (col == 4)
	{
		col = 0;
		row++;
	}
	// if (matrix[row][col] != 0)
	// 	solve(matrix, clues, row, col + 1);
	i = 1;
	while (i <= 4)
	{
		if (can_put(matrix, row, col, i) == 1)
		{
			matrix[row][col] = i;
			if (solve(matrix, clues, row, col + 1) == 1)
				return (1);
			matrix[row][col] = 0;
		}
		i++;
	}
	return (0);
}

void	parse_clues(int clues[4][4], char *argv[])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 1;
	while (i < 4)
	{
		{
			clues[i][j] = str_to_int(argv[k]);
			j++;
			if (j == 4)
			{
				j = 0;
				i++;
			}
			k++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	matrix[4][4];
	int	clues[4][4];

	if (argc != 17)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (1);
	}
	parse_clues(clues, argv);
	if (solve(matrix, clues, 0, 0))
	{
		print_matrix(matrix);
	}
	else
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}
	return (0);
}
