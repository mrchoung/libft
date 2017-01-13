/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:30:54 by mfranc            #+#    #+#             */
/*   Updated: 2017/01/13 12:50:31 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putaddr(const void *value)
{
	long		addr;
	char		*str;

	addr = (long)value;
	str = ft_itoa_base(addr, 16, BASELW);
	ft_putstr("0x");
	ft_putstr(str);
}
