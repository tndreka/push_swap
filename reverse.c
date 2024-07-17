/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:26:44 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/17 16:33:31 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//this thunction put the last node first 
static	void	reverse(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;
	t_stack	*last_before;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first_node = *stack;
	last_node = get_last_node(*stack);
	last_before = get_last_before(*stack);
	*stack = last_node;
	last_before->next = NULL;
	last_node->next = first_node;
}

void	rra(t_stack **a)
{
	reverse(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse(a);
	reverse(b);
	ft_printf("rrr\n");
}
