/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_func.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:32:24 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 19:10:32 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_FUNC_H
# define PHILO_FUNC_H

# include "utils.h"

/* is_arg_valid */
bool	is_arg_valid(int argc, char **argv);

/* get_philo */
t_philo	*get_philo(int argc, char **argv);
t_philo	*init_philo(int argc, char **argv);
bool	init_all_mutex(t_philo *philo);

/* do_philo */
void	*do_philo(t_philo *philo);
void	do_think(t_philo *philo);
bool	do_eat(t_philo *philo);
void	do_sleep(t_philo *philo);
bool	do_take_a_fork(t_philo *philo);
// utils
void	put_forks(t_philo *philo);
bool	sleep_until_all_threads_are_created(t_philo *philo);

/* end_philo */
void	end_philo(t_philo *philo);
bool	is_end(t_philo *philo);
bool	is_died(t_philo *philo);
bool	is_everyone_full(t_philo *philo);
bool	destroy_all_mutex(t_philo *philo);
void	free_philo(t_philo *philo);

#endif
