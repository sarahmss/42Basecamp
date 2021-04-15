/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:01:29 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/15 18:23:24 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	write(1, str, cont);
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_program_name(argv[0]);
	return (0);
}
