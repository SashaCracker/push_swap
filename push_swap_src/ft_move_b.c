/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:16:33 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:16:34 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_b(t_inf *a_b, t_struct **str)
{
	t_list	*tmp;

	tmp = NULL;
	*str = ft_commands(*str, "pa\n");
	tmp = a_b->stack_b;
	a_b->stack_b = a_b->stack_b->next;
	free(tmp);
	tmp = NULL;
	a_b->a_value_quantity++;
	a_b->b_value_quantity--;
}
