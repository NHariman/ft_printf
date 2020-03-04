/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:04 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/04 18:59:39 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_print_char(char c, int *count, t_flag *flags)
{
	if (!flags->dash && !flags->zero)
		ft_pad(flags->pad - 1, count);
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad - 1, count);
	ft_putchar_fd(c, 1);
	*count = *count + 1;
	if (flags->dash)
		ft_pad(flags->pad - 1, count);
}

/*
** undefined behaviour if not a literal string is given, but (null) is printed because
** that's what the real printf does.
** https://www.khronos.org/registry/OpenCL/sdk/1.2/docs/man/xhtml/printfFunction.html
*/

void		ft_print_str(char *str, int *count, t_flag *flags)
{
	size_t		i;
	size_t		strlen;

	if (!str)
		str = "(null)";
	i = 0;
	strlen = ((size_t)flags->pre < ft_strlen(str)) ?
				flags->pre : ft_strlen(str);
	if (!flags->dash && !flags->zero && flags->pad > 0)
		ft_pad(flags->pad - strlen, count);
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad - strlen, count);
	while (i < strlen)
	{
		write(1, &str[i], 1);
		i++;
	}
	*count = *count + strlen;
	if (flags->dash || flags->pad < -1)
	{
		flags->pad = flags->pad < -1 ? -flags->pad : flags->pad;
		ft_pad(flags->pad - strlen, count);
	}
}
