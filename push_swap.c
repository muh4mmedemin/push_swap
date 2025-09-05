/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/05 15:57:45 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
     argc--;
     int i = 1;
     t_stack *a;
     t_stack *temp;
     a = malloc(sizeof(t_stack));
     temp = a;
    while(argc > 0)
     {
          temp->content=ft_atoi(argv[i]);
          temp->next=malloc(sizeof(t_stack));
          temp = temp->next;
          i++;
          argc--;
     }
     while(a->next != NULL)
     {
          printf("%d", (int)a->content);
          a = a->next;
     }
     /*a = malloc(sizeof(t_stack));
     a->content=ft_atoi(argv[1]);
     a->next=malloc(sizeof(t_stack));
     a->next->content=ft_atoi(argv[2]);*/
}