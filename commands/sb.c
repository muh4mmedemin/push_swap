/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 00:15:11 by muayna            #+#    #+#             */
/*   Updated: 2025/09/17 01:31:02 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "command.h"
#include "../push_swap.h"

void sb(t_stack **b)
{
     t_stack *tmptop;
     t_stack *tmpnext;
     int tmp;
	
     tmptop = *b;
     tmpnext = tmptop->next;
	if (tmpnext == NULL || tmptop == NULL)
		return ;
     tmp = tmptop->content;
     tmptop->content = tmpnext->content;
     tmpnext->content = tmp;
     tmp = tmptop->index;
     tmptop->index = tmpnext->index;
     tmpnext->index = tmp;
}