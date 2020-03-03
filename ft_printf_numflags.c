/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_numflags.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 17:34:50 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/03 13:39:18 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t		ft_numlen(int n)
{
	size_t		len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void				ft_signed(int n, int *count, t_flag *flags)
{
	if (!flags->dash)
		ft_pad(flags->pad - ft_numlen(n), count);
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
		*count = *count + 1;
	}
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad - ft_numlen(n), count);
	ft_print_signed(n, count);
	if (!flags->dash)
		ft_pad(flags->pad - ft_numlen(n), count);
}

void				ft_unsigned(unsigned int n, int *count, t_flag *flags)
{
	if (!flags->dash)
		ft_pad(flags->pad - ft_numlen(n), count);
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad, count);
	ft_print_unsigned((unsigned int)n, count);
	if (flags->dash)
		ft_pad(flags->pad - ft_numlen(n), count);
}
