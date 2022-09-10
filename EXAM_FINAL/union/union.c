/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:29:41 by esalim            #+#    #+#             */
/*   Updated: 2022/04/15 00:49:38 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	no_seen_before(char *str, char c, int i)
{
	int j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int	i;
	int j;

	i = -1;
	while (str1[++i])
	{
		if (no_seen_before(str1, str1[i], i))
			write(1, &str1[i], 1);
	}
	j = -1;
	while (str2[++j])
	{
		if (no_seen_before(str2, str2[j], j) & no_seen_before(str1, str2[j], i))
				write(1, &str2[j], 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1],av[2]);
	}
	write(1, "\n", 1);
}
