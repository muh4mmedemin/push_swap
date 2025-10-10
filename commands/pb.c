/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:00:06 by muayna            #+#    #+#             */
/*   Updated: 2025/10/10 11:37:31 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmpa;

	tmpa = *a;
	if ((*a) == NULL)
		return ;
	*a = (*a)->next;
	tmpa->next = (*b);
	*b = tmpa;
	ft_printf("pb\n");
}
