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

int ft_ultimate_range(int **range, int min, int max)
{
    int *matrix;
    int  i;

    i = 0;
    if (min >= max)
        return (-1);
    matrix = malloc((max - min) * 4);
    while (min < max)
    {
        matrix[i] =  min;
        min++;
        i++;
    }
    *range = matrix;
    return (i);
}

int main()
{
    int *range;
    int return_f;

    return_f = ft_ultimate_range(&range, 1, 10);
    char *str;
    int i = 0;
	while (i < 9)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("| min %d ", 1);
	printf("| max %d", 10);
    printf("| range %d", return_f);
	printf("\n");
}