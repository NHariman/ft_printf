/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:04 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/24 17:31:58 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_printstr(char *str, int *count)
{
	ft_putstr_fd(str, 0);
	*count = *count + ft_strlen(str);
}

void		ft_printchar(char c, int *count)
{
	ft_putchar_fd(c, 0);
	*count = *count + 1;
}
