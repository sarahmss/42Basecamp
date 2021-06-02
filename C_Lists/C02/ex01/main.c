/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:37:12 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 23:38:00 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strncpy();

int	main(void)
{
	char	dest[50];
	char	*src;

	src = "sim, tenho que copiar ate aqui........";
	printf("%s", dest);
	ft_strncpy(dest, src, 30);
	printf("%s", dest);
}
