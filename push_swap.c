/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/09/01 18:16:12 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "libft/libft.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
     argc--;
     t_stack *a;
     int d;
     a = malloc(sizeof(t_stack));
     while (argc >= 1)
     {
          d = ft_atoi(argv[argc]);
          argc--;
     }
     printf("%d" ,d);
}