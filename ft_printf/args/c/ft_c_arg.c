/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:51:01 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/28 12:31:34 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*ft_get_c_arg(t_datas *datas)
{
	int				*parg;
	int				arg;
	t_list			*new;

	if (ft_strchr(datas->flags, 'l'))
		return (ft_get_lc_arg(datas));
	parg = &arg;
	arg = va_arg(datas->ap, int);
	if (!(new = ft_lststrnew(parg, sizeof(arg))))
		return (NULL);
	return (new);
}