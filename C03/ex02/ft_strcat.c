/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:48:41 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/03 12:19:24 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int i;
    char *start = dest;

    i = 0;
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (start);  
}

/*
int main(void)
{
    char dest[20] = "Hello ";
    char src[] = "World";
    printf("%s\n", ft_strcat(dest, src));
    return (0);
}
*/