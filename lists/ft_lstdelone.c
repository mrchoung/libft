/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 21:24:58 by mfranc            #+#    #+#             */
/*   Updated: 2017/09/14 19:39:20 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **node)
{
	t_list	*to_free;
	t_list	*next_node;
	
	to_free = *node;
	next_node = (*node)->next;
	if (next_node && next_node->next)
		next_node->prev = (*node)->prev;
	ft_memdel((void**)&to_free);
	*node = next_node;
}
