/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:22:05 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/21 17:33:30 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

		
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
void		ft_printf_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 0);
		*count = *count + ft_strlen("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', 0);
		n = -n;
		*count = *count + 1;
	}
	if (n <= 9)
	{
		ft_putchar_fd(n + '0', 0);
		*count = *count + 1;
	}
	else if (n > 9)
	{
		ft_printf_putnbr(n / 10, count);
		ft_printf_putnbr(n % 10, count);
	}
}

void		ft_diuxx(const char c, int arg, int *count)
{
	if (c == 'd' || c == 'i')
		ft_printf_putnbr(arg, count);
	if (c == 'u')
	{
		if (arg >= 0)
			ft_printf_putnbr(arg, count);
		else
			ft_printf_putnbr(~arg, count);	
	}
		// do something
		// if negative, flip bits
		// print that number lol
	if (c == 'x')
	{
		if (arg >= 0)
			ft_print_hex_low(arg, count);
		else
			ft_print_hex_low(~arg, count);
	} // do print_hex lol
	if (c == 'X')
	{
		if (arg >= 0)
			ft_print_hex_up(arg, count);
		else
			ft_print_hex_up(~arg, count);
	} // do print_hex but with uppercase lol
}

int			ft_printf(const char *format, ...)
{
	va_list		argp;
	int			i;
	int			count;
	int			*ptr;
	t_flag		flags;
	char		*str;
	int			arg;

	va_start(argp, format);
	i = 0;
	count = 0;
	*ptr = &count;
	str = NULL;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				ft_putchar_fd(format[i], 0);
				count++;
			}
			if (format[i] == 'c')
			{
				ft_putchar_fd(va_arg(argp, int), 0);
				count++;
			}
			if (format[i] == 's')
			{
				str = va_arg(argp, char *);
				ft_putstr_fd(str, 0);
				count = count + ft_strlen(str);
				free(str);
				str = NULL;
			}
			if (ft_strchr("diuxX", format[i]))
			{
				arg = va_arg(argp, int);
				ft_diuxx(format[i], arg, ptr);// function that takes format i and checks if its diuxX
				// and works accordingly. takes format and the counter
				// returns the counter
			}
			// stuff happens
		}
		else
		{
			ft_putchar_fd(format[i], 0);
			count++;
			// print to stdout?
		}
		i++;
	}
	return (count);
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
