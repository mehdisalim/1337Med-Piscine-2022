/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:10:02 by esalim            #+#    #+#             */
/*   Updated: 2022/04/14 21:16:17 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		while (*(--av[1]))
			write(1, &*av[1], 1);
	}
	write(1, "\n", 1);
}