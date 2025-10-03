/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:43:03 by muayna            #+#    #+#             */
/*   Updated: 2025/10/03 08:13:41 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

t_stack	*find_big_number(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*big;

	big = stack;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->index > big->index)
			big = tmp;
		tmp = tmp->next;
	}
	return (big);
}

int	bit_calc(t_stack *big_node)
{
	int	checker;
	int	size;

	size = 31;
	checker = 1073741824;
	while ((big_node->index & checker) == 0)
	{
		checker = checker >> 1;
		size--;
	}
	return (size);
}
