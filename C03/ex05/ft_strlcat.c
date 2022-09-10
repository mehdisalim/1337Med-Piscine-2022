/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:00:43 by esalim            #+#    #+#             */
/*   Updated: 2022/04/09 21:44:01 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclength;
	unsigned int	destlength;

	i = 0;
	srclength = ft_strlen(src);
	destlength = ft_strlen(dest);
	if (size <= destlength)
		return (srclength + size);
	while (dest[i] != 0)
		i++;
	while (*src != 0 && i < (size - 1))
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = 0;
	return (destlength + srclength);
}
