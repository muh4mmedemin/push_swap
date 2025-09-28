/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   muayna_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:29:07 by muayna            #+#    #+#             */
/*   Updated: 2025/09/28 15:37:37 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../commands/command.h"

t_stack  *find_small_number(t_stack *stack)
{
    t_stack *tmp;
    t_stack *small;

    small = stack;
    tmp = stack; 
    while (tmp != NULL)
    {
        if (tmp->index < small->index)
            small = tmp;
        tmp = tmp->next;
    }
    return small;
    // ft_printf("EN KÜÇÜĞÜ : %d\n", small->content);
}
void create_path(t_stack *stack, t_stack **a)
{
    t_stack *temp;
    t_stack *small;
    int     stack_size;
    int     small_location;

    small_location = 0;
    temp = stack;
    stack_size = lst_size(stack);
    small = find_small_number(stack);
    while (temp != small)
    {
        temp = temp->next;
        small_location++;
        // ft_printf("%d", small_location);
    }
    temp = stack;
    if (small_location < stack_size / 2)
    {
        while(small_location > 0)
        {
            ra(a);
            small_location--;
        }
    }
    else if (small_location >= stack_size / 2)
    {
        small_location = stack_size - small_location;
        while(small_location > 0)
        {
            rra(a);
            small_location--;
        }
    }
    //ft_printf("%d", temp->content);
}

t_stack *copy_tstack(t_stack *stack)
{
    t_stack *temp;
    t_stack *new_stack;
    t_stack *head_new_stack;
    
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
    return head_new_stack;
}
