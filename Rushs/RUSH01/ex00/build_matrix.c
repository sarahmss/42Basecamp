/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:59:06 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/11 19:04:36 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers/build_matrix.h"

int		build_matrix_helper(char *input, char ***matrix, int i, int j)
{
	char	**col;
	char	**line;

	line = ft_listvalues(input[i + 8], input[i + 12]);
	col = ft_listvalues(input[j], input[j + 4]);
	matrix[i][j] = malloc(4);
	if (inter_seq(line[j], col[i]) == NULL)
		return (0);
	matrix[i][j] = inter_seq(line[j], col[i]);
	return (1);
}

char	***build_matrix(char *input)
{
	char	**line;
	char	***matrix;
	int		i;
	int		j;

	matrix = malloc(4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		if (ft_listvalues(input[i + 8], input[i + 12]) == NULL)
			return (0);
		line = ft_listvalues(input[i + 8], input[i + 12]);
		matrix[i] = malloc(4);
		while (j < 4)
		{
			if (ft_listvalues(input[j], input[j + 4]) == NULL)
				return (0);
			if (build_matrix_helper(input, matrix, i, j) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (matrix);
}
