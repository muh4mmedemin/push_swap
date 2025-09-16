/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:35:08 by muayna            #+#    #+#             */
/*   Updated: 2025/09/16 23:15:21 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void char_is_digit(char *s)
{
     int i;
     i = 0;
     while (s[i] != '\0')
     {
          if (s[i] == '-')
          {
               if (s[i + 1] < '0' || s[i + 1] > '9')
               {
                    ft_printf("Yanlış argüman algılandı");
                    exit(1);
               }
          }
          else if ((s[i] < '0'|| s[i] > '9'))
          {
               ft_printf("Sayı dışında argüman algılandı");
               exit(1);
          }
          i++;
     }
}

void check_arg(char **argv, int argc)
{
     int tmpargc;

     tmpargc = argc;
     if (argc == 0 || argv[argc][0] == '\0')
     {
          printf("Error : Boşluk Olabilir veya Lütfen Argüman giriniz !!");
          exit(1);
     }
     while(argc > 0)
     {
          char_is_digit(argv[argc]);
          argc--;
     }
     check_same(argv, tmpargc);
}

void check_same(char **argv, int argc)
{
     int i;
     int timer;
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
