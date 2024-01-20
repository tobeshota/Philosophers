/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:18:23 by toshota           #+#    #+#             */
/*   Updated: 2024/01/20 15:10:29 by toshota          ###   ########.fr       */
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

int	ft_usleep(int microseconds)
{
	int	current_time;
	int	end_time;

	end_time = -1 + microseconds / 1000;
	while (end_time == -1 + microseconds / 1000)
		end_time = get_current_time() + microseconds / 1000;
	while (end_time > get_current_time())
	{
		current_time = get_current_time();
		if (current_time == -1)
			current_time = end_time;
		usleep((end_time - current_time) / 4 * 1000);
	}
	return (0);
}
