/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:46:50 by esalim            #+#    #+#             */
/*   Updated: 2022/03/28 11:40:29 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	swap;
	int	length;

	a = 0;
	length = size - 1;
	while (a < length)
	{
		b = 0;
		while (b < length - a)
		{
			if (tab[b + 1] < tab[b])
			{
				swap = tab[b + 1];
				tab[b + 1] = tab[b];
				tab[b] = swap;
			}
			b++;
		}
		a++;
	}
}
