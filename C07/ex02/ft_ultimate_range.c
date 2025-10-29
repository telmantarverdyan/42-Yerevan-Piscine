/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:17:49 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/10 14:13:59 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *mem;
    int count;

    if (min >= max)
    {
        *range = (NULL);
        return (0);
    }

    count = max - min;

    mem = malloc(count * sizeof(int));
    if (mem == NULL)
    {
        return (-1);
    }

    i = 0;
    while (i < count)
    {
        mem[i] = min + i;
        i++;
    }
    *range = mem;
    return (count);
}