/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:22:39 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:22:41 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_swap1(t_list *stack_a, t_struct **str, t_info *a)
{
	if ((a->first_value > a->second_value) \
		 && (a->first_value > a->last_value) \
		 && (a->second_value < a->last_value))
	{
		stack_a = ft_ra_rb(stack_a);
		*str = ft_commands(*str, "ra\n");
	}
	else if ((a->first_value > a->last_value) \
		 && (a->first_value > a->second_value) \
		 && (a->second_value > a->last_value))
	{
		stack_a = ft_sa_sb(stack_a);
		stack_a = ft_rra_rrb(stack_a);
		*str = ft_commands(*str, "sa\n");
		*str = ft_commands(*str, "rra\n");
	}
	return (stack_a);
}

static t_list	*ft_swap2(t_list *stack_a, t_struct **str, t_info *a)
{
	if ((a->first_value < a->second_value) \
		 && (a->first_value > a->last_value) \
		 && (a->second_value > a->last_value))
	{
		stack_a = ft_rra_rrb(stack_a);
		*str = ft_commands(*str, "rra\n");
	}
	else if ((a->first_value > a->second_value) \
		 && (a->first_value < a->last_value) \
		 && (a->second_value < a->last_value))
	{
		stack_a = ft_sa_sb(stack_a);
		*str = ft_commands(*str, "sa\n");
	}
	else if ((a->first_value < a->second_value) \
		 && (a->first_value < a->last_value) \
		 && (a->second_value > a->last_value))
	{
		stack_a = ft_sa_sb(stack_a);
		stack_a = ft_ra_rb(stack_a);
		*str = ft_commands(*str, "sa\n");
		*str = ft_commands(*str, "ra\n");
	}
	return (stack_a);
}

t_list	*ft_3_stack_a(t_list *stack_a, t_info *a, t_struct **str)
{
	if (a->value_quantity == 2)
	{
		stack_a = ft_sa_sb(stack_a);
		*str = ft_commands(*str, "sa\n");
	}
	else if (a->value_quantity == 3)
	{
		a->first_value = stack_a->number;
		a->second_value = stack_a->next->number;
		a->last_value = ft_last_value(stack_a);
		stack_a = ft_swap1(stack_a, str, a);
		stack_a = ft_swap2(stack_a, str, a);
	}
	return (stack_a);
}
