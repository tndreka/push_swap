/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:43:31 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/08 01:31:23 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack **a, t_stack **b)
{
	int min1;
	while (len_stack(*a) > 3)
	{
		min1 = stackmin(*a);
		if ((*a)-> data == min1)
			pb(b, a);
		else
			ra(a);
	}
	sort_three(a);
	while (len_stack(*b) > 0)
	{
		pa(a, b);
	}
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
