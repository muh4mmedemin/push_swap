/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:39:46 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 21:40:32 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

void	ft_fill_stack(t_stack **a, char **argv)
{
	int		size;
	int		i;
	t_stack	*temp;

	*a = malloc(sizeof(t_stack));
	size = 0;
	i = 1;
	temp = *a;
	while (argv[size] != NULL)
		size++;
	size--;
	while (size > 0)
	{
		temp->content = ft_atoi(argv[i]);
		if (size > 1)
			temp->next = malloc(sizeof(t_stack));
		temp = temp->next;
		i++;
		size--;
	}
}
