/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:29:28 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 16:29:30 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_a_commands(t_inf *a_b, t_struct **str)
{
	if ((ft_instruction_comparison((*str)->command, "pa\n") == 0) \
	&& (a_b->b_value_quantity > 0))
		ft_pa(a_b);
	if ((ft_instruction_comparison((*str)->command, "sa\n") == 0) \
	&& (a_b->a_value_quantity > 1))
		a_b->stack_a = ft_sa_sb(a_b->stack_a);
	if ((ft_instruction_comparison((*str)->command, "ra\n") == 0) \
	&& (a_b->a_value_quantity > 1))
		a_b->stack_a = ft_ra_rb(a_b->stack_a);
	if ((ft_instruction_comparison((*str)->command, "rra\n") == 0) \
	&& (a_b->a_value_quantity > 1))
		a_b->stack_a = ft_rra_rrb(a_b->stack_a);
}
