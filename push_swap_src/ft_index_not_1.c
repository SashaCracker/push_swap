/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_index_not_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:40:11 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:40:12 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index_not_1(t_inf *a_b, t_struct **str, long int *array_int_sorted)
{
	a_b->index = a_b->stack_a->index;
	while ((a_b->stack_a->index == a_b->index) \
	&& (a_b->stack_a->number != ft_min_value(a_b->stack_a)))
	{
		if (a_b->stack_b)
			ft_b_equal_to_min(a_b, array_int_sorted, str);
		if (a_b->stack_a->number == array_int_sorted[a_b->i])
		{
			a_b->stack_a = ft_ra_rb(a_b->stack_a);
			*str = ft_commands(*str, "ra\n");
			a_b->i++;
		}
		else
			ft_move_a(a_b, str);
	}
	if ((a_b->stack_a->index == 1) && (a_b->stack_a->next->index != 1) \
	&& (a_b->stack_a->number != ft_min_value(a_b->stack_a)))
		ft_move_a(a_b, str);
}
