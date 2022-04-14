/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:42:31 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:42:32 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_min_value(t_list *stack_a)
{
	long int	min_value;

	min_value = stack_a->number;
	while (stack_a)
	{
		if (stack_a->number < min_value)
			min_value = stack_a->number;
		stack_a = stack_a->next;
	}
	return (min_value);
}
