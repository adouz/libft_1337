# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adouz <adouz@1337.MA>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 12:50:40 by adouz             #+#    #+#              #
#    Updated: 2018/10/21 17:45:32 by adouz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= *.c
FLAG= -Wall -Wextra -Werror
NAME= libft.a

$(NAME):
	gcc -c $(FLAG) $(SRC) -I libft.h
	ar rc $(NAME) *.o
	ranlib $(NAME)
all: $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
