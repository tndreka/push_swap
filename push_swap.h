/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:41 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/28 19:10:49 by tndreka          ###   ########.fr       */
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

typedef struct s_stack
{
	int							data;
	int 						index;
	struct s_stack				*next;
}				t_stack;

void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);
void ra(t_stack **a);
void rb(t_stack **b);
void rr(t_stack **a, t_stack **b);
int len_stack(t_stack *stack);
t_stack *get_last_node(t_stack *stack);
t_stack *get_last_before(t_stack *stack);
t_stack *create_node(int value, t_stack *stack);
int is_space(char *argv);
t_stack *stackmaker(int argc, char **argv);
t_stack *make_list(t_stack *stack, char **str);
int	argument_checker(char **argv);
int check_duplicate(t_stack *stack);
#endif