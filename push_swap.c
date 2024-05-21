/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:40:34 by tndreka           #+#    #+#             */
/*   Updated: 2024/05/21 21:25:48 by tndreka          ###   ########.fr       */
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
	//check if we have any argument as input
	if (argc == 1 || (argc == 2 && !argv[1][0]))
}
