/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:13:49 by sgummy            #+#    #+#             */
/*   Updated: 2021/09/25 12:13:56 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_list	t_list;
struct s_list
{
	long int	number;
	int			index;
	t_list		*next;
};

typedef struct s_info	t_info;
struct s_info
{
	long int	first_value;
	long int	second_value;
	long int	last_value;
	long int	value_quantity;
};

typedef struct s_inf	t_inf;
struct s_inf
{
	long int	a_value_quantity;
	long int	a_mid;
	long int	b_value_quantity;
	long int	b_mid;
	int			index;
	int			k;
	int			t;
	int			i;
	int			rra;
	t_list		*stack_a;
	t_list		*stack_b;
};

typedef struct s_struct	t_struct;
struct s_struct
{
	char		*command;
	t_struct	*next;
};

void		ft_putstr(char *str);
int			ft_num_check(char **str, int array_len);
long int	*ft_char_convert(char **argv, int array_len);
t_list		*ft_init_node(t_list *list, long int number, int index);
t_list		*ft_add_node_back(t_list *list, long int number, int index);
void		ft_free(t_list *begin);
char		*ft_strdup(char *s1);
int			ft_strlen(char *str);
void		ft_free_all(char **array, int array_len);
char		**ft_array_creation(int array_len, char **argv);
int			ft_check_int(long int *array_int, int array_len);
int			ft_repeat_check(long int *array_int, int array_len);
int			ft_is_it_sorted(long int *array_int, int array_len);
t_list		*ft_make_a_list(long int *array_int, int array_len, int index);
t_struct	*ft_commands(t_struct *str, char *command);
t_list		*ft_add_node_front(t_list *list, long int number, int index);
int			ft_comparison(long int *array_int_sorted, t_list *stack_a, \
long int array_len, long int quantity);
t_list		*ft_pa_pb(t_list *stack_b, t_list *stack_a, int index);
t_list		*ft_sa_sb(t_list *stack_a);
t_list		*ft_ra_rb(t_list *stack_a);
t_list		*ft_rra_rrb(t_list *stack_a);
void		ft_free_str(t_struct *str);
t_info		ft_init_info(t_info *a);
int			ft_is_list_sorted(t_list *stack_a);
void		ft_check_instructions(t_struct *str);
int			ft_instruction_comparison(char *str, char *buf);
void		ft_checker_exe(t_list *stack_a, t_struct *str, \
long int	*array_int_sorted, int array_len);
long int	*ft_sort(long int *array_int, int array_len);
void		ft_no_a(t_inf *a_b);
void		ft_no_b(t_inf *a_b);
void		ft_a_less_2(t_inf *a_b);
void		ft_b_less_2(t_inf *a_b);
void		ft_a_b_less_2(t_inf *a_b);
void		ft_a_commands(t_inf *a_b, t_struct **str);
void		ft_b_commands(t_inf *a_b, t_struct **str);
void		ft_pa(t_inf *a_b);
void		ft_pb(t_inf *a_b);

#endif
