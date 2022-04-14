/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:46:11 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:46:12 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long int	*ft_sorting_core(int i, int j, long int *array_int_sorted)
{
	long int	num;

	if (array_int_sorted[i] > array_int_sorted[j])
	{
		num = array_int_sorted[i];
		array_int_sorted[i] = array_int_sorted[j];
		array_int_sorted[j] = num;
	}
	return (array_int_sorted);
}

long int	*ft_sort(long int *array_int, int array_len)
{
	int			i;
	int			j;
	long int	*array_int_sorted;

	array_int_sorted = malloc(sizeof (long int) * array_len);
	i = 0;
	while (i < array_len)
	{
		array_int_sorted[i] = array_int[i];
		i++;
	}
	i = 0;
	while (i < array_len)
	{
		j = i + 1;
		while (j < array_len)
		{
			array_int_sorted = ft_sorting_core(i, j, array_int_sorted);
			j++;
		}
		i++;
	}
	return (array_int_sorted);
}
