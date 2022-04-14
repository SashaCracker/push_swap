/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_over_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:44:53 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:44:54 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_b_over_3(t_inf *a_b, long int *array_int_sorted, t_struct **str)
{
	while ((a_b->stack_b->index == a_b->index) \
			&& (a_b->b_value_quantity > 3))
	{
		if ((a_b->stack_b->number == array_int_sorted[a_b->i]) \
		|| (ft_last_value(a_b->stack_b) == array_int_sorted[a_b->i]))
			ft_b_equal_to_min(a_b, array_int_sorted, str);
		else if (a_b->stack_b->number > a_b->b_mid)
		{
			a_b->stack_a = ft_pa_pb(a_b->stack_a, a_b->stack_b, a_b->k);
			ft_move_b(a_b, str);
		}
		else if (a_b->stack_b->number <= a_b->b_mid)
		{
			a_b->stack_b->index++;
			a_b->stack_b = ft_ra_rb(a_b->stack_b);
			*str = ft_commands(*str, "rb\n");
		}
	}
}
