/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:45 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/16 16:33:15 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//swap function
static	void	swap(t_stack **root)
{
	t_stack	*swap_first_node;
	t_stack	*swap_second_node;

	if (*root == NULL || (*root)->next == NULL)
		return ;
	swap_first_node = *root;
	swap_second_node = (*root)->next;
	swap_first_node->next = swap_second_node->next;
	swap_second_node->next = swap_first_node;
	(*root) = swap_second_node;
}

void	sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
