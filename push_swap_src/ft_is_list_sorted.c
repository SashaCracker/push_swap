/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_list_sorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:40:53 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:40:54 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_list_sorted(t_list *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->number > stack_a->next->number)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
