/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_it_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:17:44 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:17:45 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_is_it_sorted(long int *array_int, int array_len)
{
	int	i;

	i = 0;
	while (i < (array_len - 1))
	{
		if (array_int[i] > array_int[i + 1])
			return (1);
		i++;
	}
	return (0);
}
