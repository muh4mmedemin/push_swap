/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:39:33 by muayna            #+#    #+#             */
/*   Updated: 2025/09/16 22:47:10 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_index(t_stack *stack)
{
     t_stack *tmp;
     t_stack *tmp2;
     int index;
     index = 0;
     tmp = stack;
     while (tmp->next != NULL)
     {
          tmp2 = stack;
          index = 0;
          while(tmp2->next != NULL)
          {
               if (tmp->content > tmp2->content)
                    index++;
               tmp2 = tmp2->next;
          }
          tmp->index = index;
          tmp = tmp->next;
     }
}

int lst_size(t_stack *stack)
{
     int size;
     size = 0;
     while (stack != NULL)
     {
          stack = stack->next;
          size++;
     }
     return size;
}

void free_stack(t_stack *stack)
{
     t_stack *tmp;
     while (stack != NULL)
     {
          tmp = stack->next;
          free(stack);
          stack = tmp;
     }
}

void free_char_pp(char **ptr)
{
     int i;

     i = 0;
     while (ptr[i] != NULL)
     {
          free(ptr[i]);
          i++;
     }
     free(ptr);
}