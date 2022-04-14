/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_a_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:41:43 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:41:44 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_make_a_list(long int *array_int, int array_len, int index)
{
	int		i;
	t_list	*stack_a;

	i = 0;
	stack_a = NULL;
	while (i < array_len)
	{
		if (i == 0)
			stack_a = ft_init_node(stack_a, array_int[i], index);
		else
			stack_a = ft_add_node_back(stack_a, array_int[i], index);
		i++;
	}
	return (stack_a);
}
