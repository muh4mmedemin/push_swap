/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:35:13 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 21:36:36 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "command.h"

void	ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*l;

	l = *a;
	tmp = *a;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	while (l->next->next != NULL)
		l = l->next;
	*a = (*a)->next;
	last->next = tmp;
	tmp->next = NULL;
	ft_printf("ra\n");
}
