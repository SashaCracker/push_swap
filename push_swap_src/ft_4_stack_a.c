/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:33:01 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:33:03 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_first_min(t_list *stack_a, t_struct **str, t_info *a)
{
	t_list		*stack_b;
	long int	min;
	t_list		*tmp;

	stack_b = NULL;
	min = ft_min_value(stack_a);
	if (stack_a->number == min)
	{
		stack_b = ft_pa_pb(stack_b, stack_a, stack_a->index + 1);
		*str = ft_commands(*str, "pb\n");
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
		a->value_quantity--;
		stack_a = ft_3_stack_a(stack_a, a, str);
		stack_a = ft_pa_pb(stack_a, stack_b, stack_b->index);
		*str = ft_commands(*str, "pa\n");
		free(stack_b);
		stack_b = NULL;
	}
	return (stack_a);
}

static t_list	*ft_second_min(t_list *stack_a, t_struct **str, t_info *a)
{
	t_list		*stack_b;
	long int	min;
	t_list		*tmp;

	stack_b = NULL;
	min = ft_min_value(stack_a);
	if (stack_a->next->number == min)
	{
		stack_a = ft_sa_sb(stack_a);
		*str = ft_commands(*str, "sa\n");
		if (ft_is_list_sorted(stack_a) != 0)
		{
			stack_b = ft_pa_pb(stack_b, stack_a, stack_a->index + 1);
			*str = ft_commands(*str, "pb\n");
			tmp = stack_a;
			stack_a = stack_a->next;
			free(tmp);
			a->value_quantity--;
			stack_a = ft_3_stack_a(stack_a, a, str);
			stack_a = ft_pa_pb(stack_a, stack_b, stack_b->index);
			*str = ft_commands(*str, "pa\n");
			free(stack_b);
		}
	}
	return (stack_a);
}

static t_list	*ft_last_min(t_list *stack_a, t_struct **str, t_info *a)
{
	t_list		*stack_b;
	long int	min;
	t_list		*tmp;

	stack_b = NULL;
	min = ft_min_value(stack_a);
	if (ft_last_value(stack_a) == min)
	{
		stack_a = ft_rra_rrb(stack_a);
		*str = ft_commands(*str, "rra\n");
		if (ft_is_list_sorted(stack_a) != 0)
		{
			stack_b = ft_pa_pb(stack_b, stack_a, stack_a->index + 1);
			*str = ft_commands(*str, "pb\n");
			tmp = stack_a;
			stack_a = stack_a->next;
			free(tmp);
			a->value_quantity--;
			stack_a = ft_3_stack_a(stack_a, a, str);
			stack_a = ft_pa_pb(stack_a, stack_b, stack_b->index);
			*str = ft_commands(*str, "pa\n");
			free(stack_b);
		}
	}
	return (stack_a);
}

static t_list	*ft_penultimate_min(t_list *stack_a, t_struct **str, t_info *a)
{
	t_list	*stack_b;
	t_list	*tmp;

	stack_b = NULL;
	stack_a = ft_rra_rrb(stack_a);
	*str = ft_commands(*str, "rra\n");
	stack_a = ft_rra_rrb(stack_a);
	*str = ft_commands(*str, "rra\n");
	if (ft_is_list_sorted(stack_a) != 0)
	{
		stack_b = ft_pa_pb(stack_b, stack_a, stack_a->index + 1);
		*str = ft_commands(*str, "pb\n");
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
		a->value_quantity--;
		stack_a = ft_3_stack_a(stack_a, a, str);
		stack_a = ft_pa_pb(stack_a, stack_b, stack_b->index);
		*str = ft_commands(*str, "pa\n");
		free(stack_b);
		stack_b = NULL;
	}
	return (stack_a);
}

t_list	*ft_4_stack_a(t_list *stack_a, t_info *a, t_struct **str)
{
	long int	min;

	if (a->value_quantity == 4)
	{
		min = ft_min_value(stack_a);
		if (stack_a->number == min)
			stack_a = ft_first_min(stack_a, str, a);
		else if (stack_a->next->number == min)
			stack_a = ft_second_min(stack_a, str, a);
		else if (ft_last_value(stack_a) == min)
			stack_a = ft_last_min(stack_a, str, a);
		else
			stack_a = ft_penultimate_min(stack_a, str, a);
	}
	return (stack_a);
}
