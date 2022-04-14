/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands_optimisation.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:37:26 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:37:27 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_char(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_ss_rr_rrr(char *s1, char *s2)
{
	if (((ft_char(s1, "sa\n") == 0) && (ft_char(s2, "sb\n") == 0)) \
	|| ((ft_char(s2, "sa\n") == 0) && (ft_char(s1, "sb\n") == 0)))
		return (1);
	if (((ft_char(s1, "ra\n") == 0) && (ft_char(s2, "rb\n") == 0)) \
	|| ((ft_char(s2, "ra\n") == 0) && (ft_char(s1, "rb\n") == 0)))
		return (2);
	if (((ft_char(s1, "rra\n") == 0) && (ft_char(s2, "rrb\n") == 0)) \
	|| ((ft_char(s2, "rra\n") == 0) && (ft_char(s1, "rrb\n") == 0)))
		return (3);
	return (0);
}

static t_struct	*ft_str_free(t_struct *str)
{
	t_struct	*tmp;

	tmp = NULL;
	tmp = str;
	free(tmp->command);
	str = str->next;
	free(tmp);
	return (str);
}

static void	ft_new_str(t_struct **new_str, t_struct **str, int result, char
*command)
{
	if (result == 1)
	{
		*new_str = ft_commands(*new_str, "ss\n");
		*str = ft_str_free(*str);
	}
	else if (result == 2)
	{
		*new_str = ft_commands(*new_str, "rr\n");
		*str = ft_str_free(*str);
	}
	else if (result == 3)
	{
		*new_str = ft_commands(*new_str, "rrr\n");
		*str = ft_str_free(*str);
	}
	else
		*new_str = ft_commands(*new_str, command);
}

t_struct	*ft_commands_optimisation(t_struct *str)
{
	t_struct	*new_str;
	t_struct	*begin;
	int			result;
	char		*s1;
	char		*s2;

	new_str = NULL;
	begin = NULL;
	while (str->next != NULL)
	{
		begin = str;
		s1 = ft_strdup(str->command);
		str = str->next;
		s2 = ft_strdup(str->command);
		result = ft_ss_rr_rrr(s1, s2);
		ft_new_str(&new_str, &str, result, begin->command);
		free(begin->command);
		free(begin);
		free(s1);
		free(s2);
	}
	new_str = ft_commands(new_str, str->command);
	free(str->command);
	free(str);
	return (new_str);
}
