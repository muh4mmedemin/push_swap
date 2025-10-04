/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   muayna_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:29:07 by muayna            #+#    #+#             */
/*   Updated: 2025/10/04 20:50:03 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

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
static int	is_stack_sorted(t_stack *stack)
{
	t_stack *tmp;
	int i;

	i = 0;
	tmp = stack;
	while(tmp->index == i && tmp->next != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
		return 1;
	return 0;

}

static void sort_tree(t_stack **a)
{
	t_stack *tmp;

	tmp = *a;
	if (is_stack_sorted(*a))
		return ;
	if (tmp->index == 0)
	{
		rra(a);
		sa(a);
	}
	else if (tmp->index == 1 && tmp->next->index == 0)
		sa(a);
	else if (tmp->index == 1 && tmp->next->index == 2)
		rra(a);
	else if (tmp->index == 2 && tmp->next->index == 0)
		ra(a);
	else if (tmp->index == 2 && tmp->next->index == 1)
	{
		sa(a);
		rra(a);
	}	
}

static void sort_five(t_stack **a, t_stack **b)
{
	t_stack *tmpa;
	int location_big_node;

	tmpa = *a;
	while (lst_size(*a) != 3)
	{
		location_big_node = 1;
		while (tmpa != find_small_number(*a))
		{
			location_big_node++;
			tmpa = tmpa->next;
		}
		if (location_big_node <= (lst_size(*a) + 1) / 2)
			while (location_big_node-- != 1)
				ra(a);
		else
			while(location_big_node++ != lst_size(*a) + 1)
				rra(a);
		pb(a, b);
		tmpa = *a;	
	}
	find_index(*a);
	sort_tree(a);
	while ((*b) != NULL)
		pa(a, b); 
}

void	create_path(t_stack **a, t_stack **b)
{
	int size_stack;

	size_stack = lst_size(*a);
	
	if (is_stack_sorted(*a))
		return ;
	else if (size_stack < 4)
		sort_tree(a);
	else if (size_stack < 6)
	{
		sort_five(a , b);
		find_index(*a);
	}
	(void)b;
}
