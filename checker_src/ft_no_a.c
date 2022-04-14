/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:12:49 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/26 16:12:50 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_no_a(t_inf *a_b)
{
	if (a_b->a_value_quantity == 0)
	{
		ft_putstr("KO\n");
		ft_free(a_b->stack_a);
		a_b->stack_a = NULL;
		ft_free(a_b->stack_b);
		a_b->stack_b = NULL;
		exit(1);
	}
}
