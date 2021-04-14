/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:10:09 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/13 01:06:18 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int cont;
	int size;

	cont = 0;
	size = 0;
	while (dest[size])
		size++;
	while (src[size] && nb > 0)
	{
		dest[size] = src[cont];
		size++;
		cont++;
		nb--;
	}
	dest[size] = '\0';
	return (dest);
}
