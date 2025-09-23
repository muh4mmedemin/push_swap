/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:39:42 by muayna            #+#    #+#             */
/*   Updated: 2025/09/23 16:39:56 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"
#include "../push_swap.h"

void rrb(t_stack **b)
{
     t_stack *tmp;
     t_stack *last;
     t_stack *l;
     
     l = *b;
     tmp = *b;
     last = *b;
     while (last->next != NULL)
          last = last->next;
     while (l->next->next != NULL)
          l = l->next;
     last->next = *b;
     l->next = NULL;
     *b = last;
}