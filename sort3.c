/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:55:08 by tndreka           #+#    #+#             */
/*   Updated: 2024/06/03 03:44:01 by tndreka          ###   ########.fr       */
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
	
	// if (temp->data < temp->next->data && temp->next->data > temp->next->next->data)
	// {
	// 	printf("ktu1\n");
	// 	rra(&temp);
	// 	// if (!check_sort(temp))
	// 	// 	sa(&temp);
	// 	// return (temp);
	// }
	if (temp->data > temp->next->data && temp->next->data < temp->next->next->data)
	{
		printf("ktu2\n");
		sa(&temp);
	}
	else if (temp->data > temp->next->data && temp->next->data > temp->next->next->data)
	{
		printf("ktu3\n");
		sa(&temp);
		rra(&temp);
	}
	else if (temp->data > temp->next->data && temp->next->data < temp->next->next->data)
	{
		printf("ktu4\n");
		ra(&temp);
	}
	else if (temp->data > temp->next->data && temp->next->data > temp->next->next->data)
	{
		printf("ktu5\n");
		rra(&temp);
		sa(&temp);
	}
	else 
	{
		 printf("ktu1\n");
		// printf("vaaaaa\n");
		rra(&temp);
		// if (check_sort(temp))
			sa(&temp);
		return (temp);
	}
	return (temp);
}

/* konbini 1 3 2 +++ // ??
	konbini 2 3 1 +++
	konbini 2 1 3 +++
	kombinimi 3 1 2 ------ERROR------ sa --->output : 1 3 2 ???
	if (temp->data < temp->next->data && temp->next->data > temp->next->next->data)
	konbinimi 3 2 1 ------Error------ rra -->output : 1 3 2 ??
*/