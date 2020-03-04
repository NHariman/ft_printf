/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_hexflags.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/02 18:38:45 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/04 21:40:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t		ft_hexlen(long n)
{
	size_t		len;

	len = 1;
	while (n >= 16)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void				ft_hex(char c, unsigned long n, int *count, t_flag *flags)
{
	if (!flags->dash)
		ft_pad(flags->pad - ft_hexlen(n), count);
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad - ft_hexlen(n), count);
	if (flags->pre)
		ft_padzero(flags->pre - ft_hexlen(n), count);
	ft_print_hex(c, (unsigned long)n, count);
	if (flags->dash)
		ft_pad(flags->pad - ft_hexlen(n), count);
}

void				ft_ptr(unsigned long n, int *count, t_flag *flags)
{
	ft_putstr_fd("0x", 1);
	*count = *count + ft_strlen("0x");
	if (!flags->dash)
		ft_pad(flags->pad - ft_hexlen(n) - 2, count);
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad - ft_hexlen(n) - 2, count);
	if (flags->pre)
		ft_padzero(flags->pre - ft_hexlen(n) - 2, count);
	ft_print_hex('p', (unsigned long)n, count);
	if (flags->dash)
		ft_pad(flags->pad - ft_hexlen(n) - 2, count);
}