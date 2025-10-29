/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 13:57:14 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/09 10:34:20 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_str_swap(char **a, char **b);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int ft_sort_params(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if(ft_strcmp(argv[i], argv[j]) > 0)
            {
                ft_str_swap(&argv[i], &argv[j]);
            }
            j++;
        }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}

void ft_str_swap(char **a, char **b)
{
    char *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv)
{
    ft_sort_params(argc, argv);
    return (0);
}