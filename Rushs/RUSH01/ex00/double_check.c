/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:52:43 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/12 01:51:00 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "headers/double_check.h"

char	*matrix_line_into_str(char ***matrix, int i, char *str)
{
	int		j;

	j = 0;
	while (j < 4)
	{
		str[j] = matrix[i][j][0];
		j++;
	}
	return (str);
}

int		size_seq(char *input, int i)
{
	int	size;

	if (input[i + 8] == '4' || input[i + 12] == '4')
		size = 1;
	else if (input[i + 8] == '3' || input[i + 12] == '3')
		size = 3;
	else if (input[i + 8] == '2' && input[i + 12] == '2')
		size = 6;
	else
		size = 2;
	return (size);
}

char	**creat_seq(char **seq)
{
	int i;

	i = 0;
	while (i < 4)
	{
		seq[i] = malloc(4);
		i++;
	}
	return (seq);
}

char	*creat_str(char ***matrix, int i)
{
	char *str;

	str = malloc(4);
	str = matrix_line_into_str(matrix, i, str);
	return (str);
}

int		double_check(char ***matrix, char *input)
{
	int		i;
	int		j;
	char	**seq;
	int		sum;

	i = 0;
	seq = malloc(6);
	seq = creat_seq(seq);
	while (i < 4)
	{
		seq = check_seq(input[i + 8], input[i + 12], seq);
		j = 0;
		while (j < size_seq(input, i))
		{
			sum = sum + ft_strcmp(creat_str(matrix, i), seq[j]);
			j++;
		}
		if (sum == 0)
			return (1);
		sum = 0;
		i++;
	}
	return (0);
}
