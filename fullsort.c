/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 03:33:31 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/17 21:02:50 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack **a, t_stack **b)
{
	if (len_stack(*a) == 2)
		sa(a);
	else if (len_stack(*a) == 3)
		sort_three(a);
	else
		fullsort(a, b);
}

void	fullsort(t_stack **a, t_stack **b)
{
	int	len_of_a;
	int	len_of_b;

	while (len_stack(*a) > 3 && !sortchecker(*a))
	{
		if (stackmin(*a))
			ra(a);
		else
			pb(b, a);
	}
	sort_three(a);
	while ((*b))
	{
		set_index(a);
		set_index(b);
		len_of_a = len_stack(*a);
		len_of_b = len_stack(*b);
		set_target(a, b);
		get_price(b, len_of_a, len_of_b);
		move_to_a(a, b);
	}
}

void	move_to_a(t_stack **a, t_stack **b)
{
	t_stack	*to_a;
	int		a_index;
	int		b_index;

	to_a = cheap_node(b);
	a_index = 0;
	if (to_a)
		a_index = to_a->target_index;
	b_index = to_a->index;
	if (len_stack(*b) > 2)
	{
		if (after_mid(a_index, len_stack(*a)) && to_a->after_middle)
			handle_afteremidd(a, b, a_index, b_index);
		else if (!(after_mid(a_index, len_stack(*a))) && (!to_a->after_middle))
			handle_beforemidd(a, b, a_index, b_index);
		else
		{
			handle_mix_a(a, a_index);
			handle_mix_b(b, to_a, b_index);
			pa(a, b);
		}
	}
	else
		case_2(a, b, a_index);
}
