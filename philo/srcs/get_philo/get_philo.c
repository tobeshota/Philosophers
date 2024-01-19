/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_philo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:34:40 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 22:29:48 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_func.h"

static bool	all_pthread_create(t_philo *philo)
{
	int	i;

	i = 0;
	while (i < philo->common->number_of_philosophers)
	{
		pthread_create(&philo[i].thread_id, NULL, (void *)do_philo, &philo[i]);
		i++;
	}
	return (true);
}

t_philo	*get_philo(int argc, char **argv)
{
	t_philo	*philo;

	philo = init_philo(argc, argv);
	if (philo == NULL)
		return (NULL);
	if (init_all_mutex(philo) == false)
		return (free(philo->common->fork), free(philo->common), free(philo),
			NULL);
	if (all_pthread_create(philo) == false)
		return (free_philo(philo), NULL);
	return (philo);
}
