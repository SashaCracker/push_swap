/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:40:14 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:40:15 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_init_node(t_list *list, long int number, int index)
{
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->number = number;
		list->index = index;
		list->next = NULL;
	}
	return (list);
}
