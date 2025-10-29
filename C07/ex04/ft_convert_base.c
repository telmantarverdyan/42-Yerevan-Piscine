/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:17:07 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/11 13:23:23 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern int ft_strlen_base(char *base);
extern int is_valid_base(char *base);
extern int ft_atoi_base(char *str, char *base_from);

int	ft_strlen_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	calc_len(long n, int base_to_len, int neg)
{
	int	len;

	len = 1;
	while (n >= base_to_len)
	{
		n /= base_to_len;
		len++;
	}
	return (len + neg);
}

void	fill_result(char *result, long n, char *base_to, int len, int neg)
{
	int	base_to_len;

	base_to_len = ft_strlen_base(base_to);
	result[len] = '\0';
	while (len - neg > 0)
	{
		result[len - 1] = base_to[n % base_to_len];
		n /= base_to_len;
		len--;
	}
	if (neg)
		result[0] = '-';
}

char	*ft_putnb_base_str(int nbr, char *base_to)
{
	int		base_to_len;
	char	*result;
	long	n;
	int		len;
	int		neg;

	base_to_len = ft_strlen_base(base_to);
	n = nbr;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	len = calc_len(n, base_to_len, neg);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	fill_result(result, n, base_to, len, neg);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	value;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (0);
	value = ft_atoi_base(nbr, base_from);
	return (ft_putnb_base_str(value, base_to));
}