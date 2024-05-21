/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:58:04 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/21 21:31:47 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void push(t_stack **dst, t_stack **src)
{
	t_stack *push_node;
	
	if (*src == NULL)
		return ;
	push_node = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = push_node;
}	

void pa(t_stack **a, t_stack **b)
{
	push(b,a);
	write(1, "pa\n", 3);
}

void pb(t_stack **a, t_stack **b)
{
	push(a,b);
	write(1, "pb\n", 3);
}
