/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:20:54 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/28 19:10:54 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	argument_checker(char **argv) // check the argument if is a number from 0 to 9 a positive or a negative number  
{
	int i = 1;
	int j;
	if (!argv)
		return (0);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!((argv[i][j] >= '0' &&  argv[i][j] <= '9') || argv[i][j] == 32 || argv[i][j] == '-')) // here we check if it is anything else other than number
				return (0); // if yes return 0 // stop the program
			j++;
		}
		i++;
	}
	return (1);// if are numbers go on 
}

t_stack *stackmaker(int argc, char **argv)
{
	t_stack *stack = NULL;
	char 	**string; 
	int i = argc - 1;

	while (i > 0)
	{
		if (ft_strlen(argv[i]) > 1 && is_space(argv[i]))
		{
			string = ft_split(argv[i], 32);
			stack = make_list(stack, string);
		}
		else
			stack = create_node(ft_atoi(argv[i]), stack);
		i--;
	}
	return (stack);
}

t_stack *make_list(t_stack *stack, char **str)
{
	int len = 0;
	t_stack *temp;
	while (str[len])
		len++;
	while (len > 0)
	{
		temp = malloc(sizeof(t_stack));
		if (!temp)
			return NULL;
		temp->data = ft_atoi(str[len - 1]);
		temp->next = stack;
		stack = temp; 
		len--;
	}
	return (stack);
}

int check_duplicate(t_stack *stack)
{
	t_stack *temp;
	int i;
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