/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 10:51:15 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/07 11:49:18 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_program_name(int argc, char **argv)
{
    int i;

    (void) argc;
    
    i = 0;
    while (argv[0][i] != '\0')
    {
        write(1, &argv[0][i], 1);
        i++;
    }
    write(1, "\n", 1);

    return (0);
}

int main(int argc, char **argv)
{
    ft_print_program_name(argc, argv);
    return (0);
}