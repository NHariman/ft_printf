/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:22:05 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/03 15:21:28 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "ft_printf.h"

static void			ft_format(char c, va_list argp, int *count, t_flag *flags)
{
	if (c == '%')
		ft_print_char(c, count, flags);
	if (c == 'c')
		ft_print_char(va_arg(argp, int), count, flags);
	if (c == 'p')
		ft_hex(c, (unsigned long)va_arg(argp, void *), count, flags);
	if (c == 's')
		ft_print_str(va_arg(argp, char *), count, flags);
	if (ft_strchr("di", c))
		ft_signed((long)va_arg(argp, int), count, flags);
	if (c == 'u')
		ft_unsigned((unsigned int)va_arg(argp, int), count, flags);
	if (ft_strchr("xX", c))
		ft_hex(c, (unsigned int)va_arg(argp, int), count, flags);
}

static void			ft_reset_flags(t_flag *flags)
{
	flags->dash = 0;
	flags->zero = 0;
	flags->pre = -1;
	flags->pad = -1;
}

int					ft_printf(const char *format, ...)
{
	va_list		argp;
	int			i;
	int			count;
	t_flag		flags;

	va_start(argp, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		ft_reset_flags(&flags);
		if (format[i] == '%')
		{
			i++;
			ft_flags(format, &i, &flags);
			ft_width(format, &i, argp, &flags);
			ft_precision(format, &i, argp, &flags);
			ft_format(format[i], argp, &count, &flags);
		}
		else
			ft_print_char(format[i], &count, &flags);
		i++;
	}
	va_end(argp);
	return (count);
}
