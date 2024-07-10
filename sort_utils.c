/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:46:12 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/10 21:02:07 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

/* This function set the index of the stacks*/
void set_index(t_stack **stack)
{
	int	i;
	t_stack	*temp;

	i = 0;
	temp = *stack;
	while(temp)
	{
		temp->index = i;
		temp->after_middle = false;
		if (middle_check (temp, i))
			temp->after_middle = true;
		i++;
		temp = temp->next;
	}
}

void	set_match(int	match, t_stack	*tmp_a, t_stack	**b)
{
	if(tmp_a->data < match && tmp_a->data > (*b)->data )
	{
		match = tmp_a->data;
		(*b)->target_index = tmp_a->index;
	}
}

/*this function loop on the unsorted stack and for each node sets a target node on where it should go on stack a*/
void set_target(t_stack **a, t_stack **b)
{
	t_stack *tmp_a;
	int		match;
	t_stack *tmp;

	tmp = *b;
	while (*b)
	{
		match = INT_MAX;
		tmp_a = *a;
		while (tmp_a)
		{
			set_match(&match, tmp_a, b);
			tmp_a = tmp_a->next;
		}
		if (match == INT_MAX)
			(*b)->target_index = (stackmin(*a));
		(*b) = (*b)->next;
	}
	*b = tmp;
}

/* This function check if the current index on the stacj is after the middle */
bool middle_check(t_stack **stack, int i)
{
	int len;
	int middle;
	len = len_stack(*stack);
	middle = len / 2;
	
	return (i > middle);
}
