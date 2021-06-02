/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:01:27 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/06 22:39:10 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int numb1;
	int numb2;

	numb1 = *a;
	numb2 = *b;
	*a = numb1 / numb2;
	*b = numb1 % numb2;
}
