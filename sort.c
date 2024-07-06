/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:43:31 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/06 15:55:33 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack **a, t_stack **b)
{
	int	min;

	while (len_stack(*a) > 3)
	{
		min = stackmin(*a);
		if ((*a)-> data == min)
			pb(a, b);
		else
			rra(a);
		(*a) = (*a)->next;
	}
	printstack(*b);
	sort_three(*a);
	while (len_stack(*b) > 0)
	{
		pa(b, a);
		if ((*b)->data > (*b)->next->data)
			sb(b);
		(*b) = (*b)->next;
	}
	printstack(*a);
}
// void	sort(t_stack **a, t_stack **b)
// {
// 	ft_printf("stack a : \n");
// 	printstack(*a);
// 	ft_printf("\n");
// 	if (len_stack(*a) > 3)
// 	{
// 		pb(a, b);
// 		pb(a, b);
// 	}
// 	ft_printf("stack b : ");
// 	printstack(*b);
// 	sort_three(*a);
// 	printstack(*a);
// 	pa(b, a);
// 	pa(b, a);
// 	printstack(*a);
// }
