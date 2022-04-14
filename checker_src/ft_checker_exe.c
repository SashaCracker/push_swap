/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_exe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:16:10 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:16:12 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

static void	ft_KO(t_inf *a_b, long int *array_int_sorted, int array_len)
{
	if ((ft_comparison(array_int_sorted, a_b->stack_a, array_len, \
	a_b->a_value_quantity) == 1) || (a_b->b_value_quantity != 0))
	{
		ft_putstr("KO\n");
		ft_free(a_b->stack_a);
		a_b->stack_a = NULL;
		ft_free(a_b->stack_b);
		a_b->stack_b = NULL;
		exit(1);
	}
}

static void	ft_join_commands(t_inf *a_b, t_struct **str)
{
	if (ft_instruction_comparison((*str)->command, "ss\n") == 0)
	{
		if (a_b->a_value_quantity > 1)
			a_b->stack_a = ft_sa_sb(a_b->stack_a);
		if (a_b->b_value_quantity > 1)
			a_b->stack_b = ft_sa_sb(a_b->stack_b);
	}
	if (ft_instruction_comparison((*str)->command, "rr\n") == 0)
	{
		if (a_b->a_value_quantity > 1)
			a_b->stack_a = ft_ra_rb(a_b->stack_a);
		if (a_b->b_value_quantity > 1)
			a_b->stack_b = ft_ra_rb(a_b->stack_b);
	}
	if (ft_instruction_comparison((*str)->command, "rrr\n") == 0)
	{
		if (a_b->a_value_quantity > 1)
			a_b->stack_a = ft_rra_rrb(a_b->stack_a);
		if (a_b->b_value_quantity > 1)
			a_b->stack_b = ft_rra_rrb(a_b->stack_b);
	}
}

void	ft_checker_exe(t_list *stack_a, t_struct *str, \
long int *array_int_sorted, int array_len)
{
	t_inf	a_b;

	a_b = ft_init_inf(&a_b, stack_a);
	a_b.a_value_quantity = array_len;
	while (str)
	{
		ft_a_commands(&a_b, &str);
		ft_b_commands(&a_b, &str);
		ft_join_commands(&a_b, &str);
		str = str->next;
	}
	ft_KO(&a_b, array_int_sorted, array_len);
	ft_free(a_b.stack_b);
	ft_free(a_b.stack_a);
}
