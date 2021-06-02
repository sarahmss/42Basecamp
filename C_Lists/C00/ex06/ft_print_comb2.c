/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:43:20 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/05 20:02:18 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(int ten1, int unity1, int ten2, int unity2)
{
	int		space;
	char	test[4];

	test[0] = '9';
	test[1] = '8';
	test[2] = '9';
	test[3] = '9';
	space = 32;
	write(1, &ten1, 1);
	write(1, &unity1, 1);
	write(1, &space, 1);
	write(1, &ten2, 1);
	write(1, &unity2, 1);
	if (ten1 + unity1 + ten2 + unity2 != test[0] + test[1] + test[2] + test[3])
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	ut[4];

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ut[0] = '0' + (a / 10);
			ut[1] = '0' + (a % 10);
			ut[2] = '0' + (b / 10);
			ut[3] = '0' + (b % 10);
			if (a != b)
				ft_print_nums(ut[0], ut[1], ut[2], ut[3]);
			b++;
		}
		a++;
	}
}
