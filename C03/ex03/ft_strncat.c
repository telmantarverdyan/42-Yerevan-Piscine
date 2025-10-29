/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:20:21 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/03 14:11:47 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *start = dest;

    while (*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0' && nb > 0)
    {
        *dest = *src;
        dest++;
        src++;
        nb--;
    }
    *dest = '\0';
    return (start);
}

/*
int main()
{
    char dest[20] = "Hello";
    char src[] = "World";
    printf("%s\n", ft_strncat(dest, src, 9));
    return (0);
}
*/
