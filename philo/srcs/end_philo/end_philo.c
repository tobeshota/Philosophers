/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_philo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:38:28 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 22:30:08 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_func.h"

static bool	all_pthread_join(t_philo *philo)
{
	int	i;

	i = 0;
	while (i < philo->common->number_of_philosophers)
	{
		if (pthread_join(philo[i].thread_id, NULL) != 0)
			return (ft_putstr_fd("failed to pthread_join\n", STDERR_FILENO),
				false);
		i++;
	}
	return (true);
}

void	free_philo(t_philo *philo)
{
	free(philo->common->fork_mutex);
	free(philo->common->fork);
	free(philo->common);
	free(philo);
}

void	monitor_philo(t_philo *philo)
{
	int	i;

	if (sleep_until_all_threads_are_created(philo) == false)
		return ;
	while (true)
	{
		i = 0;
		while (i < philo->common->number_of_philosophers)
		{
			if (is_end(&philo[i]) == true)
				return ;
			i++;
		}
	}
}

void	end_philo(t_philo *philo)
{
	monitor_philo(philo);
	all_pthread_join(philo);
	destroy_all_mutex(philo);
	free_philo(philo);
}
