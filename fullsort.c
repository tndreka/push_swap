/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 03:33:31 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/08 03:41:55 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fullsort(t_stack **a, t_stack **b)
{
	int min;
	while (len_stack(*a) > 3)
	{
		min = stackmin(*a);
		if((*a)->data == min)
			pb(b, a);
		else
			ra(a);
	}
	sort_three(a);
	while (len_stack(*b) > 0)
	{
		pa(a, b);
	}
}