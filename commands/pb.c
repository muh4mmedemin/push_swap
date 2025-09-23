/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:00:06 by muayna            #+#    #+#             */
/*   Updated: 2025/09/23 13:49:09 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"
#include "../push_swap.h"

void pb(t_stack **a, t_stack **b)
{
     t_stack *tmpa;

     tmpa = *a;
     *a = (*a)->next;
     tmpa->next = (*b);
     *b = tmpa;
}