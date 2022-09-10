/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:05:28 by esalim            #+#    #+#             */
/*   Updated: 2022/04/13 17:18:30 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_repeat(char c, int n)
{
	while (--n > 0)
		write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	repeat;

	i = 0;
	if (ac == 2)
	{
		repeat = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_repeat(av[1][i],av[1][i] - 'a' + 2);
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_repeat(av[1][i],av[1][i] - 'A' + 2);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
