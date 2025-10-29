/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:47:28 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/06 11:01:44 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_prime(int num)
{
    int i;

    if (num < 2)
    {
        return (0);
    }
    i = 2;
    while (i * i <= num)
    {
        if (num % i == 0)
        {
            return(0);
        }
        i++;
    }
    return (1);
}


int ft_find_next_prime(int nb)
{
    if (nb < 2)
        nb = 2;
    while (!check_prime(nb))
    {
        nb++;
    }
    return (nb);
}