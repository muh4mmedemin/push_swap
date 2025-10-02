/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   muayna_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:29:07 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 22:16:20 by muayna           ###   ########.fr       */
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

void	create_path(t_stack *stack, t_stack **a, t_stack **b)
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
	i = 0;
	while (i < root_size - 1)
	{
		pa(a, b);
		ft_printf("pa\n");
		i++;
	}
	(void)stack;
}

t_stack	*copy_tstack(t_stack *stack)
{
	t_stack	*temp;
	t_stack	*new_stack;
	t_stack	*head_new_stack;

	temp = stack;
	new_stack = malloc(sizeof(t_stack));
	head_new_stack = new_stack;
	while (temp != NULL)
	{
		new_stack->index = temp->index;
		new_stack->content = temp->content;
		if (temp->next != NULL)
		{
			new_stack->next = malloc(sizeof(t_stack));
			new_stack = new_stack->next;
		}
		else
		{
			new_stack->next = NULL;
		}
		temp = temp->next;
	}
	return (head_new_stack);
}
