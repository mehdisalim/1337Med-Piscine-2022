/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:19:23 by esalim            #+#    #+#             */
/*   Updated: 2022/04/12 21:35:32 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(len * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	return (len);
}
