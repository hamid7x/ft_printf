NAME = libftprintf.a
HEADER = ft_printf.h 
CC = cc
CFLAGS = -Werror -Wextra -Wall

SRC = ft_printf.c ft_print_char.c ft_print_number.c ft_print_hexa.c ft_print_pointer.c \
	   ft_print_str.c ft_print_unsigned.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

*.o: *.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${OBJ}
fclean: clean
	rm -f $(NAME)
re: fclean all
