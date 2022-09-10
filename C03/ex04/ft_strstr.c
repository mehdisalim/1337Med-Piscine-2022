/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:30:32 by esalim            #+#    #+#             */
/*   Updated: 2022/03/31 22:24:42 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != 0)
	{	
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
				return (str + i);
			else
				j++;
		}
		i++;
	}
	return (0);
}
