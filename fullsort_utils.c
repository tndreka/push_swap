/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullsort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:21:17 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/17 16:48:24 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_afteremidd(t_stack **a, t_stack **b, int a_index, int b_index)
{
	a_index = len_stack(*a) - a_index;
	b_index = len_stack(*b) - b_index;
	while (a_index && b_index)
	{
		rrr(a, b);
		(a_index)--;
		(b_index)--;
	}
	while (a_index-- > 0)
		rra(a);
	while (b_index-- > 0)
		rrb(b);
	pa(a, b);
}

void	handle_beforemidd(t_stack **a, t_stack **b, int a_index, int b_index)
{
	while (a_index > 0 && b_index > 0)
	{
		rr(a, b);
		(a_index)--;
		(b_index)--;
	}
	while (a_index > 0)
	{
		ra(a);
		(a_index)--;
	}
	while (b_index > 0)
	{
		rb(b);
		(b_index)--;
	}
	pa(a, b);
}

void	handle_mix_a(t_stack **a, int a_index)
{
	if (after_mid(a_index, len_stack(*a)))
	{
		a_index = len_stack(*a) - a_index;
		while (a_index-- > 0)
			rra(a);
	}
	else
	{
		while (a_index-- > 0)
			ra(a);
	}
}

void	handle_mix_b(t_stack **b, t_stack *to_a, int b_index)
{
	if (to_a->after_middle)
	{
		b_index = len_stack(*b) - b_index;
		while (b_index-- > 0)
			rrb(b);
	}
	else
	{
		while (b_index-- > 0)
			rb(b);
	}
}

void	case_2(t_stack **a, t_stack **b, int a_index)
{
	if (after_mid(a_index, len_stack(*a)))
	{
		a_index = len_stack(*a) - a_index;
		while (a_index > 0)
		{
			rra(a);
			(a_index)--;
		}
	}
	else
	{
		while (a_index > 0)
		{
			ra(a);
			(a_index)--;
		}
	}
	if ((*b)->next && ((*b)->price > (*b)->next->price))
		sb(b);
	pa(a, b);
}
