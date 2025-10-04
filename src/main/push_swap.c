/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:54:36 by muayna            #+#    #+#             */
/*   Updated: 2025/10/04 21:53:11 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

static void	free_all(t_stack *a, t_stack *b, char **argv, int size)
{
	if (size != 0)
		free_char_pp(argv);
	free_stack(a);
	free_stack(b);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	b = NULL;
	size = 0;
	if (argc != 1 && ft_strchr(argv[1], ' '))
	{
		check_multiple_arg(argc, argv);
		argv = modifed_split(argv[1], ' ', argv, ft_strlen(argv[1]));
		while (argv[size] != NULL)
			size++;
		argc = size;
	}
	argc--;
	check_arg(argv, argc, size);
	ft_fill_stack(&a, argv);
	find_index(a);
	create_path(&a, &b, size);
	free_all(a, b, argv, size);
}
