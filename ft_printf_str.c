/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:04 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/02 20:19:07 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_print_char(char c, int *count, t_flag *flags)
{
	if (!flags->dash && c != '%')
		ft_pad(flags->pad - 1, count);
	ft_putchar_fd(c, 0);
	*count = *count + 1;
	if (flags->dash && c != '%')
		ft_pad(flags->pad - 1, count);
}

void		ft_print_str(char *str, int *count, t_flag *flags)
{
	size_t		strlen;
	size_t		i;

	strlen = ft_strlen(str);
	i = 0;
	if (flags->pre && (size_t)flags->pre < strlen)
		strlen = flags->pre;
	if (!flags->dash)
		ft_pad(flags->pad - strlen, count);
	while (i < strlen)
	{
		write(0, &str[i], 1);
		i++;
	}
	*count = *count + strlen;
	if (flags->dash)
		ft_pad(flags->pad - strlen, count);
}
