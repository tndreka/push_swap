/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:19:30 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/19 21:00:47 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	argument_checker(char **argv)
{
	int		i;
	int		j;
	long	num;

	i = 0;
	num = 0;
	while (argv[++i])
	{
		num = ft_atol(argv[i]);
		if (num < -2147483648 || num > 2147483647)
			return (1);
		if (argv[i][0] == '\0')
			return (1);
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
		{
			j++;
			if (!argv[i][j])
				return (1);
		}
		while (argv[i][j++])
			if (!ft_isdigit(argv[i][j - 1]) && argv[i][j - 1] != 32)
				return (1);
	}
	return (0);
}

int	valid_check(char **argv)
{
	long	num;
	int		i;

	i = 0;
	while (argv[i])
	{
		num = ft_atol(argv[i]);
		if (num < -2147483648 || num > 2147483647)
			return (1);
		if (*argv[i] == '\0')
			return (1);
		return (0);
	}
	return (0);
}

int	check_duplicate(t_stack *stack)
{
	t_stack	*temp;
	int		i;

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
