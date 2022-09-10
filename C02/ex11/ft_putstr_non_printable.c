/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:26:29 by esalim            #+#    #+#             */
/*   Updated: 2022/03/30 15:03:25 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	checkhexadecimel(char src, int i)
{
	char	c;

	while ("0123456789abcdef"[i] != 0)
	{
		if (i <= 15 && i == src)
		{
			c = "0123456789abcdef"[i];
			write(1, "\\0", 2);
			write(1, &c, 1);
		}
		else if (i > 15 && i < 32 && i == src)
		{
			c = "0123456789abcdef"[i];
			write(1, "\\1", 2);
			write(1, &c, 1);
		}
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		if (*str >= 32)
		{
			write(1, &*str, 1);
		}
		else
		{
			checkhexadecimel(*str, i);
		}
		str++;
	}
}
