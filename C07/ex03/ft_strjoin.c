/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:31:10 by esalim            #+#    #+#             */
/*   Updated: 2022/04/13 15:52:19 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		i;
	int		t;
	int		s;

	i = 0;
	t = 0;
	text = malloc(sizeof(strs));
	while (i < size)
	{
		s = 0;
		while (strs[i][s])
			text[t++] = strs[i][s++];
		s = 0;
		while (sep[s] && i != size - 1)
			text[t++] = sep[s++];
		i++;
	}
	text[t] = 0;
	return (text);
}
