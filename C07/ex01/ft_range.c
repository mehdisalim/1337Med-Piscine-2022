/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:46:07 by esalim            #+#    #+#             */
/*   Updated: 2022/04/13 14:10:24 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*t;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	t = malloc(len * sizeof(int));
	if (!t)
		return ((int *)0);
	while (i < len)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
