/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_b_less_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:27:52 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 16:27:54 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_a_b_less_2(t_inf *a_b)
{
	if ((a_b->a_value_quantity < 2) || (a_b->b_value_quantity < 2))
	{
		ft_putstr("KO\n");
		ft_free(a_b->stack_a);
		a_b->stack_a = NULL;
		ft_free(a_b->stack_b);
		a_b->stack_b = NULL;
		exit(1);
	}
}
