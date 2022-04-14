/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comparison.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:38:16 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:38:17 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_comparison(long int *array_int_sorted, t_list *stack_a, \
long int array_len, long int quantity)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = stack_a;
	if (quantity != array_len)
		return (1);
	while (i < array_len)
	{
		if (array_int_sorted[i] != tmp->number)
			return (1);
		tmp = tmp->next;
		i++;
	}
	return (0);
}
