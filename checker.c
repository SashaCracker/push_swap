/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:21:14 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:21:15 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	ft_arguments_analysis(int argc, char **argv)
{
	char		**array_char;
	long int	*array_int;

	array_int = NULL;
	array_char = ft_array_creation(argc - 1, argv);
	if (ft_num_check(array_char, argc - 1) == 1)
		exit(1);
	else
	{
		array_int = ft_char_convert(array_char, argc - 1);
		if (ft_check_int(array_int, argc - 1) == 1)
			exit(1);
		if (ft_repeat_check(array_int, argc - 1) == 1)
			exit(1);
		free(array_int);
	}
	ft_free_all(array_char, argc);
}

static void	ft_gnl_free(char **buf)
{
	if (!buf)
	{
		ft_putstr("Error\n");
		exit(1);
	}
}

static void	ft_check_n(int i)
{
	if (i != 0)
	{
		ft_putstr("Error\n");
		exit(1);
	}
}

static void	ft_gnl(t_struct **str)
{
	int		i;
	char	c;
	char	*buf;

	i = 0;
	buf = malloc(sizeof (char) * 100000);
	ft_gnl_free(&buf);
	while (read(0, &c, 1) > 0)
	{
		if (c != '\n')
			buf[i++] = c;
		else if (c == '\n')
		{
			buf[i] = '\n';
			i++;
			buf[i] = '\0';
			*str = ft_commands(*str, buf);
			i = 0;
		}
	}
	ft_check_n(i);
	free(buf);
}

int	main(int argc, char **argv)
{
	t_list		*stack_a;
	t_struct	*str;
	char		**array_char;
	long int	*array_int;
	long int	*array_int_sorted;

	ft_arguments_analysis(argc, argv);
	if (argc >= 2)
	{
		array_char = ft_array_creation(argc - 1, argv);
		array_int = ft_char_convert(array_char, argc - 1);
		array_int_sorted = ft_sort(array_int, argc - 1);
		stack_a = ft_make_a_list(array_int, argc - 1, 1);
		ft_gnl(&str);
		ft_check_instructions(str);
		ft_checker_exe(stack_a, str, array_int_sorted, argc - 1);
		ft_putstr("OK\n");
	}
	exit(0);
}
