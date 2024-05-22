/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:58:07 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/22 21:37:04 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	rotate(t_stack **stack)
{
	t_stack *first_node;
	t_stack *last_node;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first_node = *stack;
	*stack = (*stack)->next;
	last_node = get_last_node(*stack);
	first_node->next = NULL;
	last_node->next = first_node;
}
void ra(t_stack **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}
void rb(t_stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}
void rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
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
//     t_stack *a = create_node(23);
//     a->next = create_node(44);
//     a->next->next = create_node(10);
//     t_stack *b = create_node(7);
//     b->next = create_node(8);
//     b->next->next = create_node(89);
//     // here we print stack A
//     t_stack *temp = a;
//     printf("stack A before : \n");
//     while (temp)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
//     printf("stack B before: \n");
//     ///Here er print stack B
//     t_stack *temp2 = b;
//     while (temp2)
//     {
//         printf("%d\n", temp2->data);
//         temp2 = temp2->next;
//     }
        
//     //here we print stack A after function swap a
//     ra(&a);
//     t_stack *temp3 = a;
//     printf("stack A after :\n ");
//     while (temp3)
//     {
//         printf("%d\n", temp3->data);
//         temp3 = temp3->next;
//     }
//     rb(&b);
//     printf("stack B after: ");
//     ///Here er print stack B AFTER FUNCTION SWAP B;
//     t_stack *temp4 = b;
//     while (temp4)
//     {
//         printf("%d\n", temp4->data);
//         temp4 = temp4->next;
//     }
// }