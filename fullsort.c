/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 03:33:31 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/12 03:01:39 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fullsort(t_stack **a, t_stack **b)
{
	int		len_of_a;
	int		len_of_b;

	while (len_stack(*a) > 3)
	{
		if (stackmin(*a))
			ra(a);
		else
			pb(b, a);
	}
	sort_three(a);
	while ((*b) != NULL)
	{
		int i = 0;
		// ft_printf("started loop %d time", i);
		set_index(a);
		set_index(b);
		len_of_a = len_stack(*a);
		len_of_b = len_stack(*b);
		set_target(a, b);
		get_price(a, b, len_of_a, len_of_b);
		move_to_a(a, b);
		ft_printf("done loop %d time", i);
	}
}

void	push_swap(t_stack **a, t_stack **b)
{
	if (len_stack(*a) == 2)
		sa(a);
	else if (len_stack(*a) == 3)
		sort_three(a);
	else if (len_stack(*a) == 4)
		sort_for(a, b);
	else if (len_stack(*a) == 5)
		sort_five(a, b);
	else
		fullsort(a, b);
}
// 	printstack(*a);

void	move_to_a(t_stack **a, t_stack **b)
{
	t_stack		*to_a;
	int			a_index;
	int			b_index;

	to_a = cheap_node(b);
	if (to_a)
		a_index = to_a->target_index;
	a_index = 0;
	b_index = to_a->index;
	ft_printf("adjjksdkj\n");
	if (after_mid(a_index, len_stack(*a)) && to_a->after_middle)
	{
		ft_printf("j\n");

		a_index = len_stack(*a) - a_index;
		b_index = len_stack(*b) - b_index;
		while (a_index && b_index)
		{
			rrr(a, b);
			a_index--;
			b_index--;
		}
		while (a_index--)
			rra(a);
		while (b_index--)
			rrb(b);
		pa(a, b);
	}
	else if (!(after_mid(a_index, len_stack(*a))) && (!to_a->after_middle))
	{
		ft_printf("DEBUG 3");
		while (a_index && b_index)
		{
			rr(a, b);
			a_index--;
			b_index--;
		}
		while (a_index--)
			ra(a);
		while (b_index--)
			rb(b);
		pa(a, b);
	}
	else
	{
		ft_printf("DEBUG 4");
		if (after_mid(a_index, len_stack(*a)))
		{
			a_index = len_stack(*a) - a_index;
			while (a_index--)
				rra(a);
		}
		else
		{
			while (a_index--)
				ra(a);
		}
		if (to_a->after_middle)
		{
			b_index = len_stack(*b) - b_index;
			while (b_index--)
			{
				rrb(b);
			}
		}
		else
		{
			while (b_index--)
				rb(b);
		}
		pa(a, b);
	}
	ft_printf("sasasas");
}