/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_rb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:44:27 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:44:28 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_ra_rb(t_list *stack_a)
{
	t_list	*tmp;

	tmp = stack_a;
	stack_a = ft_add_node_back(stack_a, stack_a->number, stack_a->index);
	stack_a = stack_a->next;
	free(tmp);
	return (stack_a);
}
