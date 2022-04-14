/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:08:18 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 17:08:19 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_b_commands(t_inf *a_b, t_struct **str)
{
	if ((ft_instruction_comparison((*str)->command, "pb\n") == 0) \
	&& (a_b->a_value_quantity > 0))
		ft_pb(a_b);
	if ((ft_instruction_comparison((*str)->command, "sb\n") == 0) \
	&& (a_b->b_value_quantity > 1))
		a_b->stack_b = ft_sa_sb(a_b->stack_b);
	if ((ft_instruction_comparison((*str)->command, "rb\n") == 0) \
	&& (a_b->b_value_quantity > 1))
		a_b->stack_b = ft_ra_rb(a_b->stack_b);
	if ((ft_instruction_comparison((*str)->command, "rrb\n") == 0) \
	&& (a_b->b_value_quantity > 1))
		a_b->stack_b = ft_rra_rrb(a_b->stack_b);
}
