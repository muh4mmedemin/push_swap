/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/10/02 01:43:20 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../commands/command.h"

int main(int argc, char *argv[])
{
     t_stack *a;
     t_stack *tmp;
     t_stack *tmpb;
     t_stack *b;
     int size;
     
     b = NULL;
     size = 0;
     if(ft_strchr(argv[1], ' '))
     {
          check_multiple_arg(argc, argv);    
          argv = modifed_split(argv[1], ' ', argv, ft_strlen(argv[1]));
          while(argv[size] != NULL)
               size++;
          argc = size;
     }
     argc--;
     check_arg(argv, argc);
     ft_fill_stack(&a, argv);
     find_index(a);
     radix(lst_size(a), &a, &b);
     // t_stack *test = copy_tstack(a);
     tmp = a;
     tmpb = b;
     /*while(a != NULL)
     {
          ft_printf("Sayı : %d İndex : %d\n", (int)a->content, (int)a->index);
          a = a->next;
     }
     ft_printf("----------- B STACK --------\n");
     while(b != NULL)
     {
          ft_printf("Sayı : %d İndex : %d\n", (int)b->content, (int)b->index);
          b = b->next;
     }*/
     if(size != 0)
          free_char_pp(argv);
     free_stack(tmp);
     free_stack(tmpb);
}

