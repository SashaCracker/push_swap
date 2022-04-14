/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:18:09 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:18:10 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	ft_exe(char **str, int i, int k)
{
	int	j;

	j = k;
	if ((str[i][j] == '-') || (str[i][j] == '+'))
		j++;
	if (str[i][j] == '\0')
	{
		ft_putstr("Error\n");
		exit(1);
	}
	while (str[i][j] != '\0')
	{
		if ((str[i][j] < '0') || (str[i][j] > '9'))
		{
			ft_putstr("Error\n");
			exit(1);
		}
		j++;
	}
	return (j);
}

int	ft_num_check(char **str, int array_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < array_len)
	{
		j = 0;
		while (str[i][j] != '\0')
			j = ft_exe(str, i, j);
		i++;
	}
	return (0);
}
