/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_convert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:15:36 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:15:39 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static long int	ft_convert(char **array_char, int i)
{
	int			j;
	long int	number;
	long int	minus;

	j = 0;
	while (array_char[i][j] != '\0')
	{
		number = 0;
		minus = 1;
		if ((array_char[i][j] == '-') || (array_char[i][j] == '+'))
		{
			if (array_char[i][j] == '-')
				minus = -1;
			j++;
		}
		while (array_char[i][j] != '\0')
		{
			number = (array_char[i][j] - '0') + number * 10;
			j++;
		}
		number = number * minus;
	}
	return (number);
}

long int	*ft_char_convert(char **array_char, int array_len)
{
	long int	*array_int;
	int			i;

	array_int = malloc(sizeof (long int) * array_len);
	if (!array_int)
		exit (1);
	i = 0;
	while (i < array_len)
	{
		array_int[i] = ft_convert(array_char, i);
		i++;
	}
	return (array_int);
}
