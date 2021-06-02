/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:52:18 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 23:45:03 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		cont;
	char	numb;

	cont = 0;
	while (str[cont] != '\0')
	{
		numb = str[cont];
		if (48 <= numb && numb <= 57)
			cont++;
		else
			return (0);
	}
	return (1);
}
