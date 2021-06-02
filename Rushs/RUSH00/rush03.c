/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:48:28 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/05 02:27:20 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar();

void	rush(int x, int y)
{
	int		act_column;
	int		act_line;
	char	linebroken;

	linebroken = '\n';
	if (x >= 1 && y >= 1)
	{
		act_line = 0;
		while (act_line < y)
		{
			act_column = 0;
			while (act_column < x)
			{
				ft_putchar(act_line, act_column, y - 1, x - 1);
				act_column++;
			}
			write(1, &linebroken, 1);
			act_line++;
		}
	}
}
