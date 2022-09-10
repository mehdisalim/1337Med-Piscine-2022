/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:23:10 by esalim            #+#    #+#             */
/*   Updated: 2022/03/26 00:12:49 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_counting(char a, char b, char c)
{
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_print_numbers(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb(void)
{	
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	ft_counting(a, b, c);
}
