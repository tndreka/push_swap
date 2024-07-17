/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:19:30 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/17 21:30:17 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// check the argument if is a number from 0 to 9 a positive or a negative number
int	argument_checker(char **argv)
{
	int		i;
	int		j;
	long	num;

	i = 1;
	while (argv[i])
	{
		num = ft_atol(argv[i]);
		if (num < -2147483648 || num > 2147483647)
			return (1);
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			if (ft_isalpha(argv[i][j]) == 1)
				return (1);
			if (!ft_isdigit(argv[i][j]) && !(argv[i][j] != 32))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_duplicate(t_stack *stack)
{
	t_stack		*temp;
	int			i;

	while (stack)
	{
		temp = stack;
		i = 0;
		while (temp)
		{
			if (stack->data - temp->data == 0)
				i++;
			temp = temp->next;
		}
		if (i > 1)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	after_mid(int index, int len)
{
	return (2 * index >= len);
}
