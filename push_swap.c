/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/05 18:00:19 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h>

void ft_fill_stack(t_stack **a, int argc, char **argv)
{
     int i = 1;
     t_stack *temp;
     temp = *a;
     while(argc > 0)
     {
          temp->content=ft_atoi(argv[i]);
          if(argc != 0)
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
     b = a;
     if(argc != 0)
     {
          a = malloc(sizeof(t_stack));
          ft_fill_stack(&a, argc, argv);
     }
     while(a->next != NULL)
     {
          printf("%d\n", (int)a->content);
          a = a->next;
     }
     free(b);
     /*a = malloc(sizeof(t_stack));
     a->content=ft_atoi(argv[1]);
     a->next=malloc(sizeof(t_stack));
     a->next->content=ft_atoi(argv[2]);*/
}