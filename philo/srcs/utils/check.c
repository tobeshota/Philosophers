/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:07:47 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 22:33:42 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*check_malloc(void *return_value)
{
	if (return_value == NULL)
		ft_putstr_fd("failed to malloc\n", STDERR_FILENO);
	return (return_value);
}
