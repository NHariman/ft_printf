/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_numflags.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 17:34:50 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/11 17:15:32 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static long			ft_numlen(long n)
{
	long	len;

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

static void			ft_padlen(long n, long *padlen, t_flag *flags)
{
	if (flags->dot && flags->pre < 0)
		flags->pre = -1;
	if (flags->dot && flags->pre == 0 && n == 0)
		*padlen = flags->pad;
	else if (flags->dot && n < 0)
	{
		if (flags->pre < ft_numlen(-n))
			*padlen = flags->pad - ft_numlen(n);
		else
			*padlen = flags->pad - ft_numlen(n) - (flags->pre - ft_numlen(-n));
	}
	else if (flags->dot && n >= 0)
	{
		if (flags->pre < ft_numlen(n))
			*padlen = flags->pad - ft_numlen(n);
		else
			*padlen = flags->pad - ft_numlen(n) - (flags->pre - ft_numlen(n));
	}
	else
		*padlen = flags->pad - ft_numlen(n);
}

void				ft_signed(long n, int *count, t_flag *flags)
{
	t_dashpad dashpad;

	dashpad.onbr = n;
	dashpad.padlen = 0;
	ft_padlen(n, &dashpad.padlen, flags);
	if ((!flags->dash && !flags->zero) ||
			(!flags->dash && flags->zero && (flags->pre > 0 ||
								(flags->pre == 0 && n == 0))))
		ft_pad(dashpad.padlen, count);
	if (n < 0)
	{
		pft_putchar_fd('-', 1, count);
		n = -n;
		if (*count >= 0)
			*count = *count + 1;
	}
	if (flags->zero && !flags->dash && flags->pre == -1)
		ft_padzero(dashpad.padlen, count);
	if (flags->dot)
		ft_padzero(flags->pre - ft_numlen(n), count);
	if (flags->pre != 0 || (flags->pre == 0 && n != 0))
		ft_print_decimal(n, count);
	if (*count < 0)
		return ;
	if (flags->dash)
		ft_pad(dashpad.padlen, count);
}

void				ft_unsigned(unsigned long n, int *count, t_flag *flags)
{
	long	onbr;
	long	padlen;

	onbr = n;
	padlen = 0;
	if (*count < 0)
		return ;
	ft_padlen(n, &padlen, flags);
	if ((!flags->dash && !flags->zero) ||
			(!flags->dash && flags->zero && (flags->pre > 0 ||
								(flags->pre == 0 && n == 0))))
		ft_pad(padlen, count);
	if (flags->zero && !flags->dash && flags->pre == -1)
		ft_padzero(padlen, count);
	if (flags->dot)
		ft_padzero(flags->pre - ft_numlen(n), count);
	if (flags->pre != 0 || (flags->pre == 0 && n != 0))
		ft_print_decimal((unsigned long)n, count);
	if (*count < 0)
		return ;
	if (flags->dash)
		ft_pad(padlen, count);
}
