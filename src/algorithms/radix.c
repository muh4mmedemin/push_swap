/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 21:42:11 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 22:32:33 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

void	radix_sort(int bit, t_stack **a, t_stack **b)
{
	if (((*a)->index & bit) == 0)
		pb(a, b);
	else
		ra(a);
}

void	radix(int stack_size, t_stack **a, t_stack **b)
{
	int	bitsize;
	int	i;
	int	c;
	int	bit;
	int	bsize;

	bit = 1;
	i = 0;
	bitsize = bit_calc(find_big_number(*a));
	while (i < bitsize)
	{
		c = 0;
		while (c < stack_size)
		{
			radix_sort(bit, a, b);
			c++;
		}
		c = 0;
		bsize = lst_size(*b);
		while (c++ < bsize)
			pa(a, b);
		bit = bit << 1;
		i++;
	}
}
