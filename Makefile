NAME		= libftprintf.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

SRC			= ft_printf.c \
				ft_write.c \
				ft_itoa_c.c \
				ft_itoa_hex.c \
				ft_toupperstr.c

OBJ_SRC		= $(SRC:.c=.o)

all: $(NAME)

$(NAME)		: $(OBJ_SRC) 
	ar rcs $(NAME) $(OBJ_SRC)

clean		:
	rm -f $(OBJ_SRC)

fclean		: clean
	rm -f $(NAME)

re			: fclean all

.PHONY		:
	all clean fclean re
