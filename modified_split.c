/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modified_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:42:45 by muayna            #+#    #+#             */
/*   Updated: 2025/09/15 18:19:28 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	countword(char *s, char sep)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
     printf("sa\n");
	while (s[i] != '\0')
	{
          printf("sa\n");
		if ((s[i + 1] == sep && s[i] != sep) || (s[i] == '\0'
				&& s[i] != sep))
			word++;
		i++;
	}
	return (word);
}

void fillprogname(char **argv, char **str)
{
     int b;
     
     b = 0;
     while(argv[0][b] != '\0')
     {
          str[0][b] = argv[0][b];
          b++;
     }
     str[0][b] = '\0';
}

void fill(char *s, char sep, char **str)
{
     int i;
     int b;
     int c;
     c = 0;
     b = 0;
     i = 1;
     while (str[i] != NULL)
     {
          while (s[b] == sep)
               b++;
          c = 0;
          while (s[b] != sep && s[b] != '\0')
          {
               str[i][c] = s[b];
               b++;
               c++;
          }
          str[i][c] = '\0';
          i++;
     }
}

static int chrsize(char *s, char sep, int *cursor)
{
     int size;
     size = 0;
     while (s[(*cursor)] == sep)
          (*cursor)++;
     while (s[(*cursor)] != sep && s[(*cursor)] != '\0')
     {
          size++;
          (*cursor)++;
     }
     return size;
}

char **modifed_split(char *s, char sep, char **argv, int app_name_size)
{
     int word_size;
     int cursor;
     char **str;
     int b;
     b = 0;
     cursor = 0;
     word_size = countword((char *)s, sep);
     str = malloc(sizeof(char*) * (word_size + 2));
     str[word_size + 1] = NULL;
     while (b < word_size + 2)
     {
          if(b == 0)
               str[b] = malloc(app_name_size + 1);
          else 
               str[b] = malloc(chrsize(s, sep, &cursor) + 1);
          b++;
     }
     fillprogname(argv, str);
     fill(s, sep, str);
     return str;
     
}

int main (int argc, char *argv[])
{
     int i = 0;
     char **str = modifed_split((char*)argv[1], ' ', argv, ft_strlen(argv[0]));
     while (str[i] != NULL)
     {
          printf("%s\n", str[i]);
          i++;
     }
}
