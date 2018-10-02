CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= ft_display_file
SRC		= ft_display_file.c

all : $(NAME)

$(NAME) : $(NAME).o
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)


%.o : %.c
	$(CC) $(CFLAGS) $(SRC) -c -o $(NAME).o

clean : 
	rm -f $(NAME).o

fclean : clean
	rm -f $(NAME)

re : fclean all
