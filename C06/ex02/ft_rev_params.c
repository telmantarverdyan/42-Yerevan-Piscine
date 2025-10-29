/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 13:29:43 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/07 13:56:21 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_rev_params(int argc, char **argv)
{
    int i;
    int j;

    i = argc - 1;
    while (i > 0)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i--;
    }
    return 0;
}

int main(int argc, char **argv)
{
    ft_rev_params(argc, argv);
    return 0;
}