/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:18:23 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 22:29:24 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	get_current_time(void)
{
	struct timeval	tv;

	if (gettimeofday(&tv, NULL) == -1)
	{
		ft_putstr_fd("failed to gettimeofday\n", STDERR_FILENO);
		return (-1);
	}
	return (tv.tv_sec * 1000 + tv.tv_usec / 1000);
}

int	ft_usleep(unsigned int microseconds)
{
	unsigned int	start_time;
	unsigned int	current_time;

	start_time = get_current_time();
	if (start_time == -1)
		return (-1);
	while (true)
	{
		current_time = get_current_time();
		usleep((current_time - start_time) / 8000);
		if (current_time == -1)
			return (-1);
		if (current_time - start_time > microseconds / 1000)
			return (0);
	}
}
