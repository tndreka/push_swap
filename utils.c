/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:20:54 by tndreka           #+#    #+#             */
/*   Updated: 2024/06/10 20:47:57 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//helper function
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
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != 32)
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
