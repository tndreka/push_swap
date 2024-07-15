/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:40:34 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/15 05:12:57 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************** PUSH SWAP **************************************/
/*This is a programm that takes as a parameter a random set of numbers positive
 * or negative and with the sorting algorithem we make the sorting in ascending
 * order.
*/

#include "push_swap.h"

void	finish_sort(t_stack **a)
{
	while (!sortchecker(*a))
		rra(a);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	else if (argument_checker(argv))
	{
		ft_printf("Error\n");
		return (1);
	}
	a = stackmaker(argc, argv);
	if (check_duplicate(a))
	{
		ft_printf("Error\n");
		return (1);
	}
	if (!sortchecker(a))
		push_swap(&a, &b);
	if (!sortchecker(a))
		finish_sort(&a);
	while (a)
	{
		printf("%d\n",(a)->data);
		(a) = (a)->next; 
	}
	
	return (0);
}
