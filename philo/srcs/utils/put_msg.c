/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:32:40 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 21:36:58 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "philo_func.h"

bool	put_msg(t_philo *philo, char *msg)
{
	int	time;

	pthread_mutex_lock(&philo->common->print_mutex);
	if (is_end(philo) == true)
		return (pthread_mutex_unlock(&philo->common->print_mutex), true);
	time = get_current_time();
	if (time == -1)
		return (pthread_mutex_unlock(&philo->common->print_mutex), false);
	pthread_mutex_lock(&philo->common->time_to_start_do_philo_mutex);
	time -= philo->common->time_to_start_do_philo;
	pthread_mutex_unlock(&philo->common->time_to_start_do_philo_mutex);
	printf("%d %d %s", time, philo->philo_nb, msg);
	if (!ft_strcmp(msg, DIED))
	{
		pthread_mutex_lock(&philo->common->death_flag_mutex);
		philo->common->death_flag = true;
		pthread_mutex_unlock(&philo->common->death_flag_mutex);
	}
	pthread_mutex_unlock(&philo->common->print_mutex);
	return (true);
}
