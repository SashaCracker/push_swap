/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:39:50 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:39:51 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_info	ft_init_info(t_info *a)
{
	t_info	info;

	info.first_value = 0;
	info.second_value = 0;
	info.last_value = 0;
	info.value_quantity = 0;
	a = &info;
	return (*a);
}
