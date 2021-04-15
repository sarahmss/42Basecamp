/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:47:03 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/15 20:15:47 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt (int nb)
{
	int sqrt;
	int i;
	int s_nb;

	s_nb = nb;
	sqrt = 0;
	i = 1;
	while(nb >= i)
	{
		nb = nb - i;
		i = i + 2;
		sqrt++;
	}
	if (sqrt * sqrt == s_nb)
		return (sqrt);
	else
		return (0);
}
