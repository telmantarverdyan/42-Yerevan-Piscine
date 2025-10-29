/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:57:58 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/10 14:15:13 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *mem;
    size_t i;
    size_t count;

    if (min >= max)
    {
        return (NULL);
    }

    count =(size_t)(max - min);

    if (count > SIZE_MAX / sizeof(int))
    {
        return (NULL);
    }

    mem = malloc(count * sizeof(int));
    if (mem == NULL)
    {
        return (NULL);
    }

    i = 0;
    while (i < count)
    {
        mem[i] = min + i;
        i++;
    }
    return (mem);
}