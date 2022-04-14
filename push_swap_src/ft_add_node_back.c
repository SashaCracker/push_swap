/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_node_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:34:26 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:34:27 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_add_node_back(t_list *list, long int number, int index)
{
	t_list	*tmp;
	t_list	*new;

	tmp = NULL;
	tmp = list;
	while (list->next != NULL)
		list = list->next;
	new = malloc(sizeof(t_list));
	if (new)
	{
		new->number = number;
		new->index = index;
		new->next = NULL;
	}
	list->next = new;
	list = tmp;
	return (list);
}
