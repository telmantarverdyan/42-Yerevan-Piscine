/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:44:26 by ttarverd          #+#    #+#             */
/*   Updated: 2025/08/31 11:44:29 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb2(void)
{
    int a = 0;
    int b = 0;

    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            char a_tens = '0' + (a / 10);
            char a_ones = '0' + (a % 10);
            char b_tens = '0' + (b / 10);
            char b_ones = '0' + (b % 10);
            write(1, &a_tens, 1);
            write(1, &a_ones, 1);
            write(1, " ", 1);
            write(1, &b_tens, 1);
            write(1, &b_ones, 1);
            if (!(a == 98 && b == 99))   
            {
                write(1, ", ", 2);
            } 
            b++;    
        }
        a++;
    }
}
