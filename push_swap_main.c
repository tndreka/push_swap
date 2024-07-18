/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:40:34 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/18 19:10:44 by tndreka          ###   ########.fr       */
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
		ra(a);
}

// void	leaks(void)
// {
// 	system("leaks push_swap");
// }

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
		write(2, "Error\n", ft_strlen("Error\n"));
		return (1);
	}
	a = stackmaker(argc, argv);
	if (check_duplicate(a))
	{
		write(2, "Error\n", ft_strlen("Error\n"));
		return (1);
	}
	if (!sortchecker(a))
		push_swap(&a, &b);
	if (!sortchecker(a))
		finish_sort(&a);
	free_all(&a);
	// atexit(leaks);
	return (0);
}
