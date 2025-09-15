/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:35:08 by muayna            #+#    #+#             */
/*   Updated: 2025/09/15 15:32:31 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_arg(char **argv, int argc)
{
     int tmpargc;
     int i;

     tmpargc = argc;
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
     check_same(argv, tmpargc);
}

void check_same(char **argv, int argc)
{
     int i;
     int timer;
     char *temp;
     int s1;

     timer = 1;
     while(timer <= argc)
     {
          i = timer;
          s1 = ft_atoi(argv[timer]);
          while (i < argc)
          {
               i++;
               if(ft_atoi(argv[i]) == s1)
               {
                    printf("Error : Aynı sayı giriş yaptınız, lütfen farklı sayılar giriniz !!");
                    exit(1);
               }
          }
          
          timer++;
     }
}
