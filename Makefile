NAME		= libftprintf.a

INC			= Libft/

LIB			= $(INC)libft.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

SRC			= ft_printf.c \
				ft_write.c \
				ft_itoa_c.c \
				ft_itoa_hex.c \
				ft_toupperstr.c

OBJ_SRC		= $(SRC:.c=.o)

all: $(NAME) $(LIB)

$(LIB)		:  ./Libft/*.c
	make -C $(INC)

$(NAME)		: $(LIB) $(OBJ_SRC) 
	ar rcs $(NAME) $(OBJ_SRC)

clean		:
	rm -f $(OBJ_SRC)
	make -C libft clean

fclean		: clean
	rm -f $(NAME)
	make -C libft fclean

re			: fclean all

.PHONY		:
	all clean fclean re