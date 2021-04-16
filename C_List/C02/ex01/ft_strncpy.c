/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:12:39 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 23:37:20 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strncpy(char *dest, char *src, unsigned int n)
{
	int cont;

	cont = -1;
	while (++cont < n)
	{
		dest[cont] = src[cont];
	}
	return (*dest);
}
