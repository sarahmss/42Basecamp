/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:37:54 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/12 01:47:06 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

char	**ft_listvalues(char n, char m);

int		check_matrix(char ***matrix);

void	do_modifications(char ***matrix);

int		ft_strlen(char *str);

char	***build_matrix(char *input);

int		double_check(char ***matrix, char *input);

#endif
