/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:37:27 by smodesto          #+#    #+#             */
/*   Updated: 2021/06/08 15:44:43 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str, char n)
{
	int	len;

	len = 0;
	while (str[len] != n)
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
		if (!s[i++])
			return (NULL);
	return ((char *) &s[i]);
}

char	*ft_strdup(const char *src, char c)
{
	char	*new_str;
	int		i;
	int		src_len;

	src_len = 0;
	while (src[src_len] != c)
		src_len++;
	new_str = malloc((sizeof (char)) * src_len + 1 );
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (src[i] != c)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_f;
	int		i;
	int		j;
	int		len;

	len = ft_strlen((char *)s1, '\0') + ft_strlen((char *)s2, '\0');
	str_f = malloc(sizeof(char) * (len + 1));
	if (str_f == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len)
	{
		if (i < ft_strlen((char *)s1, '\0'))
			str_f[i] = s1[i];
		else
		{
			str_f[i] = s2[j];
			j++;
		}
		i++;
	}
	str_f[i] = '\0';
	return (str_f);
}

void	ft_free(char **s_list)
{
	if (*s_list != NULL)
	{
		free(*s_list);
		*s_list = NULL;
	}
}
