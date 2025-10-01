/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   muayna.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:09:29 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 02:04:49 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../commands/command.h"

void sort(int stack_size, int small_location, t_stack **a, t_stack **b)
{
    if (small_location < stack_size / 2)
    {
        while(small_location > 0)
        {
            ra(a);
            ft_printf("ra\n");
            small_location--;
        }
          pb(a, b);
          ft_printf("pb\n");
    }
    else if (small_location >= stack_size / 2)
    {
        small_location = stack_size - small_location;
        while(small_location > 0)
        {
            rra(a);
            ft_printf("rra\n");
            small_location--;
        }
          pb(a, b);
          ft_printf("pb\n");
    }
}
