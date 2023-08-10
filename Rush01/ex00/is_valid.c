/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiler <adiler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:59:14 by adiler            #+#    #+#             */
/*   Updated: 2023/07/30 22:56:54 by adiler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calc_visible(int *arr, int reverse)
{
	int	i;
	int	visible;
	int	highest;
	int	index;

	visible = 1;
	if (reverse == 1)
		highest = arr[3];
	else
		highest = arr[0];
	i = 1;
	while (i < 4)
	{
		if (reverse == 1)
			index = 3 - i;
		else
			index = i;
		if (arr[index] > highest)
		{
			highest = arr[index];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	is_valid_row(int matrix[4][4], int clues[4][4])
{
	int	i;
	int	cnt;
	int	j;
	int	row[4];

	i = 0;
	cnt = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			row[j] = matrix[i][j];
			j++;
		}
		if (clues[2][i] == calc_visible(row, 0))
			cnt++;
		if (clues[3][i] == calc_visible(row, 1))
			cnt++;
		i++;
	}
	return (cnt);
}

int	is_valid_col(int matrix[4][4], int clues[4][4])
{
	int	i;
	int	cnt;
	int	j;
	int	col[4];

	i = 0;
	cnt = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			col[j] = matrix[j][i];
			j++;
		}
		if (clues[0][i] == calc_visible(col, 0))
			cnt++;
		if (clues[1][i] == calc_visible(col, 1))
			cnt++;
		i++;
	}
	return (cnt);
}

int	is_valid(int matrix[4][4], int clues[4][4])
{
	int	cnt_row;
	int	cnt_col;

	cnt_row = is_valid_row(matrix, clues);
	cnt_col = is_valid_col(matrix, clues);
	if ((cnt_row + cnt_col) == 16)
		return (1);
	return (0);
}
