/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 03:33:31 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/12 01:13:06 by tndreka          ###   ########.fr       */
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
		set_index(a);
		set_index(b);
		len_of_a = len_stack(*a);
		len_of_b = len_stack(*b);
		set_target(a, b);
		get_price(a, b, len_of_a, len_of_b);
		move_to_a(a, b);
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
// 	printstack(*a);
}

// void move_to_a(t_stack **a, t_stack **b)