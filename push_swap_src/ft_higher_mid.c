/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_higher_mid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:39:28 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:39:29 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_len(t_list *stack_a)
{
	int	len;

	len = 1;
	while (stack_a->next != NULL)
	{
		len++;
		stack_a = stack_a->next;
	}
	return (len);
}

int	ft_higher_mid(t_list *stack_a, long int mid)
{
	t_list	*tmp;
	int		len;

	tmp = stack_a;
	len = ft_len(stack_a);
	while (len > 0)
	{
		if (tmp->number < mid)
			return (1);
		tmp = tmp->next;
		len--;
	}
	return (0);
}
