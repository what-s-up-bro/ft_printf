NAME = libftprintf.a
CC = CC
CFL = -Wall -Wextra -Werror
SRC = 
OBJ = 


all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean : rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean
	ar rcs $(NAME) $(OBJ)

.SECONDARY : 