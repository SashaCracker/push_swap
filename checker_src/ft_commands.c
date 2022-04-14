/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:16:23 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:16:24 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static t_struct	*ft_init_str(t_struct *str, char *command)
{
	str = malloc(sizeof(t_struct));
	if (str)
	{
		str->command = ft_strdup(command);
		str->next = NULL;
	}
	return (str);
}

static t_struct	*ft_add_back_command(t_struct *str, char *command)
{
	t_struct	*tmp;
	t_struct	*new;

	tmp = NULL;
	new = NULL;
	tmp = str;
	while (str->next != NULL)
		str = str->next;
	new = malloc(sizeof(t_struct));
	if (new)
	{
		new->command = ft_strdup(command);
		new->next = NULL;
	}
	str->next = new;
	str = tmp;
	return (str);
}

t_struct	*ft_commands(t_struct *str, char *command)
{
	if (!str)
		str = ft_init_str(str, command);
	else
		str = ft_add_back_command(str, command);
	return (str);
}
