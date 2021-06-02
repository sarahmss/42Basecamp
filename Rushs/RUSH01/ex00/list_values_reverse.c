/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_values_reverse.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:36:48 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/11 05:27:16 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_listvalues_14(void)
{
	char	**values;
	int		i;

	values = malloc(4);
	i = 0;
	while (i < 4)
	{
		values[i] = malloc(1);
		values[i][0] = '4' - i;
		i++;
	}
	return (values);
}

char	**ft_listvalues_23(void)
{
	char	**values;
	int		i;
	int		j;

	values = malloc(4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		values[i] = malloc(4);
		while ((i == 0 || i == 2 || i == 3) && j < 2)
		{
			if (i == 2)
				values[i][j] = '0' + (i + j);
			else
				values[i][j] = '1' + j;
			j++;
		}
		if (i == 0 && j < 3)
			values[i][j] = '1' + j;
		if (i == 1)
			values[i][j] = '4';
		i++;
	}
	return (values);
}

char	**ft_listvalues_13(void)
{
	char	**values;
	int		i;
	int		j;

	values = malloc(4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		values[i] = malloc(4);
		while ((i == 1 || i == 2 || i == 3) && j < 2)
		{
			if (i == 2)
				values[i][j] = '1' + (j * 2);
			else
				values[i][j] = '1' + j;
			j++;
		}
		if (i == 1 && j < 3)
			values[i][j] = '1' + j;
		if (i == 0)
			values[i][j] = '4';
		i++;
	}
	return (values);
}

char	**ft_listvalues_12(void)
{
	char	**values;
	int		i;
	int		j;

	values = NULL;
	values = malloc(4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		values[i] = malloc(4);
		if (i == 3)
			values[i][j] = '3';
		while ((i == 1 || i == 2) && j < 2)
		{
			values[i][j] = '1' + j;
			j++;
		}
		if (i == 0)
			values[i][j] = '4';
		i++;
	}
	return (values);
}
