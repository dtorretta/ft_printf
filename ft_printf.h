/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorrett <dtorrett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:37:08 by dtorrett          #+#    #+#             */
/*   Updated: 2023/12/12 15:47:01 by dtorrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int fd, int *count);
void	ft_putstr(char *s, int fd, int *count, char conv);
void	ft_putnbr(unsigned int n, int fd, int *count);
void	ft_puthex_fd(unsigned long long n, int fd, int *count, char conv);

#endif