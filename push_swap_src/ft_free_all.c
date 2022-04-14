/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:01:21 by sgummy            #+#    #+#             */
/*   Updated: 2021/08/03 17:01:23 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_all(char **array, int argc)
{
	int	i;

	i = 0;
	if (array != NULL)
	{
		while (i < argc)
			free(array[i++]);
		free(array);
		array = NULL;
	}
}
