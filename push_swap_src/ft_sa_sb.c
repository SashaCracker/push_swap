/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:45:36 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:45:37 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_sa_sb(t_list *stack_a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = stack_a->next;
	tmp2 = tmp1->next;
	tmp1->next = stack_a;
	stack_a->next = tmp2;
	stack_a = tmp1;
	return (stack_a);
}
