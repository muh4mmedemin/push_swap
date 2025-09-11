/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/12 01:09:19 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
     t_stack *a;
     t_stack *tmp;
     char **temp;
     copy_temp(&temp, argv, argc);
     argc--;
     check_arg(temp, argc);
     if(argc != 0)
     {
          a = malloc(sizeof(t_stack));
          ft_fill_stack(&a, argc, temp);
     }
     find_index(a, argc);
     tmp = a;
     while(a->next != NULL)
     {
          ft_printf("Sayı : %d İndex : %d\n", (int)a->content, (int)a->index);
          a = a->next;
     }
     free(tmp);
     free_char_pp(temp);
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
