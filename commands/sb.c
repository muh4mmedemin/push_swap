/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 00:15:11 by muayna            #+#    #+#             */
/*   Updated: 2025/09/23 23:56:40 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "command.h"

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
     ft_printf("sb\n");
}
