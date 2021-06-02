/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_seq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:23:57 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/12 01:44:08 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "headers/inter_seq.h"

char	*inter_seq(char *str1, char *str2)
{
	char	*result;
	int		index;
	int		i;

	result = malloc(4);
	index = 0;
	while (*str1 != '\0')
	{
		i = 0;
		while (str2[i] != '\0')
		{
			if (*str1 == str2[i])
			{
				result[index] = *str1;
				index++;
			}
			i++;
		}
		str1++;
	}
	if (ft_strlen(result) == 0)
		return (0);
	return (result);
}
