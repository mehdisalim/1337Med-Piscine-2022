/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:16:47 by esalim            #+#    #+#             */
/*   Updated: 2022/04/11 23:23:52 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(char) * i);
	if (!dest)
		return ((char *) 0);
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}		
	dest[j] = 0;
	return (dest);
}
