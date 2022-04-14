NAME = push_swap

BON_NAME = checker

ALL_C =	push_swap_src/ft_add_node_back.c			push_swap_src/ft_char_convert.c \
		push_swap_src/ft_free.c 					push_swap_src/ft_init_node.c \
		push_swap_src/ft_num_check.c				push_swap_src/ft_putstr.c \
		push_swap_src/ft_array_creation.c			push_swap_src/ft_strdup.c \
		push_swap_src/ft_5_stack_a.c				push_swap_src/ft_mid_value.c \
		push_swap_src/ft_strlen.c					push_swap_src/ft_free_all.c \
		push_swap_src/ft_check_int.c				push_swap_src/ft_sort.c \
		push_swap_src/ft_repeat_check.c				push_swap_src/ft_is_it_sorted.c \
		push_swap_src/ft_make_a_list.c				push_swap_src/ft_3_stack_a.c \
		push_swap_src/ft_4_stack_a.c				push_swap.c \
		push_swap_src/ft_init_info.c				push_swap_src/ft_commands.c \
		push_swap_src/ft_add_node_front.c			push_swap_src/ft_last_value.c \
		push_swap_src/ft_comparison.c				push_swap_src/ft_rra_rrb.c \
		push_swap_src/ft_sa_sb.c					push_swap_src/ft_ra_rb.c \
		push_swap_src/ft_pa_pb.c					push_swap_src/ft_commands_optimisation.c \
		push_swap_src/ft_commands_printer.c			push_swap_src/ft_higher_mid.c \
		push_swap_src/ft_free_str.c					push_swap_src/ft_min_value.c \
		push_swap_src/ft_is_list_sorted.c			push_swap_src/ft_over_5.c \
		push_swap_src/ft_b_less_3.c					push_swap_src/ft_b_over_3.c \
		push_swap_src/ft_half.c						push_swap_src/ft_index_is_1.c \
		push_swap_src/ft_a_equal_to_min.c			push_swap_src/ft_b_equal_to_min.c \
		push_swap_src/ft_index_not_1.c				push_swap_src/ft_move_a.c \
		push_swap_src/ft_move_b.c					push_swap_src/ft_rra.c

BON_ALL_C = checker_src/ft_array_creation.c		checker.c \
			checker_src/ft_check_instructions.c checker_src/ft_checker_exe.c \
			checker_src/ft_char_convert.c		checker_src/ft_check_int.c \
			checker_src/ft_commands.c			checker_src/ft_free.c \
			checker_src/ft_free_all.c			checker_src/ft_putstr.c \
			checker_src/ft_free_str.c			checker_src/ft_is_it_sorted.c \
			checker_src/ft_make_a_list.c		checker_src/ft_num_check.c \
			checker_src/ft_repeat_check.c		checker_src/ft_sort.c \
			checker_src/ft_instruction_comparison.c checker_src/ft_is_list_sorted.c \
			checker_src/ft_add_node_back.c		checker_src/ft_comparison.c \
			checker_src/ft_init_info.c			checker_src/ft_init_node.c \
			checker_src/ft_pa_pb.c				checker_src/ft_ra_rb.c \
			checker_src/ft_rra_rrb.c			checker_src/ft_sa_sb.c \
			checker_src/ft_strdup.c				checker_src/ft_strlen.c \
			checker_src/ft_add_node_front.c		checker_src/ft_a_b_less_2.c \
			checker_src/ft_a_commands.c			checker_src/ft_b_commands.c \
			checker_src/ft_a_less_2.c			checker_src/ft_b_less_2.c \
			checker_src/ft_no_a.c				checker_src/ft_no_b.c \
			checker_src/ft_pa.c					checker_src/ft_pb.c

HEADER = push_swap.h

BON_HEADER = checker.h

OBJ = $(patsubst %.c,%.o,$(ALL_C))

BON_OBJ = $(patsubst %.c,%.o,$(BON_ALL_C))

FLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

$(BON_NAME): $(BON_OBJ)
	gcc $(FLAGS) $(BON_OBJ) -o $(BON_NAME)

%.o : %.c Makefile push_swap.h checker.h
	gcc $(FLAGS) -c $< -o $@

$(OBJ): $(HEADER)

$(BON_OBJ): $(BON_HEADER)

all: $(NAME)

bonus: $(BON_NAME)

clean:
	rm -f $(OBJ) $(BON_OBJ)

fclean: clean
	rm -f $(NAME) $(BON_NAME)

re: fclean all

.PHONY: all clean fclean re
