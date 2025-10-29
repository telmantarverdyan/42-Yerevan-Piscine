/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:48:25 by ttarverd          #+#    #+#             */
/*   Updated: 2025/08/31 11:48:39 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n) {
	if(n < 0)
		write(1, "N", 1); 
	else
		write(1, "P", 1);
}

/*
int main(void)
{
    ft_is_negative(-5); 
    ft_is_negative(3);  
    write(1, "\n", 1); 
    return 0;
}
*/
