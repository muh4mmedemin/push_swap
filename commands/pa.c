/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:09:53 by muayna            #+#    #+#             */
/*   Updated: 2025/09/23 14:11:15 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"
#include "../push_swap.h"

void pa(t_stack **a, t_stack **b)
{
     t_stack *tmpb;

     tmpb = *b;
     *b = (*b)->next;
     tmpb->next = (*a);
     *a = tmpb;
}