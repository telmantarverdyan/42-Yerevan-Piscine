/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:29:52 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/18 10:39:48 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int is_sep(char c, char *charset)
{
    int i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int ft_find_sep(char *str, char *charset)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == charset[0])
            return (i);
        i++;
    }
    return (-1);
}

char *ft_copy(char *dest, char *src, int size)
{
    int i;

    i = 0;
    while(i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

int ft_count_words(char *str, char *charset)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        if (!is_sep(str[i], charset))
        {
            count++;
            while (str[i] && !is_sep(str[i], charset))
                i++;
        }
        else
            i++;
    }
    return (count);
}

char **ft_split(char *str, char *charset)
{
    int i;
    int j;
    int k;
    int size;
    char **result;

    i = 0;
    j = 0;
    k = 0;
    size = ft_strlen(str); 
    result = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
    while (i < size)
    {
        if (!is_sep(str[i], charset))
        {
            j = 0;
            while (str[i + j] && !is_sep(str[i + j], charset))
                j++;
            result[k] = malloc(sizeof(char) * (j + 1));
            ft_copy(result[k], str + i, j);
            k++;
            i += j;
        }
        else
            i++;
    }
    result[k] = 0;
    return (result);
}