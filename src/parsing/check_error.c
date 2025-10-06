/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:35:08 by muayna            #+#    #+#             */
/*   Updated: 2025/10/06 19:56:29 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

static void	check_digit_length(char **argv, int argc, int size)
{
	int	i;

	i = 1;
	while (i <= argc)
	{
		if (argv[i][0] == '-')
		{
			if (modified_strlen(argv[i]) > 11 || ft_atoi(argv[i]) < -2147483648)
			{
				ft_printf("Error\n");
				if (size != 0)
					free_char_pp(argv);
				exit(1);
			}
		}
		else if (modified_strlen(argv[i]) > 10 || ft_atoi(argv[i]) > 2147483647)
		{
			ft_printf("Error\n");
			if (size != 0)
				free_char_pp(argv);
			exit(1);
		}
		i++;
	}
}

static void	char_is_digit(char *s, int size, char **argv)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			if ((s[i + 1] < '0' || s[i + 1] > '9')
				|| (s[i - 1] > '0' && s[i + 1] < '9'))
			{
				ft_printf("Error\n");
				if (size != 0)
					free_char_pp(argv);
				exit(1);
			}
		}
		else if ((s[i] < '0' || s[i] > '9'))
		{
			ft_printf("Error\n");
			if (size != 0)
				free_char_pp(argv);
			exit(1);
		}
		i++;
	}
}

static void	check_same(char **argv, int argc, int size)
{
	int	i;
	int	timer;
	int	s1;

	timer = 1;
	while (timer <= argc)
	{
		i = timer;
		s1 = ft_atoi(argv[timer]);
		while (i < argc)
		{
			i++;
			if ((ft_atoi(argv[i]) == s1))
			{
				ft_printf("Error\n");
				if (size != 0)
					free_char_pp(argv);
				exit(1);
			}
		}
		timer++;
	}
}

void	check_multiple_arg(int argc, char **argv)
{
	(void)argv;
	if (argc > 2)
	{
		ft_printf("Error\n");
		exit(1);
	}
}

void	check_arg(char **argv, int argc, int size)
{
	int	tmpargc;

	tmpargc = argc;
	check_digit_length(argv, argc, size);
	if (argc == 0)
	{
		ft_printf("Error\n");
		if (size != 0)
			free_char_pp(argv);
		exit(1);
	}
	if (argc == 0 || argv[argc][0] == '\0')
	{
		ft_printf("Error\n");
		if (size != 0)
			free_char_pp(argv);
		exit(1);
	}
	while (argc > 0)
	{
		char_is_digit(argv[argc], size, argv);
		argc--;
	}
	check_same(argv, tmpargc, size);
}
