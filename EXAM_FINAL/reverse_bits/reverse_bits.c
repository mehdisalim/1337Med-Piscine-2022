/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:13:46 by esalim            #+#    #+#             */
/*   Updated: 2022/04/15 00:19:40 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res = 0;
	int	i = 9;
	while (--i > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
	}
	return (res);
}
