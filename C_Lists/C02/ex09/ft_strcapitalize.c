/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:19:08 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 17:27:45 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		cont;
	char	a;
	char	d;

	cont = 0;
	while (str[cont] != '\0')
	{
		a = str[cont - 1];
		if (65 <= str[cont] && str[cont] <= 90)
			str[cont] = str[cont] + 32;
		if (cont == 0 || (a >= 32 && a <= 47) || (a >= 58 && a <= 64) ||
		(a >= 91 && a <= 96) || (a >= 123 && a <= 126))
		{
			if ((65 <= str[cont] && str[cont] <= 90)
			|| (97 <= str[cont] && str[cont] <= 122))
				str[cont] = str[cont] - 32;
		}
		cont++;
	}
	return (str);
}
