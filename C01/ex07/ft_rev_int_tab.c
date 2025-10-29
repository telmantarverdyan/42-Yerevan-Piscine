/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:54:27 by ttarverd          #+#    #+#             */
/*   Updated: 2025/09/04 18:50:32 by ttarverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    ft_rev_int_tab(tab, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", tab[i]);
    return 0;
}