/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:58:07 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/16 16:29:10 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// rotate functtion
static	void	rotate(t_stack **stack)
{
	t_stack	*first_node;
	t_stack	*last_node;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first_node = *stack;
	*stack = (*stack)->next;
	last_node = get_last_node(*stack);
	first_node->next = NULL;
	last_node->next = first_node;
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
