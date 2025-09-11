/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:39:46 by muayna            #+#    #+#             */
/*   Updated: 2025/09/11 19:19:18 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_fill_stack(t_stack **a, int argc, char **argv, int checker)
{
     int size;
     int i;
     t_stack *temp;
     
     size = 0;
     i = 1;
     temp = *a;
     while (argv[size] != NULL)
          size++;
     size--;
     printf("%d\n", argc);
     while(size > 0)
     {
          temp->content=ft_atoi(argv[i]);
          if(size > 0)
          {
               temp->next=malloc(sizeof(t_stack));
          }
          temp = temp->next;
          i++;
          argc--;
          size--;
     }
}
