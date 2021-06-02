/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smodesto <smodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:14:08 by smodesto          #+#    #+#             */
/*   Updated: 2021/04/28 18:13:31 by smodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int *ft_range(int min, int max)
{
    int *matrix;
    int  i;

    i = 0;
    if (min >= max)
        return (NULL);
    matrix = malloc((max - min) * 4);
    while (min < max)
    {
        matrix[i] =  min;
        min++;
        i++;
    }
    
    return (matrix);
}

int main()
{
    char *str;
    int *matrix = ft_range(1, 10);
    int i = 0;
	while (i < 9)
	{
		printf("%d ", matrix[i]);
		i++;
	}
	printf("| min %d ", 1);
	printf("| max %d", 10);
	printf("\n");
}