/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:31:51 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 17:31:53 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pa(t_inf *a_b)
{
	t_list	*tmp;

	tmp = NULL;
	a_b->stack_a = ft_pa_pb(a_b->stack_a, a_b->stack_b, 1);
	tmp = a_b->stack_b;
	a_b->stack_b = a_b->stack_b->next;
	free(tmp);
	tmp = NULL;
	a_b->a_value_quantity++;
	a_b->b_value_quantity--;
}
