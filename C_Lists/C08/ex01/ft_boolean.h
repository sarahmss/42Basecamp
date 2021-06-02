/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:32:12 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/11 18:32:54 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
#include <unistd.h>
# define EVEN(x) x % 2 == 0
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

typedef int     t_bool;
#endif
