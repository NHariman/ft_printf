/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_numflags.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 17:34:50 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/03 21:08:19 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static long		ft_numlen(long n)
{
	long		len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void				ft_signed(long n, int *count, t_flag *flags)
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
	if (flags->pre)
		ft_padzero(flags->pre - ft_numlen(n), count);
	ft_print_decimal(n, count);
	if (flags->dash)
		ft_pad(flags->pad - ft_numlen(n), count);
}

void				ft_unsigned(unsigned long n, int *count, t_flag *flags)
{
	if (!flags->dash)
		ft_pad(flags->pad - ft_numlen(n), count);
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad - ft_numlen(n), count);
	if (flags->pre)
		ft_padzero(flags->pre - ft_numlen(n), count);
	ft_print_decimal((unsigned long)n, count);
	if (flags->dash)
		ft_pad(flags->pad - ft_numlen(n), count);
}
