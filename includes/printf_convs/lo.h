/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lo.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 15:57:45 by mfranc            #+#    #+#             */
/*   Updated: 2017/02/16 16:02:41 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LO_H

# define LO_H

#include "../ft_printf.h"

char			*ft_get_lo_conv(t_datas *datas);
t_list			*ft_get_lo_arg(t_datas *datas);

#endif