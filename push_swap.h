/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:41 by tndreka           #+#    #+#             */
/*   Updated: 2024/06/02 21:41:39 by tndreka          ###   ########.fr       */
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
#include "stdio.h"

typedef struct s_stack
{
	int							data;
	int 						index;
	int							position;
	int							target;
	struct s_stack				*next;
}				t_stack;
/* COMANDS*/
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);
void ra(t_stack **a);
void rb(t_stack **b);
void rr(t_stack **a, t_stack **b);
void rra(t_stack **a);
void rrb(t_stack **b);
void rrr(t_stack **a, t_stack **b);
/* STACK */
int len_stack(t_stack *stack);
t_stack *get_last_node(t_stack *stack);
t_stack *get_last_before(t_stack *stack);
t_stack *create_node(int value, t_stack *stack);
int is_space(char *argv);
/*STACK INIT*/
t_stack *stackmaker(int argc, char **argv);
t_stack *make_list(t_stack *stack, char **str);
/*CHECKER'S*/
int	argument_checker(char **argv);
int check_duplicate(t_stack *stack);
int check_sort(t_stack *stack);
/*HELPER FUNCTION's*/
long int	ft_atol(const char *str);
t_stack *sort_three(t_stack *stack);
#endif
//header file