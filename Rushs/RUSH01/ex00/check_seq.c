/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_seq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-oliv <dde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:35:21 by dde-oliv          #+#    #+#             */
/*   Updated: 2021/04/12 00:31:17 by dde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**check_seq_helper1(char n, char m, char **seq)
{
	if (n == '1' && m == '2')
	{
		seq[0] = "4123";
		seq[1] = "4213";
	}
	else if (n == '3' && m == '2')
	{
		seq[0] = "1243";
		seq[1] = "1342";
		seq[2] = "2341";
	}
	else if (n == '2' && m == '3')
	{
		seq[0] = "1432";
		seq[1] = "2341";
		seq[2] = "3421";
	}
	return (seq);
}

char	**check_seq_helper2(char n, char m, char **seq)
{
	if (n == '1' && m == '3')
	{
		seq[0] = "4132";
		seq[1] = "4231";
		seq[2] = "4312";
	}
	else if (n == '2' && m == '2')
	{
		seq[0] = "1423";
		seq[1] = "2143";
		seq[2] = "2413";
		seq[3] = "3142";
		seq[4] = "3241";
		seq[5] = "3412";
	}
	return (seq);
}

char	**check_seq_helper3(char n, char m, char **seq)
{
	if (n == '2' && m == '1')
	{
		seq[0] = "3124";
		seq[1] = "3214";
	}
	else if (n == '3' && m == '1')
	{
		seq[0] = "1324";
		seq[1] = "2314";
		seq[2] = "2134";
	}
	return (seq);
}

char	**check_seq(char n, char m, char **seq)
{
	if (n == '4' && m == '1')
	{
		seq[0] = "1234";
	}
	else if (n == '1' && m == '4')
	{
		seq[0] = "4321";
	}
	else if ((n == '1' && m == '2') || (n == '3' && m == '2'))
		seq = check_seq_helper1(n, m, seq);
	else if (n == '2' && m == '3')
		seq = check_seq_helper1(n, m, seq);
	else if ((n == '1' && m == '3') || (n == '2' && m == '2'))
		seq = check_seq_helper2(n, m, seq);
	else if (n == '2' && m == '1')
		seq = check_seq_helper3(n, m, seq);
	else if (n == '3' && m == '1')
		seq = check_seq_helper3(n, m, seq);
	return (seq);
}
