/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_is_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:48:25 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:49:08 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index_is_1(t_inf *a_b, t_struct **str, long int *array_int_sorted)
{
	a_b->a_mid = ft_mid_value(a_b->stack_a);
	a_b->index = a_b->stack_a->index;
	while ((a_b->stack_a->index == a_b->index) \
	&& (a_b->stack_a->number != ft_min_value(a_b->stack_a)))
	{
		if (a_b->stack_a->number <= a_b->a_mid)
			ft_move_a(a_b, str);
		else if (a_b->stack_a->number > a_b->a_mid)
		{
			a_b->stack_a->index++;
			a_b->stack_a = ft_ra_rb(a_b->stack_a);
			*str = ft_commands(*str, "ra\n");
			a_b->rra++;
		}
	}
	ft_rra(a_b, str, array_int_sorted);
}
