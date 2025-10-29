/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:26:08 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/17 16:20:25 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return (0);
    }

    if (nb == 0 || nb == 1)
    {
        return (1);
    }

    return (ft_recursive_factorial(nb - 1) * nb);
}