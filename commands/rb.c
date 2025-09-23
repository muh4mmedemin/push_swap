/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:26:35 by muayna            #+#    #+#             */
/*   Updated: 2025/09/23 16:26:52 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"
#include "../push_swap.h"

void ra(t_stack **b)
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
     l->next = *b;
     last->next = tmp->next;
     *b = last;
     l->next->next = NULL;
}