/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:20:54 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/18 15:11:02 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atol(const char *str)
{
	int			i;
	long int	sign;
	long		res;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
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
		return (0);
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
	int	index;

	index = 0;
	min = INT_MAX;
	while (stack != NULL)
	{
		if (stack->data < min)
		{
			min = stack->data;
			index = stack->index;
		}
		stack = stack->next;
	}
	return (index);
}

void	free_all(t_stack **stack)
{
	while (*stack)
	{
		free(*stack);
		(*stack) = (*stack)->next;
	}
}
