/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_arg_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:04:24 by toshota           #+#    #+#             */
/*   Updated: 2024/01/20 14:15:25 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_func.h"

static int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

static bool	is_str_digit(char *str)
{
	int	i;

	i = 0;
	if (is_sign(str[i]))
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == false)
			return (false);
		i++;
	}
	return (true);
}

static void	put_argc_error(void)
{
	ft_putstr_fd("argc is 5 or 6 as follows:\n" \
		BOLD"./philo "GREEN"number_of_philosophers " \
		RED"time_to_die " \
		MAGENTA"time_to_eat " \
		CYAN"time_to_sleep " \
		BLUE"number_of_times_each_philosopher_must_eat\n" \
		DEFAULT, STDERR_FILENO);
}

static void	put_argv_error(void)
{
	ft_putstr_fd("argv is as follows:\n" \
		BOLD"./philo "GREEN"number_of_philosophers " \
		RED"time_to_die " \
		MAGENTA"time_to_eat " \
		CYAN"time_to_sleep " \
		BLUE"number_of_times_each_philosopher_must_eat\n" \
		DEFAULT"(each of argument is more than 0)\n" \
		,STDERR_FILENO);
}

bool	is_arg_valid(int argc, char **argv)
{
	int	i;

	if (argc < 5 || argc > 6)
		return (put_argc_error(), false);
	i = 1;
	while (argv[i])
	{
		if (is_str_digit(argv[i]) == false || ft_atoi(argv[i]) <= 0)
			return (put_argv_error(), false);
		i++;
	}
	return (true);
}
