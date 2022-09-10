/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:25:33 by esalim            #+#    #+#             */
/*   Updated: 2022/03/28 11:11:48 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	s;
	int	length;

	i = 0;
	length = size - 1;
	while (i < (size / 2))
	{
		s = tab[i];
		tab[i] = tab[length - i];
		tab[length - i] = s;
		i++;
	}
}
