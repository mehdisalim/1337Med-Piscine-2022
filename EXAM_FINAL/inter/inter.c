/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:37:28 by esalim            #+#    #+#             */
/*   Updated: 2022/04/14 23:19:35 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	scan(char *str, char c, int n)
{
	while (n >= 0)
	{
		if (str[n] == c)
			return (0);
		n--;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				if (scan(s1, s1[i], i - 1))
					write(1, &s1[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	write(1, "\n", 1);
}
