/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:41 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/18 21:47:32 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// LYBRARIES

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "./libft/libft.h"
# include "./ft__printf/ft_printf.h"

//STRUCT
typedef struct s_stack
{
	int							data;
	int							index;
	int							price;
	int							target_index;
	bool						cheap;
	bool						after_middle;
	struct s_stack				*next;
}				t_stack;
//OPERATIONS
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);
//Sort 3 numbers
void		sort_three(t_stack **stack);
//Sort algo
void		push_swap(t_stack **a, t_stack **b);
void		fullsort(t_stack **a, t_stack **b);
void		move_to_a(t_stack **a, t_stack **b);
void		finish_sort(t_stack **a);
//helper function for algo
void		set_index(t_stack **stack);
bool		middle_check(t_stack **stack, int i);
void		set_target(t_stack **a, t_stack **b);
void		set_match(int *match, t_stack *tmp_a, t_stack **b);
void		get_price(t_stack **b, int len_a, int len_b);
int			after_mid(int index, int len);
/// Handle MOVE TO A;
void		handle_afteremidd(t_stack **a, t_stack **b,
				int a_index, int b_index);
void		handle_beforemidd(t_stack **a, t_stack **b,
				int a_index, int b_index);
void		handle_mix_b(t_stack **b, t_stack *to_a, int b_index);
void		handle_mix_a(t_stack **a, int a_index);
void		case_2(t_stack **a, t_stack **b, int a_index);
//Create Stack - STACK INIT
t_stack		*stackmaker(int argc, char **argv);
t_stack		*listmaker(t_stack *stack, char **str);
t_stack		*create_node(int value, t_stack *stack);
//Stack helper functions - Stack UTILS
int			len_stack(t_stack *stack);
t_stack		*get_last_node(t_stack *stack);
t_stack		*get_last_before(t_stack *stack);
t_stack		*cheap_node(t_stack **stack);
//ERROR CHECKER -Stack Check
int			argument_checker(char **argv);
int			check_duplicate(t_stack *stack);
//Helper functions - UTILS
long int	ft_atol(const char *str);
int			sortchecker(t_stack *stack);
int			stackmin(t_stack *stack);
int			is_space(char *argv);
void		free_all(t_stack **stack);
void		free_str(char **string);
void	sort_five(t_stack **a, t_stack **b);
#endif