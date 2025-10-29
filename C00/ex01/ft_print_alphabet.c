/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:50:30 by ttarverd          #+#    #+#             */
/*   Updated: 2025/08/31 11:50:31 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void) {
	
	char alpha;

	alpha = 'a';
	while(alpha <= 'z') {
		write(1, &alpha, 1);
		alpha++;
 }
}