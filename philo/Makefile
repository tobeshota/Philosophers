# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 13:39:44 by toshota           #+#    #+#              #
#    Updated: 2024/01/20 13:40:16 by toshota          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	philo
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g -fsanitize=thread
RM			=	rm -rf
INC			=	-I inc/ -I srcs/
SRCS_DIR	=	srcs/
OBJS_DIR	=	objs/

SRCS		=	$(wildcard srcs/*.c)
SRCS		+=	$(wildcard srcs/*/*.c)
SRCS		+=	$(wildcard srcs/*/*/*.c)

OBJS		=	$(patsubst $(SRCS_DIR)%.c, $(OBJS_DIR)%.o, $(SRCS))

all:	$(NAME)
$(NAME):	$(OBJS) Makefile
	@ $(CC) $(CFLAGS) $(INC) $(OBJS) -o $@
	@ echo "compile to create an executable file: ./$@"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
	@ mkdir -p $(@D)
	@ $(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@ $(RM) $(OBJS_DIR)
	@ echo $@

fclean:
	@ $(RM) $(OBJS_DIR)
	@ $(RM) $(NAME)
	@ echo $@

re:	fclean all

.PHONY:		all clean fclean re
