/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:15:49 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:15:51 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_instructions(t_struct *str)
{
	while (str)
	{
		if ((ft_instruction_comparison(str->command, "pa\n") == 1) \
		&& (ft_instruction_comparison(str->command, "pb\n") == 1) \
		&& (ft_instruction_comparison(str->command, "sa\n") == 1) \
		&& (ft_instruction_comparison(str->command, "sb\n") == 1) \
		&& (ft_instruction_comparison(str->command, "ra\n") == 1) \
		&& (ft_instruction_comparison(str->command, "rb\n") == 1) \
		&& (ft_instruction_comparison(str->command, "ss\n") == 1) \
		&& (ft_instruction_comparison(str->command, "rr\n") == 1) \
		&& (ft_instruction_comparison(str->command, "rra\n") == 1) \
		&& (ft_instruction_comparison(str->command, "rrb\n") == 1) \
		&& (ft_instruction_comparison(str->command, "rrr\n") == 1))
		{
			ft_putstr("Error\n");
			exit(1);
		}
		str = str->next;
	}
}
