/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/10 17:31:42 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h>

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

void ft_fill_stack(t_stack **a, int argc, char **argv)
{
     int i = 1;
     t_stack *temp;
     temp = *a;
     while(argc > 0)
     {
          temp->content=ft_atoi(argv[i]);
          if(argc > 0)
          {
               temp->next=malloc(sizeof(t_stack));
          }
          temp = temp->next;
          i++;
          argc--;
     }
}

int main(int argc, char *argv[])
{
     argc--;
     int i = 1;
     t_stack *a;
     t_stack *b;
     if(argc != 0)
     {
          a = malloc(sizeof(t_stack));
          ft_fill_stack(&a, argc, argv);
     }
     b = a;
     while(a->next != NULL)
     {
          printf("%d\n", (int)a->content);
          a = a->next;
     }
     free_stack(b);
}