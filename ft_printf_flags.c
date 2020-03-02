/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_flags.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/25 18:22:16 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/02 22:53:59 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void				ft_flags(const char *format, int *i, t_flag *flags)
{
	flags->zero = 0;
	flags->dash = 0;
	while (ft_strchr("0-", format[*i]))
	{
		if (format[*i] == '0')
			flags->zero = 1;
		if (format[*i] == '-')
			flags->dash = 1;
		*i = *i + 1;
	}
}

void				ft_width(const char *format, int *i,
								va_list argp, t_flag *flags)
{
	flags->pad = -1;
	if (format[*i] == '*')
	{
		flags->pad = va_arg(argp, int);
		*i = *i + 1;
		return ;
	}
	else
	{
		flags->pad = 0;
		while (ft_isdigit(format[*i]) && format[*i] != '\0')
		{
			flags->pad = (flags->pad * 10) + (format[*i] - '0');
			*i = *i + 1;
		}
	}
}

void				ft_precision(const char *format, int *i,
									va_list argp, t_flag *flags)
{
	flags->pre = -1;
	if (format[*i] != '.')
		return ;
	*i = *i + 1;
	if (format[*i] == '*')
	{
		flags->pre = va_arg(argp, int);
		*i = *i + 1;
		return ;
	}
	else
	{
		flags->pre = 0;
		while (ft_isdigit(format[*i]) && format[*i] != '\0')
		{
			flags->pre = (flags->pre * 10) + (format[*i] - '0');
			*i = *i + 1;
		}
	}
}

void				ft_pad(int n, int *count)
{
	int		i;

	i = 0;
	if (n <= 0)
		return ;
	while (i < n)
	{
		write(1, " ", 1);
		i++;
	}
	*count = *count + n;
}

void				ft_padzero(int n, int *count)
{
	int		i;

	i = 0;
	if (n <= 0)
		return ;
	while (i < n)
	{
		write(1, "0", 1);
		i++;
	}
	*count = *count + n;
}
