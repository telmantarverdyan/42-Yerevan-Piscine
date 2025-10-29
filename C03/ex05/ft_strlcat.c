/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:48:01 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/03 13:05:05 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int dest_len;
    unsigned int src_len;

    i = 0;
    dest_len = 0;
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }
    
    src_len = 0;
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    if (size <= dest_len)
    {
        return (size + src_len);
    }
    
    while (src[i] != '\0' && i < size - dest_len - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + i);
}