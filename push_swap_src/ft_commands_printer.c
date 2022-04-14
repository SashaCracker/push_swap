/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands_printer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:37:49 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:37:51 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_commands_printer(t_struct *str)
{
	t_struct	*tmp;
	int			i;

	tmp = NULL;
	i = 0;
	tmp = str;
	while (tmp != NULL)
	{
		ft_putstr(tmp->command);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
