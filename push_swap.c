/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:40:34 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/31 17:53:50 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***************************** PUSH SWAP **************************************/
/** This is a programm that takes as a parameter a random set of numbers positive
 **  or negative and with the sorting algorithem we make the sorting in ascending
 **  order.
*/

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a = NULL; // initialization of the stack A  B
	t_stack *b = NULL;
	if (argc == 1)
		return(0);
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
	if (check_sort(a))
		printf("arrey its sorted");
	else if (!check_sort(&a))
	{
		if (len_stack == 3)
			sort_three(&a);
		else
			sort_full_stack(&a);
	}
	return 0; 
}
