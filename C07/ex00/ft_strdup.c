/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:38:17 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/09 10:57:25 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0;
    int j = 0;
    char *s;  

    while (src[i] != '\0')
        i++;

    s = (char *)malloc((i + 1) * sizeof(char));
    if (s == NULL)
        return (NULL);

    j = 0;
    while (j <= i)
    {
        s[j] = src[j];
        j++;
    }
    s[i] = '\0';

    return (s);
}