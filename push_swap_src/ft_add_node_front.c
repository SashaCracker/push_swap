/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:34:47 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:34:49 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_add_node_front(t_list *list, long int number, int index)
{
	t_list	*new;

	new = NULL;
	new = malloc(sizeof(t_list));
	if (new)
	{
		new->number = number;
		new->index = index;
		new->next = list;
	}
	list = new;
	return (list);
}
