/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:20:54 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/12 04:03:54 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atol(const char *str)
{
	int			i;
	long int	sign;
	int			res;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

int	sortchecker(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	if (!stack || !stack->next)
		return (1);
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

// checker if they are any space in the input argv
int	is_space(char *argv)
{
	int	i;

	i = 0;
	if (!argv)
		return (1);
	while (argv[i])
	{
		if (argv[i] == 32)
			return (1);
		i++;
	}
	return (0);
}

int	stackmin(t_stack *stack)
{
	int	min;

	min = INT_MAX;
	while (stack != NULL)
	{
		if (stack->data < min)
			min = stack->data;
		stack = stack->next;
	}
	return (min);
}

bool	see_cheap(t_stack **b)
{
	int			match_data;
	t_stack		*match;

	match_data = INT_MAX;
	while (*b)
	{
		if ((*b)->price < match_data)
		{
			match_data = (*b)->price;
			match = (*b);
			return (true);
		}
		(*b) = (*b)->next;
	}
	return (false);
}

t_stack *cheap_node(t_stack **b)
{
	int			match_data;
	t_stack		*match;

	match_data = INT_MAX;
	match = NULL;
	while (*b)
	{
		if ((*b)->price < match_data)
		{
			match_data = (*b)->price;
			match = (*b);
		}
		(*b) = (*b)->next;
	}
	return (match);
}
	// while (*stack)
	// {
	// 	if ((*stack)->cheap)
	// 		return (*stack);
	// 	(*stack) = (*stack)->next;
	// }
	// return (*stack);
