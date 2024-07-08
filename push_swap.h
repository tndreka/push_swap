/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:50:41 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/08 12:17:58 by tndreka          ###   ########.fr       */
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
//Sort 3 & 5 numbers
void		sort_three(t_stack **stack);
void		sort_five(t_stack **a, t_stack **b);
void 		fullsort(t_stack **a, t_stack **b);
//For test
void		printstack(t_stack *stack);
//Create Stack
t_stack		*create_node(int value, t_stack *stack);
t_stack		*stackmaker(int argc, char **argv);
t_stack		*listmaker(t_stack *stack, char **str);
//Stack helper functions
t_stack		*get_last_node(t_stack *stack);
t_stack		*get_last_before(t_stack *stack);
int			stackmin(t_stack *stack);
int			len_stack(t_stack *stack);
int			sortchecker(t_stack *stack);
//ERROR CHECKER
int			argument_checker(char **argv);
int			check_duplicate(t_stack *stack);
//Helper functions
int			is_space(char *argv);
long int	ft_atol(const char *str);

#endif