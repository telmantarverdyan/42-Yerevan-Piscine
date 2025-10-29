/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:11:22 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/12 15:04:12 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_char_in_base(char c, char *base)
{
    int i = 0;

    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_strlen_base(char *base)
{
    int i = 0;

    while (base[i])
        i++;
    return (i);
}

int ft_check_base(char *base)
{
    int i;
    int j;

    if (ft_strlen_base(base) < 2)
        return (0);
    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int base_len;

    if (!ft_check_base(base))
        return (0);
    base_len = ft_strlen_base(base);

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;

    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }

    int value;
    while ((value = ft_char_in_base(str[i], base)) != -1)
    {
        result = result * base_len + value;
        i++;
    }
    return (result * sign);
}


int main()
{
    printf("%d\n", ft_atoi_base("-+1234567890", "0213"));
    return 0;
}