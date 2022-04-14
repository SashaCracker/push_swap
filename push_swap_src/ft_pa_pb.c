/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:43:50 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:43:51 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_pa_pb(t_list *stack_a, t_list *stack_b, int index)
{
	if (!stack_a)
		stack_a = ft_init_node(stack_a, stack_b->number, index);
	else
		stack_a = ft_add_node_front(stack_a, stack_b->number, index);
	return (stack_a);
}
