/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 03:33:31 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/16 20:59:10 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	push_swap(t_stack **a, t_stack **b)
{
	if (len_stack(*a) == 2)
		sa(a);
	else if (len_stack(*a) == 3)
		sort_three(a);
	else
		fullsort(a, b);
}

// void	move_to_a(t_stack **a, t_stack **b)
// {
// 	t_stack	*to_a;
// 	int		a_index;
// 	int		b_index;

// 	to_a = cheap_node(b);
// 	a_index = 0;
// 	if (to_a)
// 		a_index = to_a->target_index;
// 	b_index = to_a->index;
// 	if (len_stack(*b) > 2)
// 	{
// 		if (after_mid(a_index, len_stack(*a)) && to_a->after_middle)
// 		{
// 			a_index = len_stack(*a) - a_index;
// 			b_index = len_stack(*b) - b_index;
// 			while (a_index && b_index)
// 			{
// 				rrr(a, b);
// 				a_index--;
// 				b_index--;
// 			}
// 			while (a_index-- > 0)
// 				rra(a);
// 			while (b_index-- > 0)
// 				rrb(b);
// 			pa(a, b);
// 		}
// 		else if (!(after_mid(a_index, len_stack(*a))) && (!to_a->after_middle))
// 		{
// 			while (a_index && b_index)
// 			{
// 				rr(a, b);
// 				a_index--;
// 				b_index--;
// 			}
// 			while (a_index-- > 0)
// 				ra(a);
// 			while (b_index-- > 0)
// 				rb(b);
// 			pa(a, b);
// 		}
// 		else
// 		{
// 			if (after_mid(a_index, len_stack(*a)))
// 			{
// 				a_index = len_stack(*a) - a_index;
// 				while (a_index-- > 0)
// 					rra(a);
// 			}
// 			else
// 			{
// 				while (a_index-- > 0)
// 					ra(a);
// 			}
// 			if (to_a->after_middle)
// 			{
// 				b_index = len_stack(*b) - b_index;
// 				while (b_index-- > 0)
// 				{
// 					rrb(b);
// 				}
// 			}
// 			else
// 			{
// 				while (b_index-- > 0)
// 					rb(b);
// 			}
// 			pa(a, b);
// 		}
// 	}
// 	else
// 	{
// 		if (after_mid(a_index, len_stack(*a)))
// 		{
// 			a_index = len_stack(*a) - a_index;
// 			while (a_index-- > 0)
// 				rra(a);
// 		}
// 		else
// 		{
// 			while (a_index-- > 0)
// 				ra(a);
// 		}
// 		if ((*b)->next && ((*b)->price > (*b)->next->price))
// 			sb(b);
// 		pa(a, b);
// 	}
// }

void handle_afteremidd(t_stack **a, t_stack **b, int a_index, int b_index)
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

void handle_beforemidd(t_stack **a, t_stack **b, int a_index, int b_index)
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

void handle_mix(t_stack **a, t_stack **b, t_stack *to_a ,int a_index, int b_index)
{
 if (after_mid(a_index, len_stack(*a)))
         {
             a_index = len_stack(*a) - a_index;
        while (a_index-- > 0)
        {
            rra(a);
            //(a_index)--;
        }
    }
    else
    {
        while (a_index-- > 0)
        {
            ra(a);
            //(a_index)--;
        }
    }
    if (to_a->after_middle)
    {
        b_index = len_stack(*b) - b_index;
        while (b_index-- > 0)
        {
            rrb(b);
            //(b_index)--;
        }
    }
    else
    {
        while (b_index-- > 0)
        {
            rb(b);
            //(b_index)--;
        }
    }
    pa(a, b);
}

void case_2(t_stack **a, t_stack **b, int a_index)
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
  			handle_mix(a, b, to_a, a_index, b_index);
	}
	else
		case_2(a, b, a_index);
}