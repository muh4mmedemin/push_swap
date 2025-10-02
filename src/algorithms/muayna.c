/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   muayna.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:09:29 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 23:37:00 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

void	sort(int stack_size, int small_location, t_stack **a, t_stack **b)
{
	if (small_location < stack_size / 2)
	{
		while (small_location > 0)
		{
			ra(a);
			small_location--;
		}
		pb(a, b);
	}
	else if (small_location >= stack_size / 2)
	{
		small_location = stack_size - small_location;
		while (small_location > 0)
		{
			rra(a);
			small_location--;
		}
		pb(a, b);
	}
}
