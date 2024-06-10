/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:55:08 by tndreka           #+#    #+#             */
/*   Updated: 2024/06/10 20:33:19 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// sorting 3 numbers

t_stack	*sort_three(t_stack *stack)
{
	if (stack->data > stack->next->data
		&&stack->next->data < stack->next->next->data // 2 > 1 < 3
		&& stack->data < stack->next->next->data)
		sa(&stack);
	else if (stack->data > stack->next->data //  3 > 2 > 1
		&& stack->next->data > stack->next->next->data)
	{
		sa(&stack);
		rra(&stack);
	}
	else if (stack->data > stack->next->data
		&&stack->next->data < stack->next->next->data //3 > 1 <2
		&& stack->data > stack->next->next->data)
		ra(&stack);
	else if (stack->data < stack->next->data
		&& stack->next->data > stack->next->next->data // 2 < 3 > 1 
		&& stack->data > stack->next->next->data)
		rra(&stack);
	else if (stack->data < stack->next->data
		&& stack->next->data > stack->next->next->data && // 1 > 3 > 2
		stack->data < stack->next->next->data)
	{
		rra(&stack);
		sa(&stack);
	}
	return (stack);
}
