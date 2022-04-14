/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_creation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:35:16 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:35:17 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_array_creation(int array_len, char **argv)
{
	char	**array;
	int		i;
	int		j;

	i = 0;
	j = 1;
	array = malloc(sizeof (char *) * (array_len + 1));
	while (j < (array_len + 1))
	{
		array[i] = ft_strdup(argv[j]);
		i++;
		j++;
	}
	return (array);
}
