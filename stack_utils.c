/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:54:46 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/12 20:45:29 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//functions for stack
int	len_stack(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

// get the last node of the stack
t_stack	*get_last_node(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

// gets the node that is one position before last node 
t_stack	*get_last_before(t_stack *stack)
{
	if (!stack || !stack->next || !stack->next->next)
		return (NULL);
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

void	printstack(t_stack *stack)
{
	t_stack	*current = NULL;

	*current = *stack;
	while (current)
	{
		ft_printf("%d->", current->data);
		current = current->next;
	}
}
//so this function check the stack if its sorted i
//in ascendingored || descending order
// 
// int sortchecker(t_stack *stack)
// {
// 	t_stack *temp;
// 	int asc_o;
// 	int dsc_o;
// 	temp = stack;
// 	asc_o = 1;
// 	dsc_o = 1;
// 	if (!stack || !stack->next)
// 		return 0;
// 	while (temp->next) // check if temp its ascending or descendin
// 	{
// 		if (temp->data > temp->next->data)
// 			dsc_o = 0;
// 		if (temp->data < temp->next->data)
// 			asc_o = 0;
// 		temp = temp->next;
// 	}
// 	if (asc_o && !dsc_o)
// 		return 1; //list its sorted in ASCENDING ORDER
// 	if (!asc_o && dsc_o)
// 		return -1; // list its sorted in DESCENDING ORDER
// 	return 0;
// // }