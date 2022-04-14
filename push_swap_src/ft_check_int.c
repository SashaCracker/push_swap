/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:36:15 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:36:17 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int(long int *array_int, int array_len)
{
	int	i;

	i = 0;
	while (i < array_len)
	{
		if ((array_int[i] < -2147483648) || (array_int[i] > 2147483647))
		{
			ft_putstr("Error\n");
			return (1);
		}
		i++;
	}
	return (0);
}
