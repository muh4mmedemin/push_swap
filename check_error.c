/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:35:08 by muayna            #+#    #+#             */
/*   Updated: 2025/09/11 17:06:22 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_arg(char **argv, int argc)
{
     argc--;
     int i;
     i = 0;
     if (argc == 0 || argv[argc][0] == '\0')
     {
          printf("Error : Boşluk Olabilir veya Lütfen Argüman giriniz !!");
          exit(1);
     }
     while(argc > 0)
     {
          i = 0;
          while(argv[argc][i])
          {
               if(!ft_isdigit(argv[argc][i]))
               {
                    printf("Error : Lütfen sadece sayı giriniz !!");
                    exit(1);
               }
               i++;
          }
          argc--;
     }
}

void check_same(char **argv, int argc)
{
     
}
