NAME = pushswap.a
SRCS = push_swap.c
DIRLIBFT = libft
DIRPRINTF = ft_printf
LIBS = libft/libft.a ft_printf/libftprintf.a

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf

all: rom $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rom:
	make -C $(DIRLIBFT)
	make -C $(DIRPRINTF)
rom_fclean:
	make -C $(DIRLIBFT) fclean
	make -C $(DIRPRINTF) fclean
rom_clean:
	make -C $(DIRLIBFT) clean
	make -C $(DIRPRINTF) clean
rom_re:
	make -C $(DIRLIBFT) re
	make -C $(DIRPRINTF) re

.PHONY: all clean fclean re
