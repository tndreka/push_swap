/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:45 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/21 21:43:51 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(t_stack **root)
{
	t_stack *swap_first_node;
	t_stack *swap_second_node;

	if (*root == NULL || (*root)->next == NULL)
		return ;
	swap_first_node = *root;
	swap_second_node = (*root)->next;
	swap_first_node->next = swap_second_node;
	swap_second_node->next = swap_first_node;
	*root = swap_second_node;
}
void sa(t_stack **a)
{
	swap(a);
	write(1, "sa\n", 3);
}
void sb(t_stack **b)
{
	swap(b);
	write(1, "sb\n", 3);
}
void ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}