/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:07 by muayna            #+#    #+#             */
/*   Updated: 2025/09/12 00:53:45 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> // sil
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdlib.h>

typedef struct stack
{
	int			content;
     int            index;
     struct stack	*next;
}    t_stack;

void check_arg(char **argv, int argc);
void check_same(char **argv, int argc);
void free_stack(t_stack *stack);
void free_char_pp(char **ptr);
int lst_size(t_stack *stack);
void find_index(t_stack *stack, int argc);
void copy_temp(char ***temp,  char **argv, int argc);
void ft_fill_stack(t_stack **a, int argc, char **argv);
#endif