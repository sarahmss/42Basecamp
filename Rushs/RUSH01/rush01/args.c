/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:20:02 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/10 19:39:40 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	args(char *i_line, char *f_line, char *i_col, char *f_col)
{
	char	line_vist[8];
	char	col_vist[8];
	int		pos1;
	int		pos2;
	int		cont;

	pos1 = 0;
	pos2 = 1;
	cont = 0;
	while (cont < 4)
	{
		line_vist[pos1] = *i_line;
		line_vist[pos2] = *f_line;
		col_vist[pos1] = *i_col;
		col_vist[pos2] = *f_col;
		pos1 =  pos1 + 2;
		pos2 = pos2 + 2;
		cont++;
	}
}
