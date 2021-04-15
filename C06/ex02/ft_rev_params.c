/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:28:02 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/15 18:25:20 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_rev_params(char *str)
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
	int i;

	i = argc;
	while (--i > 0)
		ft_print_rev_params(argv[i]);
	return (0);
}
