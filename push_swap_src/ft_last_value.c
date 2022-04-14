/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:41:16 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:41:23 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_last_value(t_list *stack_a)
{
	long int	value;

	while (stack_a->next != NULL)
		stack_a = stack_a->next;
	value = stack_a->number;
	return (value);
}
