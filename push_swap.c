/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/22 11:24:07 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands/command.h"

int main(int argc, char *argv[])
{
     t_stack *a;
     t_stack *tmp;
     t_stack *b;
     int size;
     size = 0;
     if(ft_strchr(argv[1], ' '))
     {
          argv = modifed_split(argv[1], ' ', argv, ft_strlen(argv[1]));
          while(argv[size] != NULL)
               size++;
          argc = size;
     }
     argc--;
     check_arg(argv, argc);
     a = malloc(sizeof(t_stack));
     ft_fill_stack(&a, argv);
     find_index(a);
     sort(&a, &b);  
     tmp = a;
     while(a->next != NULL)
     {
          ft_printf("Sayı : %d İndex : %d\n", (int)a->content, (int)a->index);
          a = a->next;
     }
     if(size != 0)
          free_char_pp(argv);
     free_stack(tmp);
}

