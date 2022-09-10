/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:15:21 by esalim            #+#    #+#             */
/*   Updated: 2022/03/26 21:58:14 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	lastlitter;

	lastlitter = 'a';
	while (lastlitter <= 'z' )
	{
		write(1, &lastlitter, 1);
		lastlitter ++;
	}
}
