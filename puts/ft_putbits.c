/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 15:50:48 by mfranc            #+#    #+#             */
/*   Updated: 2017/01/24 21:08:21 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbits(unsigned char c)
{
	unsigned char msq;

	msq = 0b00000001;
	while (msq)
	{
		if (c & msq)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		msq = (msq << 1);
	}
}
