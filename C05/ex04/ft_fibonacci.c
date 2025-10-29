/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:25:38 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/06 10:06:15 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return (-1);
    }
    if (index == 0)
    {
        return (0);
    }
    if (index == 1)
    {
        return (1);
    }
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}