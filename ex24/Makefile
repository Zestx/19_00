CC = gcc
CFLAGS = -Wall -Wextra
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEAD = ./includes/*.h
NAME = libft.a

all : $(NAME)

$(NAME) :
	ar -rc libft.a *.o

$(NAME) :
	$(CC) $(CFLAGS) -c $(SRC) -I ./includes
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean :
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
