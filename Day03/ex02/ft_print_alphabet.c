/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:15:21 by esalim            #+#    #+#             */
/*   Updated: 2022/03/25 00:19:20 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lastlitter;

	lastlist = 'z';
	while (lastlitter >= 'a' )
	{
		write(1, &lastlitter, 1);
		lastlitter --;
	}
}
