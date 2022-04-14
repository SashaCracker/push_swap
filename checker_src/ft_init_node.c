/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:17:26 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:17:27 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
