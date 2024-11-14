# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwattier <mwattier@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/21 13:08:33 by mwattier          #+#    #+#              #
#    Updated: 2024/09/22 19:25:02 by mwattier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c ft_usefull.c number_logic.c f_split_nbr.c suffix_logic.c ft_check.c
OBJS = $(SRCS:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
PROG = rush-02
RM = rm -f

all : $(PROG)

allup : all clean

$(PROG) : $(OBJS)
	$(CC) $(FLAGS) -o $(PROG) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(PROG)

re : fclean all
