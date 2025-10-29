/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:48:49 by ttarverd          #+#    #+#             */
/*   Updated: 2025/08/31 11:48:59 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void) {

        char alpha;

        alpha = 'z';
        while(alpha >= 'a') {
                write(1, &alpha, 1);
                alpha--;
 }
}
 
/*
int main(void) {

        ft_print_reverse_alphabet();
        return 0;
}
*/
