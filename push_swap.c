/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/11 16:48:19 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_index(t_stack *stack, int argc)
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
     check_arg(argv, argc);
     if (argc == 0)
          return printf("%c", 'a');
     argc--;
     t_stack *a;
     t_stack *tmp;
     if(argc != 0)
     {
          a = malloc(sizeof(t_stack));
          ft_fill_stack(&a, argc, argv);
     }
     find_index(a, argc);
     tmp = a;
     /*while(a->next != NULL)
     {
          printf("Sayı : %d İndex : %d\n", (int)a->content, (int)a->index);
          a = a->next;
     }*/
     free_stack(tmp);
}
