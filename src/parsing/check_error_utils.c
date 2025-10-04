/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:23:26 by muayna            #+#    #+#             */
/*   Updated: 2025/10/04 16:23:26 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../commands/command.h"
#include "../../include/push_swap.h"

size_t	modified_strlen(const char *s)
{
	size_t	i;

	i = 0;
    while(s[i] == '0')
    {
        i++;
    }
	while (s[i])
		i++;
	return (i);
}