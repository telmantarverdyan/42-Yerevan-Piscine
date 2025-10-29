/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 21:09:45 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/02 13:58:44 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_address(void *addr)
{
	unsigned long long	address;
	char				*hex;
	int					i;

	address = (unsigned long long)addr;
	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		put_char(hex[(address >> (i * 4)) & 0xF]);
		i--;
	}
	put_char(':');
	put_char(' ');
}

void	print_hex(unsigned char *line, unsigned int len)
{
	char			*hex;
	unsigned int	i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i < len)
		{
			put_char(hex[line[i] / 16]);
			put_char(hex[line[i] % 16]);
		}
		else
		{
			put_char(' ');
			put_char(' ');
		}
		if (i % 2 == 1)
			put_char(' ');
		i++;
	}
}

void	print_chars(unsigned char *line, unsigned int len)
{
	unsigned int	j;
	unsigned char	c;

	j = 0;
	while (j < len)
	{
		c = line[j];
		if (c >= 32 && c <= 126)
			put_char(c);
		else
			put_char('.');
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	line_len;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		if ((size - i) > 16)
			line_len = 16;
		else
			line_len = size - i;
		print_address(ptr + i);
		print_hex(ptr + i, line_len);
		print_chars(ptr + i, line_len);
		put_char('\n');
		i += 16;
	}
	return (addr);
}
