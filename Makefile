NAME = libftprintf.a

LIBFT	= libft.a
LIBFTDIR	= ./libft

SRCS = ft_printf_tools.c ft_printf.c
OBJS = $(SRCS:.c=.o)

INCS = -I printf.h

AR = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME) 

makelib:
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFT) .
	mv $(LIBFT) $(NAME)

$(NAME): makelib $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	cd $(LIBFTDIR) && make clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBFTDIR) && make fclean

re: fclean all

.PHONY:		all clean fclean re
