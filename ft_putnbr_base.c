/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:41:57 by mfranc            #+#    #+#             */
/*   Updated: 2017/01/14 17:07:06 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int n, int base, char *baselist)
{
	char	*number;

	number = ft_itoa_base(n, base, baselist);
	ft_putstr(number);
	ft_strdel(&number);
}
