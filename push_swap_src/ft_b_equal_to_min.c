/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_equal_to_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:26:37 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:26:38 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_b_equal_to_min(t_inf *a_b, long int *array_int_sorted, \
t_struct **str)
{
	if (a_b->stack_b->number == array_int_sorted[a_b->i])
	{
		a_b->stack_a = ft_pa_pb(a_b->stack_a, a_b->stack_b, \
		a_b->stack_b->index);
		ft_move_b(a_b, str);
		a_b->stack_a = ft_ra_rb(a_b->stack_a);
		*str = ft_commands(*str, "ra\n");
		a_b->i++;
	}
	else if (ft_last_value(a_b->stack_b) == array_int_sorted[a_b->i])
	{
		a_b->stack_b = ft_rra_rrb(a_b->stack_b);
		*str = ft_commands(*str, "rrb\n");
		a_b->stack_a = ft_pa_pb(a_b->stack_a, a_b->stack_b, \
		a_b->stack_b->index);
		ft_move_b(a_b, str);
		a_b->stack_a = ft_ra_rb(a_b->stack_a);
		*str = ft_commands(*str, "ra\n");
		a_b->i++;
	}
}
