/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:22:05 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/28 20:11:18 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_format(char c, va_list argp, int *count, t_flag *flags)
{
	if (c == '%')
		ft_printchar(c, count, flags);
	if (c == 'c')
		ft_printchar(va_arg(argp, int), count, flags);
	if (c == 'p')
		ft_printptr((unsigned long)va_arg(argp, void *), 0, count);
	if (c == 's')
		ft_printstr(va_arg(argp, char *), count, flags);
	if (ft_strchr("diuxX", c))
		ft_diuxx(c, va_arg(argp, int), count, flags);
}

void			ft_diuxx(const char c, int arg, int *count, t_flag *flags)
{
	if (ft_strchr("di", c))
		ft_print_signed(arg, count);
	if (c == 'u')
		ft_unsigned((unsigned int)arg, count, flags);
	if (ft_strchr("xX", c))
		ft_print_hex(c, (unsigned int)arg, count);
}

int				ft_printf(const char *format, ...)
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
		if (format[i] == '%')
		{
			i++;
			ft_flags(format, &i, &flags);
			ft_width(format, &i, &flags);
			ft_precision(format, &i, &flags);
			ft_format(format[i], argp, &count, &flags);
		}
		else
			ft_printchar(format[i], &count, &flags);
		i++;
	}
	va_end(argp);
	return (count);
}

/*
		// FUNCTION 1:
		// read until % is found, if no % is found, print out entire string
		// (include a check for that??)
		// //////////////////////////
		// FUNCTION 2:
		// document percision, flags, conversion
		// FUNCTION 3 (as many functions as necessary):
		// send percision and flags to appropriate conversion function and do that
		// FUNCTION 4:
		// append argument to existing string (if exists) or create a new string
		// /////////////////////////
		// FUNCTION 1:
		// continue reading string until new argument is present.
		// if no new argument, append remaining bits to string
		// (starting from the position of the last conversion + 1)
		// FUNCTION 5:
		// print out new string onto the stdout
		// RETURN (strlen(string that was created));

		// MAKE TWO PRINTFs
		// 1. handles the args
		// 2. actually does printf stuff
 */
