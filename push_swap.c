/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/10 19:31:24 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h>

void find_index(t_stack *stack, int argc)
{
     t_stack *tmp;
     t_stack *small;
     int index = 0;
     int s1;
     int tmpargc = argc;
     tmp = stack;
     while (argc > 0)
     {
          tmp = stack;
          s1 = tmp->content;
          while (tmp != NULL)
          {
               tmp = tmp->next;
               if (tmp != NULL && s1 > tmp->content)
               {
                    s1 = tmp->content;
                    small = tmp;
               }
          }
          stack = stack->next;
          argc--;
     }
     printf("%d", s1);
}

int lst_size(t_stack *stack)
{
     int size;
     size = 0;
     while (stack->next != NULL)
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
     int size = 0;
     t_stack *a;
     t_stack *tmp;
     if(argc != 0)
     {
          a = malloc(sizeof(t_stack));
          ft_fill_stack(&a, argc, argv);
          size = lst_size(a);
     }
     find_index(a, argc);
     tmp = a;
     /*while(a->next != NULL)
     {
          printf("%d\n", (int)a->content);
          a = a->next;
     }*/
     free_stack(tmp);
}