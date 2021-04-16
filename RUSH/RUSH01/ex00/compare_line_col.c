/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_line_col.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:09:15 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/11 20:37:18 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers/compare_line_col.h"

char	*compare_3result(char **result)
{
	int		tam[3];
	char	*least_result;

	tam[0] = ft_strlen(result[0]);
	tam[1] = ft_strlen(result[1]);
	tam[2] = ft_strlen(result[2]);
	least_result = malloc(4);
	if (tam[0] < tam[1])
	{
		if (tam[0] < tam[2])
			least_result = result[0];
		else
			least_result = result[2];
	}
	else if (tam[0] >= tam[1])
	{
		if (tam[1] < tam[2])
			least_result = result[1];
		else
			least_result = result[2];
	}
	return (least_result);
}

char	*compare_result(char **result, int n)
{
	int		tam[3];
	char	*least_result;
	int		m;

	m = 0;
	least_result = malloc(4);
	if (n == 3)
		return (compare_3result(result));
	while (m < 2)
	{
		tam[m] = ft_strlen(result[m]);
		m++;
	}
	if (tam[0] < tam[1])
		least_result = result[0];
	else
		least_result = result[1];
	return (least_result);
}

void	search_result(char **result, int *sol, char *str, char *to_compare)
{
	int	index;
	int	j;

	if (ft_strlen(str) == 1)
	{
		j = 0;
		index = 0;
		while (to_compare[j] != '\0')
		{
			if (to_compare[j] != str[0])
			{
				result[*sol][index] = to_compare[j];
				index++;
			}
			j++;
		}
		*sol = *sol + 1;
	}
}

char	*compare_line(char *to_compare, char **line, int n_to_compare)
{
	int		i;
	int		s;
	int		*sol;
	char	**result;

	s = 0;
	sol = &s;
	result = malloc(3);
	result[0] = malloc(4);
	result[1] = malloc(4);
	result[2] = malloc(4);
	i = 0;
	while (i < 4)
	{
		if (i != n_to_compare)
			search_result(result, sol, line[i], to_compare);
		i++;
	}
	if (*sol == 0)
		return (to_compare);
	else if (*sol == 1)
		return (result[0]);
	else
		return (compare_result(result, *sol));
}

char	*compare_col(char *to_compare, char ***col, int n_compare, int n_col)
{
	int		i;
	int		s;
	int		*sol;
	char	**result;

	s = 0;
	sol = &s;
	result = malloc(3);
	result[0] = malloc(4);
	result[1] = malloc(4);
	result[2] = malloc(4);
	i = 0;
	while (i < 4)
	{
		if (i != n_compare)
			search_result(result, sol, col[i][n_col], to_compare);
		i++;
	}
	if (*sol == 0)
		return (to_compare);
	else if (*sol == 1)
		return (result[0]);
	else
		return (compare_result(result, *sol));
}
