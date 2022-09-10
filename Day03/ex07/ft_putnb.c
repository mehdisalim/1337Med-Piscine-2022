/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:57:35 by esalim            #+#    #+#             */
/*   Updated: 2022/03/25 00:51:38 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_length_nb(int n)
{
	int	value;

	value = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		value = value * 10;
	}
	return (value);
}

void	ft_putnbr(int nb)
{
	int	length;

	length = ft_length_nb(nb);
	while (length != 0)
	{
		ft_putchar(nb / length + '0');
		nb = nb % length;
		length = length / 10;
	}
}
