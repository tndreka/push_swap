/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:26:44 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/22 22:44:03 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void reverse(t_stack **stack)
{
	t_stack *first_node;
	t_stack *last_node;
	t_stack *last_before;
	
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first_node = *stack;
	last_node = get_last_node(*stack);
	last_before = get_last_before(*stack);
	*stack = last_node;
	last_before->next = NULL;
	last_node->next = first_node;
	//*stack = last_node;
	
}
void rra(t_stack **a)
{
	reverse(a);
	write(1, "rra\n", 4);
}
void rrb(t_stack **b)
{
	reverse(b);
	write(1, "rrb\n", 4);
}
void rrr(t_stack **a, t_stack **b)
{
	reverse(a);
	reverse(b);
	write(1, "rrr\n", 4);
}