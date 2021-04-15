/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:18:41 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/15 22:09:18 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	if (nb < 0 || nb == 1)
		return (0);
	if ((nb % 2 == 0 && nb != 2) || (nb % 3 == 0 && nb != 3)
	|| (nb % 5 == 0 && nb != 5) || (nb % 7 == 0 && nb != 7))
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return(nb);
	else
		return(ft_find_next_prime(nb + 1));
}
int	main(void)
{
	printf("%d", ft_find_next_prime(54));
}
