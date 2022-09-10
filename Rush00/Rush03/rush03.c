/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:42:52 by yel-hadr          #+#    #+#             */
/*   Updated: 2022/03/27 18:57:53 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_print(int x, char f, char m, char e)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(f);
		else if (i == x)
			ft_putchar(e);
		else
			ft_putchar(m);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print(x, 'A', 'B', 'C');
		else if (i == y)
			ft_print(x, 'A', 'B', 'C');
		else
			ft_print(x, 'B', ' ', 'B');
		i++;
	}
}
