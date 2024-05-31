/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:45 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/31 15:41:51 by tndreka          ###   ########.fr       */
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
	swap_first_node->next = swap_second_node->next;
	swap_second_node->next = swap_first_node;
	(*root)= swap_second_node;
}
void sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
}
void sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
}
void ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
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
// 	sa(&a);
// 	t_stack *temp3 = a;
// 	printf("stack A after :\n ");
// 	while (temp3)
// 	{
// 		printf("%d\n", temp3->data);
// 		temp3 = temp3->next;
// 	}
// 	sb(&b);
// 	printf("stack B after: ");
// 	///Here er print stack B AFTER FUNCTION SWAP B;
// 	t_stack *temp4 = b;
// 	while (temp4)
// 	{
// 		printf("%d\n", temp4->data);
// 		temp4 = temp4->next;
// 	}
// }