/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:04 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/28 18:15:28 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_printstr(char *str, int *count, t_flag flags)
{
	size_t		strlen;

	strlen = ft_strlen(str);
	if (!flags.dash)
		ft_pad(flags.pad - ft_strlen(str), count);
	if (flags.pre)
		strlen = flags.pre;
	write(0, str, strlen);
	*count = *count + strlen;
}

void		ft_printchar(char c, int *count, t_flag flags)
{
	if (!flags.dash)
		ft_pad(flags.pad - 1, count);
	ft_putchar_fd(c, 0);
	*count = *count + 1;
	if (flags.dash)
		ft_pad(flags.pad - 1, count);
}
