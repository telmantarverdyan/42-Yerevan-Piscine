/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:26:52 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/03 12:47:20 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int i;

    if (to_find[0] == '\0')
        return (str);

    i = 0;
    while (str[i] != '\0')
    {
        int j = 0;

        while(to_find[j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
        {
            return (str + i);
        }
        i++;
    }
    return (0);
}

/*
int main(void)
{
    char str[] = "Hello World";
    char to_find[] = "World";
    printf("%s\n", ft_strstr(str, to_find));
    return (0);
}
*/