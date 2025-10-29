/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:42:27 by ttarverd          #+#    #+#             */
/*   Updated: 2025/08/30 19:07:32 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char a, char b, char c, int x)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0)
		{
			ft_putchar(a);
		}
		else if (n == x - 1)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		n++;
	}
}

void	print_second_line(char a, char b, int x)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0 || n == x - 1)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar(b);
		}
		n++;
	}
}

void	rush(int x, int y)
{
	int	n;

	n = 0;
	while (n < y)
	{
		if (n == 0)
		{
			print_line('/', '*', '\\', x);
			ft_putchar('\n');
		}
		else if (n == y - 1)
		{
			print_line('\\', '*', '/', x);
			ft_putchar('\n');
		}
		else
		{
			print_second_line('*', ' ', x);
			ft_putchar('\n');
		}
		n++;
	}
}
