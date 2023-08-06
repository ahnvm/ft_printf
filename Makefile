SRCS = ft_printf.c ft_printfutils.c ft_printhex.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = gcc

RM = rm -f

ARFLAGS = -rcs

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re