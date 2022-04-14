/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_over_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:43:35 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:43:36 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_inf	ft_init_inf(t_inf *a_b, t_list *stack_a)
{
	a_b->a_mid = 0;
	a_b->a_value_quantity = 0;
	a_b->b_mid = 0;
	a_b->b_value_quantity = 0;
	a_b->k = 0;
	a_b->t = 0;
	a_b->i = 0;
	a_b->rra = 0;
	a_b->stack_b = NULL;
	a_b->stack_a = stack_a;
	return (*a_b);
}

static void	ft_free_b(t_inf *a_b)
{
	if (a_b->b_value_quantity == 0)
	{
		ft_free(a_b->stack_b);
		a_b->stack_b = NULL;
	}
}

t_list	*ft_over_5(t_list *stack_a, t_struct **str, \
long int *array_int_sorted, int array_len)
{
	t_inf	a_b;

	a_b = ft_init_inf(&a_b, stack_a);
	a_b.a_value_quantity = array_len;
	while (ft_comparison(array_int_sorted, a_b.stack_a, array_len, \
	a_b.a_value_quantity) != 0)
	{
		if (a_b.t == 0)
			ft_half(&a_b, str);
		while (a_b.b_value_quantity > 0)
		{
			a_b.b_mid = ft_mid_value(a_b.stack_b);
			a_b.index = a_b.stack_b->index;
			a_b.k = a_b.stack_a->index + 1;
			ft_b_over_3(&a_b, array_int_sorted, str);
			ft_b_less_3(&a_b, str, array_int_sorted);
		}
		ft_free_b(&a_b);
		if (a_b.stack_a->index != 1)
			ft_index_not_1(&a_b, str, array_int_sorted);
		else if (a_b.stack_a->index == 1)
			ft_index_is_1(&a_b, str, array_int_sorted);
	}
	return (a_b.stack_a);
}
