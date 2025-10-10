/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:07 by muayna            #+#    #+#             */
/*   Updated: 2025/10/10 11:37:12 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/ft_printf/ft_printf.h"
# include "../libs/libft/libft.h"
# include <stdlib.h>

typedef struct stack
{
	int				content;
	int				index;
	struct stack	*next;
}					t_stack;
char				**modifed_split(char *s, char sep, char **argv,
						int app_name_size);
void				check_arg(char **argv, int argc, int size);
void				check_multiple_arg(int argc, char **argv);
void				free_stack(t_stack *stack);
void				free_char_pp(char **ptr);
int					lst_size(t_stack *stack);
void				find_index(t_stack *stack);
void				ft_fill_stack(t_stack **a, char **argv);
t_stack				*find_small_number(t_stack *stack);
t_stack				*find_big_number(t_stack *stack);
void				create_path(t_stack **a, t_stack **b);
void				sort(int stack_size, int small_location, t_stack **a,
						t_stack **b);
t_stack				*copy_tstack(t_stack *stack);
//
void				radix(int stack_size, t_stack **a, t_stack **b);
int					bit_calc(t_stack *big_node);
size_t				modified_strlen(const char *s);
t_stack				*find_big_number(t_stack *stack);
void				char_is_digit2(int size, char **argv);

#endif
