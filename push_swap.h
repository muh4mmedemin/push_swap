/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:07 by muayna            #+#    #+#             */
/*   Updated: 2025/09/11 16:47:18 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> // sil
#include "libft/libft.h"
#include <stdlib.h>

void check_arg(char **argv, int argc);

typedef struct stack
{
	int			content;
     int            index;
     struct stack	*next;
}    t_stack;
#endif