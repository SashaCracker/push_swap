/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:38:56 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:38:58 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_str(t_struct *str)
{
	t_struct	*tmp;

	while (str)
	{
		tmp = str;
		free(str->command);
		str = str->next;
		free(tmp);
	}
}
