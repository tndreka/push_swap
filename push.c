/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:58:04 by tndreka           #+#    #+#             */
/*   Updated: 2024/06/02 21:42:04 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//this function pushes one element in one stack to another 
static void push(t_stack **dst, t_stack **src)
{
	t_stack *push_node;
	if (*src == NULL)
		return ;
	push_node = (*src);
	(*src)->next = (*src);
	// push_node->next = (*src);
	*dst = push_node;
	push_node->next = *dst;
	*src = push_node;
}	

void pa(t_stack **a, t_stack **b)
{
	push(b,a);
	ft_printf("pa\n");
}

void pb(t_stack **a, t_stack **b)
{
	push(a,b);
	ft_printf("pb\n");
}
// t_stack *create_node(int value)
// {
// 	t_stack *node = (t_stack*)malloc(sizeof(t_stack));	
// 	node->data = value;
// 	node->next = NULL;
// 	return node;
// }


// #include <stdio.h>
// int main()
// {
// 	t_stack *a = create_node(23);
// 	a->next = create_node(44);
// 	a->next->next = create_node(10);
// 	t_stack *b = create_node(7);
// 	b->next = create_node(8);
// 	b->next->next = create_node(89);
// 	//here we print stack A
// 	t_stack *temp = a;
// 	printf("stack A before : \n");
// 	while (temp)
// 	{
// 		printf("%d\n", temp->data);
// 		temp = temp->next;
// 	}
// 	printf("stack B before: \n");
// 	///Here er print stack B
// 	t_stack *temp2 = b;
// 	while (temp2)
// 	{
// 		printf("%d\n", temp2->data);
// 		temp2 = temp2->next;
// 	}
		
// 	//here we print stack A after function swap a
// 	pa(&b, &a);
// 	// pa(&b, &a);
// 	// pa(&b, &a);
// 	t_stack *temp3 = a;
// 	printf("stack A after :\n ");
// 	while (temp3)
// 	{
// 		printf("%d\n", temp3->data);
// 		temp3 = temp3->next;
// 	}
// 	// // pb(&a, &b);
// 	printf("stack B after: ");
// 	///Here er print stack B AFTER FUNCTION SWAP B;
// 	t_stack *temp4 = b;
// 	while (temp4)
// 	{
// 		printf("%d\n", temp4->data);
// 		temp4 = temp4->next;
// 	}
// }