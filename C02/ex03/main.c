/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:43:29 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 23:45:39 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric();

int	main(void)
{
	char	*str;
	int		ret;

	str = "\0\0\0";
	ret = ft_str_is_numeric(str);
	printf("%d", ret);
}
