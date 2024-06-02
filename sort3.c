/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:55:08 by tndreka           #+#    #+#             */
/*   Updated: 2024/06/02 21:44:19 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// sorting 3 numbers
t_stack *sort_three(t_stack *stack)
{

	t_stack *temp;
	temp = stack;
	
	// if(temp->data > temp->next->data) 
	// 	sa(&temp);
	// if(temp->data > temp->next->next->data)
	// 	rra(&temp);
	// if(temp->next->data > temp->next->next->data) {
	// 	ra(&temp);
	// 	sa(&temp);
	// 	rra(&temp);
	// // }
	// printf("value is :%d\n", temp->data);
	// printf("value is :%d\n", temp->next->data);
	// printf("value is :%d\n", temp->next->next->data);
	if (temp->data < temp->next->data > temp->next->next->data)
	{
		printf("1\n");
		rra(&temp);
		if (!check_sort(temp))
			sa(&temp);
		return (temp);
	}
	if (temp->data > temp->next->data < temp->next->next->data)
	{
		printf("2\n");
		sa(&temp);
	}
	if (temp->data > temp->next->data > temp->next->next->data)
	{
		printf("3\n");
		rra(&temp);
	}
	if (temp->data > temp->next->data < temp->next->next->data)
	{
		printf("4\n");
		ra(&temp);
	}
	if (temp->data > temp->next->data > temp->next->next->data)
	{
		printf("5\n");
		ra(&temp);
		sa(&temp);
	}
	return (temp);
}