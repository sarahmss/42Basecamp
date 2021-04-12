/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:19:36 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/10 22:55:37 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_listvalues_41(void)
{
	char	**values;
	int		i;

	values = NULL;
	values = malloc(4);
	i = 0;
	while (i < 4)
	{
		values[i] = malloc(1);
		values[i][0] = '1' + i;
		i++;
	}
	return (values);
}

char	**ft_listvalues_32(void)
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
		while ((i == 0 || i == 1) && j < 2)
		{
			values[i][j] = '1' + i + j;
			j++;
		}
		if (i == 2)
			values[i][j] = '4';
		while (i == 3 && j < 3)
		{
			values[i][j] = '1' + j;
			j++;
		}
		i++;
	}
	return (values);
}

char	**ft_listvalues_31(void)
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
		while ((i == 0 || i == 1 || i == 2) && j < 2)
		{
			if (i == 1)
				values[i][j] = '1' + (j * 2);
			else
				values[i][j] = '1' + j;
			j++;
		}
		if (i == 2 && j < 3)
			values[i][j] = '1' + j;
		if (i == 3)
			values[i][j] = '4';
		i++;
	}
	return (values);
}

char	**ft_listvalues_21(void)
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
		if (i == 0)
			values[i][j] = '3';
		while ((i == 1 || i == 2) && j < 2)
		{
			values[i][j] = '1' + j;
			j++;
		}
		if (i == 3)
			values[i][j] = '4';
		i++;
	}
	return (values);
}

char	**ft_listvalues_22(void)
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
		while ((i == 0 || i == 3) && j < 3)
		{
			values[i][j] = '1' + j;
			j++;
		}
		while ((i == 1 || i == 2) && j < 3)
		{
			values[i][j] = '1' + j * 2 - 1;
			if (j == 0)
				values[i][j] = '1';
			j++;
		}
		i++;
	}
	return (values);
}
