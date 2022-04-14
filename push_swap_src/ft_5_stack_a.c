/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:33:51 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:33:53 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_5_stack_a(t_list *stack_a, t_info *a, t_struct **str)
{
	long int	min;
	t_list		*stack_b;
	t_list		*tmp;

	tmp = NULL;
	stack_b = NULL;
	min = ft_min_value(stack_a);
	while (stack_a->number != min)
	{
		stack_a = ft_ra_rb(stack_a);
		*str = ft_commands(*str, "ra\n");
	}
	stack_b = ft_pa_pb(stack_b, stack_a, stack_a->index + 1);
	*str = ft_commands(*str, "pb\n");
	tmp = stack_a;
	stack_a = stack_a->next;
	free(tmp);
	a->value_quantity--;
	stack_a = ft_4_stack_a(stack_a, a, str);
	stack_a = ft_pa_pb(stack_a, stack_b, stack_b->index);
	*str = ft_commands(*str, "pa\n");
	ft_free(stack_b);
	stack_b = NULL;
	return (stack_a);
}
