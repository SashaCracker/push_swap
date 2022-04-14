/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_comparison.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:17:35 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:17:36 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_instruction_comparison(char *str, char *buf)
{
	int	i;
	int	str_len;
	int	buf_len;

	i = 0;
	str_len = ft_strlen(str);
	buf_len = ft_strlen(buf);
	if (str_len != buf_len)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] != buf[i])
			return (1);
		i++;
	}
	return (0);
}
