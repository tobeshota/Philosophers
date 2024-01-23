/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:41:35 by toshota           #+#    #+#             */
/*   Updated: 2024/01/23 19:57:30 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_func.h"

static bool	is_odd(int num)
{
	return (num % 2 == 1);
}

void	*do_philo(t_philo *philo)
{
	if (sleep_until_all_threads_are_created(philo) == false)
		return (NULL);
	if (!is_odd(philo->philo_nb))
		ft_usleep((philo->common->time_to_eat / 2) * 1000);
	while (true)
	{
		if (do_take_a_fork(philo) == false)
			break ;
		if (do_eat(philo) == false)
			return (NULL);
		if (is_died(philo) || is_end(philo))
			break ;
		do_sleep(philo);
		if (is_died(philo) || is_end(philo))
			break ;
		do_think(philo);
		if (is_died(philo) || is_end(philo))
			break ;
	}
	return (NULL);
}
