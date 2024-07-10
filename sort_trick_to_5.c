/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_trick_to_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:55:08 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/10 19:18:12 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// sorting 3 numbers

void	sort_three(t_stack **stack)
{
	if ((*stack)->data > (*stack)->next->data
		&&(*stack)->next->data < (*stack)->next->next->data // 2 > 1 < 3
		&& (*stack)->data < (*stack)->next->next->data)
		sa(stack);
	else if ((*stack)->data > (*stack)->next->data //  3 > 2 > 1
		&& (*stack)->next->data > (*stack)->next->next->data)
	{
		sa(stack);
		rra(stack);
	}
	else if ((*stack)->data > (*stack)->next->data
		&&(*stack)->next->data < (*stack)->next->next->data //3 > 1 <2
		&& (*stack)->data > (*stack)->next->next->data)
		ra(stack);
	else if ((*stack)->data < (*stack)->next->data
		&& (*stack)->next->data > (*stack)->next->next->data // 2 < 3 > 1 
		&& (*stack)->data > (*stack)->next->next->data)
		rra(stack);
	else if ((*stack)->data < (*stack)->next->data
		&& (*stack)->next->data > (*stack)->next->next->data && // 1 > 3 > 2
		(*stack)->data < (*stack)->next->next->data)
	{
		rra(stack);
		sa(stack);
	}
}
void sort_for(t_stack **a, t_stack **b)
{
		int min1;
	while (len_stack(*a) > 3)
	{
		min1 = stackmin(*a);
		if ((*a)-> data == min1)
			pb(b, a);
		else
			ra(a);
	}
	sort_three(a);
	while (len_stack(*b) > 0)
	{
		pa(a, b);
	}
// 	printstack(*a);
}
void sort_five(t_stack **a, t_stack **b)
{
		int min1;
	while (len_stack(*a) > 3)
	{
		min1 = stackmin(*a);
		if ((*a)-> data == min1)
			pb(b, a);
		else
			ra(a);
	}
	sort_three(a);
	while (len_stack(*b) > 0)
	{
		pa(a, b);
	}
// 	printstack(*a);
}