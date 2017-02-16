/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 15:55:12 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/16 16:00:21 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_H

# define P_H

#include "../ft_printf.h"

char			*ft_get_p_conv(t_datas *datas);
t_list			*ft_get_p_arg(t_datas *datas);

#endif