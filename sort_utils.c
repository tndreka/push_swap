/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:46:12 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/12 01:07:05 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

/* This function set the index of the stacks*/
void	set_index(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = *stack;
	while (temp)
	{
		temp->index = i;
		temp->after_middle = false;
		if (middle_check(&temp, i))
			temp->after_middle = true;
		i++;
		temp = temp->next;
	}
}

void	set_match(int *match, t_stack *tmp_a, t_stack **b)
{
	if (tmp_a->data < match && tmp_a->data > (*b)->data)
	{
		*match = tmp_a->data;
		(*b)->target_index = tmp_a->index;
	}
}

/*this function loop on the unsorted stack and for each node sets a target node on where it should go on stack a*/
void	set_target(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	int		match;
	t_stack	*tmp;

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
bool	middle_check(t_stack **stack, int i)
{
	int	len;
	int	middle;

	len = len_stack(*stack);
	middle = len / 2;
	return (i > middle);
}

// void	get_price(t_stack **a, t_stack **b, int len_a, int len_b)
// {
// 	while (*b)
// 	{
// 		if (!(*a)->after_middle && !(*b)->after_middle)
// 		{
// 			(*b)->price = (*b)->index;
// 			if ((*a)->index > ((*b)->index))
// 				(*b)->price = (*a)->index;
// 		}
// 		else if ((*a)->after_middle && (*b)->after_middle)
// 		{
// 			(*b)->price = len_b - (*b)->index;
// 			if ((len_a - (*a)->index) > len_b - (*b)->index)
// 				(*b)->price = len_a - (*a)->index;
// 		}
// 		else
// 		{
// 			(*b)->price = (*b)->index;
// 			if ((*b)->after_middle)
// 				(*b)->price = len_b - (*b)->index;
// 			if ((*a)->after_middle)
// 				(*b)->price += len_a - (*a)->index;
// 			else
// 				(*b)->price += (*a)->index;
// 		}
// 	}
// }

int	after_mid(int index, int len)
{
	return (2 * index >= len);
}

void	get_price(t_stack *a, t_stack *b, int len_a, int len_b)
{
	t_stack	*current_b;

	current_b = b;
	while (current_b)
	{
		if (!after_mid(b->target_index, len_a) && !current_b->after_middle)
		{
			current_b->price = current_b->index;
			if (a->index > current_b->index)
				current_b->price = a->index;
		}
		else if (after_mid(b->target_index, len_a) && current_b->after_middle)
		{
			current_b->price = len_b - current_b->index;
			if ((len_a - a->index) > (len_b - current_b->index))
				current_b->price = len_a - a->index;
		}
		else
		{
			current_b->price = current_b->index;
			if (current_b->after_middle)
				current_b->price = len_b - current_b->index;
			if (after_mid(b->target_index, len_a))
				current_b->price += len_a - a->index;
			else
				current_b->price += a->index;
		}
		current_b = current_b->next;
	}
}
