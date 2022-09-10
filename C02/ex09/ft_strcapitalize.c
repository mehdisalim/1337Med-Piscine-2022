/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:06:26 by esalim            #+#    #+#             */
/*   Updated: 2022/03/30 15:02:22 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nonprintable;

	i = 0;
	nonprintable = 1;
	ft_strlowcase(str);
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (nonprintable == 1)
				str[i] -= 32;
			nonprintable = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			nonprintable = 0;
		}
		else
		{
			nonprintable = 1;
		}
		i++;
	}
	return (str);
}
