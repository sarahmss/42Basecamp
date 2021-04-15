/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:10:09 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/15 01:11:44 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *p_dest;

	p_dest = dest;
	while (*p_dest)
		p_dest++;
	while (*src != '\0' && nb > 0)
	{
		*p_dest = *src;
		p_dest++;
		src++;
		nb--;
	}
	*p_dest = '\0';
	return (dest);
}
