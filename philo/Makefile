# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 13:39:44 by toshota           #+#    #+#              #
#    Updated: 2024/01/19 22:40:56 by toshota          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	philo
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g -fsanitize=thread
# CFLAGS		=	-g -fsanitize=thread
RM			=	rm -rf
INC			=	-I inc/ -I srcs/
SRCS_DIR	=	srcs/
OBJS_DIR	=	objs/

# echo srcs/**/*.c
# SRCS		=	srcs/main.c srcs/is_arg_valid/is_arg_valid.c srcs/utils/check.c srcs/utils/ft_func/ft_atoi.c srcs/utils/ft_func/ft_isdigit.c srcs/utils/ft_func/ft_putstr_fd.c srcs/utils/ft_func/ft_strcpy.c srcs/utils/ft_func/ft_strcmp.c srcs/utils/ft_func/ft_strlen.c srcs/utils/time.c srcs/utils/put_msg.c srcs/get_philo/get_philo.c srcs/get_philo/init_philo.c srcs/do_philo/do_philo.c srcs/do_philo/do_something.c srcs/end_philo/end_philo.c srcs/end_philo/is_end.c

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
