/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:07 by muayna            #+#    #+#             */
/*   Updated: 2025/09/27 14:39:49 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> // sil
#include "../libs/libft/libft.h"
#include "../libs/ft_printf/ft_printf.h"
#include <stdlib.h>

typedef struct stack
{
	int			content;
     int            index;
     struct stack	*next;
}    t_stack;
void sort(t_stack **a, t_stack **b);
char **modifed_split(char *s, char sep, char **argv, int app_name_size);
void check_arg(char **argv, int argc);
void check_multiple_arg(int argc, char **argv);
void free_stack(t_stack *stack);
void free_char_pp(char **ptr);
int lst_size(t_stack *stack);
void find_index(t_stack *stack);
void copy_temp(char ***temp,  char **argv, int argc);
void ft_fill_stack(t_stack **a, char **argv);
void find_small_number(t_stack *stack);

#endif
