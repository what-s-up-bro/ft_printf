NAME =	libftprintf.a
CC =	cc
CFL =	-Wall -Wextra -Werror
SRC =	ft_my_printf.c ft_print_c.c ft_print_d_i.c ft_itoa.c\
			ft_print_p.c ft_print_s.c ft_print_u.c ft_print_x.c \
			ft_print_X.c
OBJ =	$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o:%.c
		${CC} ${CFL} -c $< -o $@

clean :
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
