/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:33:16 by muayna            #+#    #+#             */
/*   Updated: 2025/09/23 16:39:24 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"
#include "../push_swap.h"

void rra(t_stack **a)
{
     t_stack *tmp;
     t_stack *last;
     t_stack *l;
     
     l = *a;
     tmp = *a;
     last = *a;
     while (last->next != NULL)
          last = last->next;
     while (l->next->next != NULL)
          l = l->next;
     last->next = *a;
     l->next = NULL;
     *a = last;
}