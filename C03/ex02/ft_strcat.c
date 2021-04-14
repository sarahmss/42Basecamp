/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:10:09 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/13 12:59:59 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int cont;
	int size;

	cont = 0;
	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	while (src[cont] != '\0')
	{
		dest[size] = src[cont];
		size++;
		cont++;
	}
	dest[size] = '\0';
	return (dest);
}
