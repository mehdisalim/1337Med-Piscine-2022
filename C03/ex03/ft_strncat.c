/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:12:34 by esalim            #+#    #+#             */
/*   Updated: 2022/03/31 22:27:31 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	while (dest[x] != 0)
		x++;
	y = 0;
	while (src[y] != 0 && y < nb)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
