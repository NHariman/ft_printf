/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:22:05 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/24 17:31:50 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				fill_flags(const char c, t_flag flags)
{
	if (c == '0')
		flags.zero = 1;
	if (c == '-')
		flags.negative = 1;
	if (c == '*')
		flags.astrix = 1;
	if (c == '.')
		flags.period = 1;
	return (c == '.' || c == '0' || c == '-' || c == '*' ? 1 : 0);
}

void		ft_format(char c, va_list argp, int *count)
{
	if (c == '%')
		ft_printchar(c, count);
	if (c == 'c')
		ft_printchar(va_arg(argp, int), count);
	if (c == 's')
		ft_printstr(va_arg(argp, char *), count);
	if (ft_strchr("diuxX", c))
		ft_diuxx(c, va_arg(argp, int), count);
}

void		ft_diuxx(const char c, int arg, int *count)
{
	if (c == 'd' || c == 'i')
		ft_print_signed(arg, count);
	if (c == 'u')
		ft_print_unsigned((unsigned int)arg, count);
	if (c == 'x')
		ft_print_hex_low((unsigned int)arg, count);
	if (c == 'X')
		ft_print_hex_up((unsigned int)arg, count);
}

int			ft_printf(const char *format, ...)
{
	va_list		argp;
	int			i;
	int			count;
	int			*ptr;
//	t_flag		flags;
	va_start(argp, format);
	i = 0;
	count = 0;
	ptr = &count;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_format(format[i], argp, ptr);
		}
		else
			ft_printchar(format[i], ptr);
		i++;
	}
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

/*
if(format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				ft_putchar_fd(0,'%');
				counter++;
			}
			else if (format[i] == 'c')
			{
				print = va_arg(argp, int);
				putchar(print);
				counter++;
			}
			else if (ft_isdigit(format[i]) && format[i] != '0')
			{
				flags.pers_one = ft_atoi(format + i);//checks for decimal digit string before flag
			}
			while (fill_flags(format[i]))
			{
				fill_flags(format[i], flags);
				i++; // checks for flags
			}
			else if (ft_isdigit(format[i]))
			{
				flags.pers_two = ft_atoi(format + i);// checks for decimal digit string after flag
			}
		}
		else
		{
			ft_putchar_fd(0,format[i]);
			counter++;
		}
		i++; */
