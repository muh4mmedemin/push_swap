/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:39:46 by muayna            #+#    #+#             */
/*   Updated: 2025/09/12 00:43:02 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_fill_stack(t_stack **a, int argc, char **argv)
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
     while(size > 0)
     {
          temp->content=ft_atoi(argv[i]);
          //printf("%s\n", argv[1]);
          if(size > 0)
          {
               temp->next=malloc(sizeof(t_stack));
          }
          temp = temp->next;
          i++;
          size--;
     }
}
