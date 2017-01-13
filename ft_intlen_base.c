/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:38:53 by mfranc            #+#    #+#             */
/*   Updated: 2017/01/13 12:46:18 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen_base(long long n, int base)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0 && base == 10)
		i++;
	while (n != 0)
	{
		n /= base;
		i++;
	}
	return (i);
}
