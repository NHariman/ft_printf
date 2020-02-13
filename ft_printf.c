/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:22:05 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/13 19:37:29 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

t_conflags	is_conflags(const char *str)
{
	t_conflags	conflags;
	int			i;

	if (str[i] == '0')
		conflags.zero = 1;
	if (str[i] == '-')
		conflags.negative = 1;
	if (str[i] == '*')
		conflags.astrix = 1;
	if (str[i] == '.')
		conflags.period = 1;
		
	}
	return (conflags);
}

int			ft_printf(const char *format, ...)
{
	char		*line;
	int			i;
	t_conflags	conflags;

	i = 0;
	while (format[i] != '\0')
	{
		conflags = is_conflags(format[i] + 1);//check for flags and conversion
		i++;
	}
	line = (char *)format;
	ft_putstr_fd(line, 0);
	return (ft_strlen(line));
}
