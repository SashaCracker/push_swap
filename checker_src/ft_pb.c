/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:33:36 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 17:33:38 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pb(t_inf *a_b)
{
	t_list	*tmp;

	tmp = NULL;
	a_b->stack_b = ft_pa_pb(a_b->stack_b, a_b->stack_a, 1);
	tmp = a_b->stack_a;
	a_b->stack_a = a_b->stack_a->next;
	free(tmp);
	tmp = NULL;
	a_b->a_value_quantity--;
	a_b->b_value_quantity++;
}
