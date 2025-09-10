/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:07 by muayna            #+#    #+#             */
/*   Updated: 2025/09/10 17:35:47 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
     void sa(int argc, char *argv[]);
     typedef struct stack
     {
	     int			content;
          int            index;
	     struct stack	*next;
     }    t_stack;
#endif