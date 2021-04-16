/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_matrix.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:57:57 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/11 18:33:20 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_MATRIX_H
# define CHECK_MATRIX_H

char	*compare_line(char *to_compare, char **line, int n_to_compare);

char	*compare_line_result(char **result, int n);

char	*compare_line(char *to_compare, char **line, int n_to_compare);

char	*compare_col(char *to_compare, char ***col, int n_compare, int n_col);

#endif
