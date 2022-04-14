/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:19:33 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:19:35 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_repeat_check(long int *array_int, int array_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < array_len)
	{
		j = 0;
		while (j < array_len)
		{
			if ((array_int[i] == array_int[j]) && (i != j))
			{
				ft_putstr("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
