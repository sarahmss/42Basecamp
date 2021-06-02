/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_col.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:03:32 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/11 18:22:46 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARE_COL_H
# define COMPARE_COL_H

int		ft_strlen(char *str);

char	*compare_result(char **result, int n);

void	search_result(char **result, int *sol, char *str, char *to_compare);

#endif
