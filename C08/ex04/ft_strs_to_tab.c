/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 23:22:15 by esalim            #+#    #+#             */
/*   Updated: 2022/04/12 01:28:30 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = ft_strlen(src);
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return ((char *) 0);
	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}		
	dest[j] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*stock_str;

	stock_str = malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock_str)
		return (0);
	i = 0;
	while (i < ac && av)
	{
		stock_str[i].copy = ft_strdup(av[i]);
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		i++;
	}
	stock_str[i].str = 0;
	stock_str[i].copy = 0;
	return (stock_str);
}
