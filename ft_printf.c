/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:22:05 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/17 23:15:00 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int			ft_printf(const char *format, ...)
{
	va_list		argp;
	int			i;
	char		print;

	va_start(argp, format);
	i = 0;
	while (format[i] != '\0')
	{
		if(format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				ft_putchar('%');
			else if (format[i] == 'c')
			{
				print = va_arg(argp, int);
				putchar(print);
			}
		}

	}


	
	return (ft_strlen(line));
}

/*
if (format[i] == '%')
		{
			while (ft_isdigit(format[i]))
			{
				min = (temp * 10) + format[i];
				temp = min;
				i++;
			}
			if (fill_flags(format[i], flags))
				fill_flags(format[i], flags);//check for flags
			temp = 0;
			while (ft_isdigit(format[i]))
			{
				min = (temp * 10) + format[i];
				temp = min;
				i++;
			}
			if (ft_isconv(format[i]))
			{

			}//stuff */
