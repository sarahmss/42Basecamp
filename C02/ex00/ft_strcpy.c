/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:57:56 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 23:38:57 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	dest = '\0';
	return (dest);
}
