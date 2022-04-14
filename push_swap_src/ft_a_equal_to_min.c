/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_equal_to_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:22:45 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 13:22:46 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_a_equal_to_min(t_inf *a_b, long int *array_int_sorted, \
t_struct **str)
{
	if (a_b->stack_a->number == array_int_sorted[a_b->i])
	{
		a_b->stack_a = ft_ra_rb(a_b->stack_a);
		*str = ft_commands(*str, "ra\n");
		a_b->i++;
	}
	else if (a_b->stack_a->next->number == array_int_sorted[a_b->i])
	{
		a_b->stack_a = ft_sa_sb(a_b->stack_a);
		*str = ft_commands(*str, "sa\n");
		a_b->stack_a = ft_ra_rb(a_b->stack_a);
		*str = ft_commands(*str, "ra\n");
		a_b->i++;
	}
}
