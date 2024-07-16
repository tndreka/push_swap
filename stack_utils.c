/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:54:46 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/16 16:33:27 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//functions for stack
int	len_stack(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

// get the last node of the stack
t_stack	*get_last_node(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

// gets the node that is one position before last node 
t_stack	*get_last_before(t_stack *stack)
{
	if (!stack || !stack->next || !stack->next->next)
		return (NULL);
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

t_stack	*cheap_node(t_stack **stack)
{
	int			match_data;
	t_stack		*match;
	t_stack		*b;

	b = *stack;
	match_data = INT_MAX;
	match = NULL;
	while (b)
	{
		if ((b)->price < match_data)
		{
			match_data = b->price;
			match = (b);
		}
		b = (b)->next;
	}
	return (match);
}
