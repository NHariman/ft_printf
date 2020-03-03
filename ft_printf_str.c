/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:04 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/03 20:08:52 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_print_char(char c, int *count, t_flag *flags)
{
	if (!flags->dash && c != '%')
		ft_pad(flags->pad - 1, count);
	ft_putchar_fd(c, 1);
	*count = *count + 1;
	if (flags->dash && c != '%')
		ft_pad(flags->pad - 1, count);
}

/*
** undefined behaviour if not a literal string is given, but (null) is printed because
** that's what the real printf does.
** https://www.khronos.org/registry/OpenCL/sdk/1.2/docs/man/xhtml/printfFunction.html
*/
void		ft_print_str(char *str, int *count, t_flag *flags)
{
	size_t		strlen;
	size_t		i;

	if (!str)
	{
		write(1, "(null)", 6);
		*count = *count + ft_strlen("(null)");
		return ;
	}
	strlen = ft_strlen(str);
	i = 0;
	if ((size_t)flags->pre < strlen)
		strlen = flags->pre;
	if (!flags->dash)
		ft_pad(flags->pad - strlen, count);
	while (i < strlen)
	{
		write(1, &str[i], 1);
		i++;
	}
	*count = *count + strlen;
	if (flags->dash)
		ft_pad(flags->pad - strlen, count);
}
