/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_seq.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:59:01 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/11 18:39:28 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_SEQ_H
# define INTER_SEQ_H

int		ft_strlen(char *str);

char	*compare_result(char **result, int n);

void	search_result(char **result, int *sol, char *str, char *to_compare);

#endif
