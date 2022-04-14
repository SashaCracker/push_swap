/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_less_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:29:16 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:29:18 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_b_less_3(t_inf *a_b, t_struct **str, long int *array_int_sorted)
{
	if (a_b->b_value_quantity <= 3)
	{
		while (a_b->b_value_quantity > 0)
		{
			if (a_b->stack_b->number == ft_min_value(a_b->stack_b))
			{
				a_b->stack_a = ft_pa_pb(a_b->stack_a, a_b->stack_b, a_b->k);
				ft_move_b(a_b, str);
				if (a_b->stack_a->number == array_int_sorted[a_b->i])
				{
					a_b->stack_a = ft_ra_rb(a_b->stack_a);
					*str = ft_commands(*str, "ra\n");
					a_b->i++;
				}
			}
			else
			{
				a_b->stack_b = ft_ra_rb(a_b->stack_b);
				*str = ft_commands(*str, "rb\n");
			}
		}
	}
}
