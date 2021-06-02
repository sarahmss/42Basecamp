/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:11:49 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/12 02:03:35 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "headers/main.h"

void	print_matrix(char ***matrix)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (matrix[i][j][k] != '\0')
			{
				write(1, &matrix[i][j][k], 1);
				k++;
			}
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

char	*args(int argc, char *argv[])
{
	int		p_cont;
	char	*pos;

	pos = malloc(16);
	if (ft_strlen(argv[1]) != 31 || argc != 2)
		return (0);
	p_cont = 0;
	while (p_cont < 16)
	{
		if ((argv[1][2 * p_cont] >= '1') && (argv[1][2 * p_cont] <= '4')
			&& (p_cont < 15) && (argv[1][2 * p_cont + 1] == ' '))
		{
			pos[p_cont] = argv[1][2 * p_cont];
			p_cont++;
		}
		else if ((argv[1][2 * p_cont] >= '1') && (argv[1][2 * p_cont] <= '4')
		&& (p_cont == 15))
		{
			pos[p_cont] = argv[1][2 * p_cont];
			p_cont++;
		}
		else
			return (0);
	}
	return (pos);
}

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] == s2[count] && count < 4)
		count++;
	if (count == 4)
		return (-1);
	else
		return (0);
}

int		ft_strcmp2(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
		count++;
	if (s1[count] < s2[count])
		return (-1);
	else if (s1[count] > s2[count])
		return (1);
	else
		return (0);
}

int		main(int argc, char *argv[])
{
	char	*input;
	char	***matrix;
	int		i;

	input = malloc(16);
	input = args(argc, argv);
	i = 0;
	if (input == NULL || ft_strcmp2(input, "2222222222222222") == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	matrix = build_matrix(input);
	if (matrix != NULL)
	{
		while (check_matrix(matrix) == 0)
			do_modifications(matrix);
		if (double_check(matrix, input) != 0)
			write(1, "Error\n", 6);
		else if (check_matrix(matrix) == 1)
			print_matrix(matrix);
	}
	else
		write(1, "Error\n", 6);
}
