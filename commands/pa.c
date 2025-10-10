/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:09:53 by muayna            #+#    #+#             */
/*   Updated: 2025/10/10 11:37:21 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmpb;

	tmpb = *b;
	if ((*b) == NULL)
		return ;
	*b = (*b)->next;
	tmpb->next = (*a);
	*a = tmpb;
	ft_printf("pa\n");
}
