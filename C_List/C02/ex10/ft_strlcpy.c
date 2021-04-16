/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:18:58 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 23:56:00 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	c = 0;
	while (src[c] != '\0' && c < size)
	{
		dest[a + c] = src[c];
		c++;
	}
	dest[a + c] = '\0';
	while (src[b] != '\0')
	{
		b++;
	}
	return (b);
}
