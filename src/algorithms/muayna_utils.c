/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   muayna_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:29:07 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 23:39:20 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

void	stackb_to_stacka(int root_size, t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i < root_size)
	{
		pa(a, b);
		i++;
	}
}

t_stack	*find_small_number(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*small;

	small = stack;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->index < small->index)
			small = tmp;
		tmp = tmp->next;
	}
	return (small);
}

void	create_path(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	t_stack	*small;
	int		small_location;
	int		i;
	int		root_size;

	root_size = lst_size(*a);
	i = 0;
	while (lst_size(*a) != 1)
	{
		small_location = 0;
		temp = *a;
		small = find_small_number((*a));
		while (temp != small)
		{
			temp = temp->next;
			small_location++;
		}
		sort(lst_size(*a), small_location, a, b);
		i++;
	}
	stackb_to_stacka(root_size - 1, a, b);
}
