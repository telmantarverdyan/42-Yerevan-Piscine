/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:42:31 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/03 11:23:37 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void) 
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				char a_char = '0' + a;
				char b_char = '0' + b;
				char c_char = '0' + c;
				write(1, &a_char, 1);
				write(1, &b_char, 1);
				write(1, &c_char, 1);
				if (!(a == 7 && b == 8 && c == 9))
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
	return (0);
}
