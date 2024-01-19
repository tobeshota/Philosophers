/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:57:21 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 22:31:26 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_philo	*philo;

	if (is_arg_valid(argc, argv) == false)
		return (1);
	philo = get_philo(argc, argv);
	if (philo == NULL)
		return (1);
	end_philo(philo);
}
