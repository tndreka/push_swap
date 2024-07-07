/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:40:34 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/08 00:49:09 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************** PUSH SWAP **************************************/
/*This is a programm that takes as a parameter a random set of numbers positive
 * or negative and with the sorting algorithem we make the sorting in ascending
 * order.
*/

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a = NULL;
	t_stack	*b = NULL;

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
	if (sortchecker(a))
		return (0);
	else if (!sortchecker(a))
	{
		if (len_stack(a) == 3)
			sort_three(&a);
		else if (len_stack(a) == 5)
		{
			sort(&a, &b);
			// printstack(a);
		}
	}
	return (0);
}
// this is the main file //
