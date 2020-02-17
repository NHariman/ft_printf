/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/17 22:27:29 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/17 22:46:08 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		        ft_isconv(char c)
{
	return (c == 's' || c == 'c' || c == 'p' || c == 'd' ||
			c == 'i' || c == 'u' || c == 'x' || c == 'X' ||
			c == '%' ? 1 : 0);
}

int	            fill_flags(const char c, t_flag flags)
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

unsigned char   ft_c_con(int i)
{
    unsigned char   c;

    c = (unsigned char)i;
    return (c);
}

char            *ft_s_con(char *str)
{
    //
}
