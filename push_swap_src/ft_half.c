/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_half.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:31:01 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 12:31:03 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_half(t_inf *a_b, t_struct **str)
{
	a_b->a_mid = ft_mid_value(a_b->stack_a);
	a_b->index = (a_b->stack_a)->index;
	while ((ft_higher_mid(a_b->stack_a, a_b->a_mid) != 0) \
	&& (a_b->t == 0))
	{
		if (a_b->stack_a->number <= a_b->a_mid)
			ft_move_a(a_b, str);
		else if (a_b->stack_a->number > a_b->a_mid)
		{
			a_b->stack_a = ft_ra_rb(a_b->stack_a);
			*str = ft_commands(*str, "ra\n");
		}
	}
	a_b->t = 1;
}
