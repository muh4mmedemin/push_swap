/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   muayna_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:29:07 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 21:38:51 by muayna           ###   ########.fr       */
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

t_stack	*find_big_number(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*big;

	big = stack;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->index > big->index)
			big = tmp;
		tmp = tmp->next;
	}
	return (big);
}

void	radix(int stack_size, t_stack **a, t_stack **b)
{
	int	bitsize;
	int	i;
	int	c;
	int	bit;
	int	bsize;

	bit = 1;
	c = 0;
	i = 0;
	bitsize = bit_calc(find_big_number(*a));
	while (i < bitsize)
	{
		c = 0;
		while (c < stack_size)
		{
			if (((*a)->index & bit) == 0)
				pb(a, b);
			else
				ra(a);
			c++;
		}
		c = 0;
		bsize = lst_size(*b);
		while (c < bsize)
		{
			pa(a, b);
			c++;
		}
		bit = bit << 1;
		i++;
	}
}

int	bit_calc(t_stack *big_node)
{
	int	checker;
	int	size;

	size = 31;
	checker = 1073741824;
	while ((big_node->index & checker) == 0)
	{
		checker = checker >> 1;
		size--;
	}
	return (size);
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
			new_stack->next = malloc(sizeof(t_stack));
		new_stack = new_stack->next;
		temp = temp->next;
	}
	return (head_new_stack);
}
