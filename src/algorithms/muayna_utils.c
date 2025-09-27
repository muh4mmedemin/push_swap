/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   muayna_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:29:07 by muayna            #+#    #+#             */
/*   Updated: 2025/09/27 14:41:44 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../commands/command.h"

void find_small_number(t_stack *stack)
{
    t_stack *tmp;
    t_stack *small;

    small = stack;
    tmp = stack; 
    while (tmp != NULL)
    {
        if (tmp->index < small->index)
            small = tmp;
        tmp = tmp->next;
    }
    // ft_printf("EN KÜÇÜĞÜ : %d\n", small->content);
}