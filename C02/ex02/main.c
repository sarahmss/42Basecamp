/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:40:31 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 23:42:49 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha();

int	main(void)
{
	char	*str;
	int		ret;

	str = "as5cacac";
	ret = ft_str_is_alpha(str);
	printf("%d", ret);
}
