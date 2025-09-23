/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:35:13 by muayna            #+#    #+#             */
/*   Updated: 2025/09/23 16:27:07 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"
#include "../push_swap.h"

void rb(t_stack **a)
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
     l->next = *a;
     last->next = tmp->next;
     *a = last;
     l->next->next = NULL;
}
