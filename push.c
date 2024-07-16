/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:58:04 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/16 16:28:58 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//this function pushes one element in one stack to another 
static	void	push(t_stack **dst, t_stack **src)
{
	t_stack	*push_node;

	if (*src == NULL)
		return ;
	push_node = (*src);
	(*src) = (*src)->next;
	push_node->next = *dst;
	*dst = push_node;
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_printf("pb\n");
}
