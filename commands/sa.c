/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:49:41 by muayna            #+#    #+#             */
/*   Updated: 2025/09/22 10:45:17 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"
#include "../push_swap.h"

void sa(t_stack **a)
{
     t_stack *tmptop;
     t_stack *tmpnext;
     int tmp;
	
     tmptop = *a;
     tmpnext = tmptop->next;
	if (tmpnext == NULL || tmptop == NULL)
		return ;
     tmp = tmptop->content;
     tmptop->content = tmpnext->content;
     tmpnext->content = tmp;
     tmp = tmptop->index;
     tmptop->index = tmpnext->index;
     tmpnext->index = tmp;
     ft_printf("sa\n");
}
