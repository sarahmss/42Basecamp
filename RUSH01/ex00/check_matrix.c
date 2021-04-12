/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:09:14 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/11 18:40:32 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/check_matrix.h"

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

void	compare_line_and_colunm(char ***matrix, int x, int y)
{
	int i;

	i = 0;
	while (ft_strlen(matrix[x][y]) != 1 && i < 2)
	{
		if (i == 0)
		{
			matrix[x][y] = compare_line(matrix[x][y], matrix[x], y);
		}
		if (i == 1)
		{
			matrix[x][y] = compare_col(matrix[x][y], matrix, x, y);
		}
		i++;
	}
}

void	do_modifications(char ***matrix)
{
	int i;
	int j;
	int check;

	check = 1;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_strlen(matrix[i][j]) != 1)
			{
				compare_line_and_colunm(matrix, i, j);
			}
			j++;
		}
		i++;
	}
}

int		check_matrix(char ***matrix)
{
	int i;
	int	j;
	int check;

	check = 1;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_strlen(matrix[i][j]) > 1)
			{
				check = 0;
			}
			j++;
		}
		i++;
	}
	return (check);
}
