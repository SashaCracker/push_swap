/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:13:35 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:13:36 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_a(t_inf *a_b, t_struct **str)
{
	t_list	*tmp;

	tmp = NULL;
	a_b->stack_b = ft_pa_pb(a_b->stack_b, a_b->stack_a, \
	a_b->index + 1);
	*str = ft_commands(*str, "pb\n");
	tmp = a_b->stack_a;
	a_b->stack_a = a_b->stack_a->next;
	free(tmp);
	tmp = NULL;
	a_b->a_value_quantity--;
	a_b->b_value_quantity++;
}
