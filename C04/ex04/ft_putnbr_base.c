/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:21:25 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/06 10:23:00 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_check_base(char *base)
{
    int     i;
    int     j;
    int     length;

    length = 0;
    while (base[length])
        length++;
    if (length < 2)
        return (1);
    i = 0;
    while(base[i])
    {
        if (base[i] == '-' || base[i] == '+' || base[i] == ' '
        || (base[i] >= 9 && base[i] <= 13))
           return (1);
        i++;
    }
    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int base_size;
    long nb;

    if (ft_check_base(base) == 1)
        return;
    base_size = 0;
    while (base[base_size])
    {
        base_size++;
    }
    nb = nbr;
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= base_size)
    {
        ft_putnbr_base((int)(nb / base_size), base);
        ft_putchar(base[nb % base_size]);
    }
    else
    {
        ft_putchar(base[nb]);
    }
}

/*
int     main()
{
    write(1, "START\n", 6);
    ft_putnbr_base(8, "01");
    ft_putchar('\n');

    ft_putnbr_base(255, "01"); // binary
    ft_putchar('\n');

    ft_putnbr_base(255, "0123456789ABCDEF"); // hex
    ft_putchar('\n');
    write(1, "END\n", 4);
}
*/