/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:55:01 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:55:02 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_inf *a_b, t_struct **str, long int *array_int_sorted)
{
	while (a_b->rra > 0)
	{
		a_b->stack_a = ft_rra_rrb(a_b->stack_a);
		*str = ft_commands(*str, "rra\n");
		a_b->rra--;
		if (a_b->stack_b->number != array_int_sorted[a_b->i])
		{
			a_b->stack_b = ft_rra_rrb(a_b->stack_b);
			*str = ft_commands(*str, "rrb\n");
		}
	}
}
