/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:21:28 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:21:29 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_arguments_analysis(int argc, char **argv)
{
	char		**array_char;
	long int	*array_int;
	int			array_len;
	int			n;

	n = 2;
	array_int = NULL;
	array_len = argc - 1;
	array_char = ft_array_creation(array_len, argv);
	if (ft_num_check(array_char, array_len) == 1)
		n = 1;
	else
	{
		array_int = ft_char_convert(array_char, array_len);
		if (ft_check_int(array_int, array_len) == 1)
			n = 1;
		else if (ft_repeat_check(array_int, array_len) == 1)
			n = 1;
		else if (ft_is_it_sorted(array_int, array_len) == 0)
			n = 0;
		free(array_int);
	}
	ft_free_all(array_char, argc - 1);
	return (n);
}

static t_list	*ft_less_5(t_list *stack_a, t_struct **str, int array_len)
{
	t_info	a;

	a = ft_init_info(&a);
	a.value_quantity = array_len;
	a.first_value = stack_a->number;
	a.last_value = ft_last_value(stack_a);
	if (a.value_quantity <= 3)
		stack_a = ft_3_stack_a(stack_a, &a, str);
	else if (a.value_quantity == 4)
		stack_a = ft_4_stack_a(stack_a, &a, str);
	else if (a.value_quantity == 5)
		stack_a = ft_5_stack_a(stack_a, &a, str);
	return (stack_a);
}

static void	ft_print_all_commands(t_struct **str)
{
	*str = ft_commands_optimisation(*str);
	ft_commands_printer(*str);
	ft_free_str(*str);
}

static void	ft_push_swap(int argc, t_list *stack_a, t_struct **str, \
long int *array_int_sorted)
{
	if (argc <= 6)
		stack_a = ft_less_5(stack_a, str, argc - 1);
	else if (argc > 6)
		stack_a = ft_over_5(stack_a, str, array_int_sorted, argc - 1);
	ft_print_all_commands(str);
	ft_free(stack_a);
	free(array_int_sorted);
}

int	main(int argc, char **argv)
{
	t_list		*stack_a;
	t_struct	*str;
	long int	*array_int;
	long int	*array_int_sorted;
	char		**array_char;

	stack_a = NULL;
	str = NULL;
	array_int = NULL;
	array_int_sorted = NULL;
	array_char = NULL;
	if (ft_arguments_analysis(argc, argv) == 1)
		exit (1);
	else if (ft_arguments_analysis(argc, argv) == 0)
		exit (0);
	if (argc > 2)
	{
		array_char = ft_array_creation(argc - 1, argv);
		array_int = ft_char_convert(array_char, argc - 1);
		array_int_sorted = ft_sort(array_int, argc - 1);
		stack_a = ft_make_a_list(array_int, argc - 1, 1);
		ft_push_swap(argc, stack_a, &str, array_int_sorted);
	}
	exit(0);
}
