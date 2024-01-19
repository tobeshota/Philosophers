/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:34:35 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 22:41:44 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "define.h"
# include "ft_func.h"

void	*check_malloc(void *return_value);
bool	put_msg(t_philo *philo, char *msg);
int		get_current_time(void);
int		ft_usleep(int microseconds);

#endif
