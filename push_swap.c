/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/11 19:11:18 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
     char **temp;
     int checker;
     t_stack *a;
     t_stack *tmp;
     
     checker = 0;
     temp = argv;
     argc--;
     if (argc == 1 && ft_strchr(argv[1], ' '))
     {
          checker = 1;
          temp = ft_split(argv[1], ' ');
     }
     check_arg(temp, argc);
     if(argc != 0)
     {
          a = malloc(sizeof(t_stack));
          ft_fill_stack(&a, argc, temp, checker);
     }
     find_index(a, argc);
     tmp = a;
     while(a->next != NULL)
     {
          ft_printf("Sayı : %d İndex : %d\n", (int)a->content, (int)a->index);
          a = a->next;
     }
     free_stack(tmp);
}
