/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 03:33:31 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/10 21:04:45 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fullsort(t_stack **a, t_stack **b)
{
// 	int min1;
	while(len_stack(*a) > 3)
	{
		if (stackmin(*a))
			ra(a);
		else
			pb(b, a);
	}
	sort_three(a);
	while ((*b) != NULL)
	{
		set_index(*a);
		set_index(*b);
		set_target(*a, *b);
	}
}

void push_swap(t_stack **a, t_stack **b)
{

		if(len_stack(*a) == 2)
			sa(a);
		else if(len_stack(*a) == 3)
			sort_three(a);
		else if(len_stack(*a) == 4)
			sort_for(a, b);
		else if(len_stack(*a) == 5)
			sort_five(a, b);
		else
			fullsort(a, b);			 
		printstack(*a);
}

