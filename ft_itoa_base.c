/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 17:00:09 by mfranc            #+#    #+#             */
/*   Updated: 2017/01/13 14:08:08 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long long ln, int base, char *baselist)
{
	int		len;
	char	*result;
	int		i;

	if (base >= 17 && base < 2)
		return (NULL);
	len = ft_intlen_base(ln, base);
	if (!(result = ft_strnew(len)))
		return (NULL);
	if (ln < 0 && base == 10)
		result[0] = '-';
	result[len--] = '\0';
	i = 1;
	if (ln < 0)
		ln = -ln;
	while (ln != 0)
	{
		result[len--] = baselist[ln % base];
		ln /= base;
	}
	return (result);
}
