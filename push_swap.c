/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/17 01:31:33 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands/command.h"

int main(int argc, char *argv[])
{
     t_stack *a;
     t_stack *tmp;
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

void copy_temp(char ***temp,  char **argv, int argc)
{
     int i;
     int b;
     i = 0;
     *temp = malloc(sizeof(char*) * (argc + 1));
     (*temp)[argc] = NULL;
     while(argv[i] != NULL)
     {
          b = ft_strlen(argv[i]);
          (*temp)[i] = malloc(b + 1);
          b = 0;
          while(argv[i][b] != '\0')
          {
               (*temp)[i][b] = argv[i][b];
               b++;
          }
          (*temp)[i][b] = '\0';
          i++;
     }
}
