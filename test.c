/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:13:23 by tndreka           #+#    #+#             */
/*   Updated: 2024/07/15 02:48:16 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void set_index(t_stack **temp)
// {
// 	int i = 0;
// 	t_stack	stack;
// 	if ((*stack) == NULL)
// 		return NULL;
// 	while (*stack)
// 	{
// 		(*stack)->index = i;	
// 		if(middle_check((*stack), i))
// 			(*stack)->after_middle = true;
// 		else 
// 			(*stack)->after_middle = false;
// 		i++;
// 		*stack = (*stack)->next;
// 	}		
// }
$>ARG="<100 random values>"; ./push_swap $ARG | ./checker_OS $ARG