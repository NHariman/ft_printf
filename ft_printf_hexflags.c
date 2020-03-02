/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_hexflags.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/02 18:38:45 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/02 19:31:59 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t		ft_hexlen(int n)
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

static size_t		ft_ptrlen(unsigned long n)
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

void				ft_hex(char c, unsigned int n, int *count, t_flag *flags)
{
	if (!flags->dash)
		ft_pad(flags->pad - ft_hexlen(n), count);
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad, count);
	ft_print_hex(c, (unsigned int)n, count);
	if (flags->dash)
		ft_pad(flags->pad - ft_hexlen(n), count);
}

void				ft_ptr(unsigned long ptr, int *count, t_flag *flags)
{
	ft_putstr_fd("0x", 0);
	*count = *count + ft_strlen("0x");
	if (!flags->dash)
		ft_pad(flags->pad - ft_ptrlen(ptr), count);
	if (flags->zero && !flags->dash)
		ft_padzero(flags->pad, count);
	ft_print_ptr(ptr, count);
	if (flags->dash)
		ft_pad(flags->pad - ft_ptrlen(ptr), count);
}
