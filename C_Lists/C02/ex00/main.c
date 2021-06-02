/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:38:51 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/08 23:39:46 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcpy();

int	main(void)
{
	char	*src;
	char	dest[15];

	src = "Hello Wolrd!!";
	printf("primeiro: %s\n", src);
	ft_strcpy(dest, src);
	printf("segundo: %s\n", src);
}
