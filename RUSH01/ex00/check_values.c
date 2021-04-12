/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:46:00 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/11 18:40:37 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "headers/check_values.h"

char	**ft_listvalues(char n, char m)
{
	char	**values;

	values = NULL;
	if (n == '4' && m == '1')
		values = ft_listvalues_41();
	else if (n == '1' && m == '4')
		values = ft_listvalues_14();
	else if (n == '3' && m == '2')
		values = ft_listvalues_32();
	else if (n == '2' && m == '3')
		values = ft_listvalues_23();
	else if (n == '3' && m == '1')
		values = ft_listvalues_31();
	else if (n == '1' && m == '3')
		values = ft_listvalues_13();
	else if (n == '2' && m == '2')
		values = ft_listvalues_22();
	else if (n == '2' && m == '1')
		values = ft_listvalues_21();
	else if (n == '1' && m == '2')
		values = ft_listvalues_12();
	return (values);
}
