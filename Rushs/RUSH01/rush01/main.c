/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 01:30:48 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/10 19:23:45 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//argv[1] argv[2] ... argv[16]
// col1up col2up col3up col4up col1down col2down col3down col4down
// row1left row2left row3left row4left row1right row2right row3right row4right
#include <stdio.h>

void	args(char *i_line, char *f_line, char *i_col, char *f_col);

int		main(int argc, char *argv[])
{
	int c_col;
	int c_lin;

	c_col = 1;
	c_lin = 9;
	while ((c_col <= 4) && (c_lin <= 12))
	{
		args(argv[c_col], argv[c_col + 4], argv[c_lin], argv[c_lin + 4]);
		c_col++;
		c_lin++;
	}
}
