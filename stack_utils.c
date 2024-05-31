/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 21:54:46 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/31 17:51:08 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int len_stack(t_stack *stack) //this finds the len of stack
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
	return(i);
}
t_stack *get_last_node(t_stack *stack) // get the last node of the stack
{
	if (!stack)
		return (0);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack *get_last_before(t_stack *stack) // gets the node that is one position before last node 
{
	if (!stack || !stack->next || !stack->next->next)
		return (NULL);
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}
t_stack *create_node(int value, t_stack *stack)// this creates node
{
	t_stack *node = (t_stack*)malloc(sizeof(t_stack));
	if (!node)	
		return (NULL);
	node->data = value;
	node->next = stack;
	stack = node;
	return node;
}
int is_space(char *argv)// checker if they are any space in the input argv
{
	int i = 0;
	if (!argv)
		return (1);
	while (argv[i])
	{
		if (argv[i] == 32)
			return (1);
		i++;
	}
	return (0);
}
//so this function check the stack if its sorted in ascendingored || descending order
// 
int check_sort(t_stack *stack)
{
	t_stack *temp;
	int asc_o;
	int dsc_o;
	temp = stack;
	asc_o = 1;
	dsc_o = 1;
	
	if (!stack || !stack->next)
		return 0;
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			asc_o = 0;
		if (temp->data < temp->next->data)
			dsc_o = 0;
		temp = temp->next;
	}
	if (asc_o && !dsc_o)
		return 1; //list its sorted in ASCENDING ORDER
	if (!asc_o && dsc_o)
		return -1; // list its sorted in DESCENDING ORDER
	return 0;
}