/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 00:11:10 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/04 02:08:39 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int act_line, int act_column, int y, int x)
{
	char abc[4];

	abc[0] = 'A';
	abc[1] = 'B';
	abc[2] = 'C';
	abc[3] = ' ';
	if (act_line == 0)
		if (act_column == 0)
			write(1, &abc[0], 1);
		else if (act_column == x)
			write(1, &abc[2], 1);
		else
			write(1, &abc[1], 1);
	else if (act_line == y)
		if (act_column == 0)
			write(1, &abc[0], 1);
		else if (act_column == x)
			write(1, &abc[2], 1);
		else
			write(1, &abc[1], 1);
	else if (act_column == 0 || act_column == x)
		write(1, &abc[1], 1);
	else
		write(1, &abc[3], 1);
}
