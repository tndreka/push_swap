/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:39:23 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/17 20:20:10 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stackmaker(int argc, char **argv)
{
	t_stack		*stack;
	char		**string;
	int			i;

	stack = NULL;
	i = argc - 1;
	while (i > 0)
	{
		if (ft_strlen(argv[i]) > 1 && is_space(argv[i]))
		{
			string = ft_split(argv[i], 32);
			stack = listmaker(stack, string);
		}
		else
			stack = create_node(ft_atol(argv[i]), stack);
		i--;
	}
	return (stack);
}

t_stack	*listmaker(t_stack *stack, char **str)
{
	int		len;
	t_stack	*temp;

	len = 0;
	while (str[len])
		len++;
	while (len > 0)
	{
		temp = malloc(sizeof(t_stack));
		if (!temp)
			return (NULL);
		temp->data = ft_atol(str[len - 1]);
		temp->next = stack;
		stack = temp;
		len--;
	}
	return (stack);
}

// this creates node
t_stack	*create_node(int value, t_stack *stack)
{
	t_stack	*node;

	node = (t_stack *) malloc (sizeof(t_stack));
	if (! node)
		return (NULL);
	node->data = value;
	node->next = stack;
	stack = node;
	return (node);
}
