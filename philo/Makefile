# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 13:39:44 by toshota           #+#    #+#              #
#    Updated: 2024/01/23 20:01:10 by toshota          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	philo
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
# CFLAGS		+=	-g -fsanitize=thread
RM			=	rm -rf
INC			=	-I inc/ -I srcs/
SRCS_DIR	=	srcs/
OBJS_DIR	=	objs/

SRCS		=	srcs/main.c srcs/do_philo/do_philo.c srcs/do_philo/do_something.c srcs/do_philo/sleep_until_all_threads_are_created.c srcs/do_philo/take_a_fork.c srcs/end_philo/destroy_all_mutex.c srcs/end_philo/end_philo.c srcs/end_philo/is_end.c srcs/get_philo/get_philo.c srcs/get_philo/init_all_mutex.c srcs/get_philo/init_philo.c srcs/is_arg_valid/is_arg_valid.c srcs/utils/check.c srcs/utils/put_msg.c srcs/utils/time.c srcs/utils/ft_func/ft_atoi.c srcs/utils/ft_func/ft_isdigit.c srcs/utils/ft_func/ft_putstr_fd.c srcs/utils/ft_func/ft_strcmp.c srcs/utils/ft_func/ft_strlen.c
# SRCS		=	$(wildcard srcs/*.c)
# SRCS		+=	$(wildcard srcs/*/*.c)
# SRCS		+=	$(wildcard srcs/*/*/*.c)

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
