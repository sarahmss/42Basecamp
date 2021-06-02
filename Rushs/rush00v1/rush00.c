/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 03:59:05 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/03 04:04:53 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar();

void	rush(int x, int y)
{
	int cont;
	char abc[5] = "ABC \n";

	cont = 0;
	if (x == 1 && y == 1)
	{
		ft_putchar(abc[0]);
		ft_putchar(abc[4]);
	}
		else
		{
			/* top edge A((x-2).B)C */
			ft_putchar(abc[0]);
			while (cont < x - 2)
			{
				ft_putchar(abc[1]);
				cont++;
			}
			cont = 0;
			ft_putchar(abc[2]);
			ft_putchar(abc[4]);
			/* left column (y-2).B */
			while (cont < y - 2)
			{
				ft_putchar(abc[1]);
				cont++;
			/* righ column: in each line ((x-2)' ') */
				if (y - 2)
				{
					ft_putchar(abc[1]);
					ft_putchar(abc[3]);
				}
				ft_putchar(abc[4]);
			}
			cont = 0;
			/* bottom edge A((x-2).B)C */
			ft_putchar(abc[0]);
			if (y > 1)
			{
				while (cont < x - 2)
			{
				ft_putchar(abc[1]);
				cont++;
			}
			ft_putchar(abc[2]);
			ft_putchar(abc[4]);
			}
		}
}
