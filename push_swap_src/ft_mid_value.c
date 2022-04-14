/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mid_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:42:11 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:42:13 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_mid_value(t_list *stack_a)
{
	long int	index;
	long int	mid;
	int			flag;
	int			i;
	long int	summ;

	flag = 0;
	i = 0;
	summ = 0;
	index = stack_a->index;
	while ((stack_a) && (flag == 0))
	{
		if (stack_a->index == index)
		{
			summ = summ + stack_a->number;
			i++;
		}
		else
			flag = 1;
		stack_a = stack_a->next;
	}
	mid = summ / i;
	return (mid);
}
