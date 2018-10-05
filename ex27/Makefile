CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= ft_display_file
SRC		= ft_display_file.c

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(SRC) -c -o ft_display_file.o
	$(CC) $(CFLAGS) ft_display_file.o -o $(NAME)

clean : 
	/bin/rm -f ft_display_file.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
