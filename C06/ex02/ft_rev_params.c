/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:07:10 by esalim            #+#    #+#             */
/*   Updated: 2022/04/04 18:00:28 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	size;

	size = argc - 1;
	while (size > 0)
	{
		while (*argv[size])
		{
			write(1, &*argv[size], 1);
			argv[size]++;
		}
		write(1, "\n", 1);
		size--;
	}
	return (0);
}
