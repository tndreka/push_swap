/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:46:12 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/08 20:23:51 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	stackmin(t_stack *stack)
{
	int	min;

	min = INT_MAX;
	while (stack != NULL)
	{
		if (stack->data < min)
			min = stack->data;
		stack = stack->next;
	}
	return (min);
}

int chunk_calculator(t_stack **stack)
{
	int	len;
	int chunk1 = 5;
	int chunk2 = 11;
	int sizeofchunk = 0;
	len = len_stack(*stack);
	if (len == 100)
		sizeofchunk = len / chunk1;
	else if (len == 500) 
		sizeofchunk = len / chunk2;
	return sizeofchunk;
}

t_stack *chunk_creator(t_stack **stack)
{
	t_stack *current = 	*stack;
	t_stack **chunks;
	t_stack *chunck_head;
	t_stack *chunk_tail;
	int sizeofchunk = chunk_calculator(stack);
	int i ;

	chunks = (t_stack **)malloc( len_stack(*stack) * len_stack(*stack) / sizeofchunk + 1);
	if (chunks == NULL)
		return (free(chunks), NULL);
	while (current)
	{
		i = 0;
		chunck_head = current;
		chunk_tail = NULL;
		while (current && i < sizeofchunk)
		{	
			chunk_tail = current;
			current = current->next;
			i++;
		}
		if (chunk_tail != NULL)
			chunk_tail -> next = NULL;
		chunks[i++] = chunck_head;
	}
	return *chunks;	
}
