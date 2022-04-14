/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_rrb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:19:40 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:19:42 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*ft_rra_rrb(t_list *stack_a)
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;

	tmp = NULL;
	tmp1 = NULL;
	tmp2 = NULL;
	tmp = stack_a;
	while (stack_a->next->next != NULL)
		stack_a = stack_a->next;
	tmp2 = stack_a;
	tmp1 = tmp2->next;
	stack_a = tmp;
	stack_a = ft_add_node_front(stack_a, tmp1->number, tmp1->index);
	tmp2->next = NULL;
	ft_free(tmp1);
	tmp1 = NULL;
	return (stack_a);
}
