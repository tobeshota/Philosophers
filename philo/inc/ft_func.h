/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:56:04 by toshota           #+#    #+#             */
/*   Updated: 2024/01/19 14:06:32 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNC_H
# define FT_FUNC_H

# include "define.h"

int		ft_isdigit(int c);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);

#endif
