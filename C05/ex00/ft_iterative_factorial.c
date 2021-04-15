/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:42:21 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/14 14:42:00 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_iterative_factorial(int nb)
{
	int nb_factorial;
	int n;

	n = 1;
	nb_factorial = 1;
	if (nb <= 0)
		return (0);
	if(nb == 1)
		return (1);
	while(n <= nb)
	{
		nb_factorial = nb_factorial * n;
		n++;
	}
	return(nb_factorial);
}
