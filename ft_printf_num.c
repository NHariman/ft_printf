/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_num.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:14 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/02 22:53:01 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_print_hex(const char c, unsigned int nb, int *count)
{
	if (nb >= 10 && nb < 16)
	{
		c == 'X' ? ft_putchar_fd(nb + 55, 1) : ft_putchar_fd(nb + 87, 1);
		*count = *count + 1;
	}
	else if (nb >= 16)
	{
		ft_print_hex(c, nb / 16, count);
		ft_print_hex(c, nb % 16, count);
	}
	else
	{
		ft_putchar_fd(nb + '0', 1);
		*count = *count + 1;
	}
}

void			ft_print_ptr(unsigned long n, int *count)
{
	if (n >= 10 && n < 16)
	{
		ft_putchar_fd(n + 87, 1);
		*count = *count + 1;
	}
	else if (n >= 16)
	{
		ft_print_ptr(n / 16, count);
		ft_print_ptr(n % 16, count);
	}
	else
	{
		ft_putchar_fd(n + '0', 0);
		*count = *count + 1;
	}
}

void			ft_print_signed(int n, int *count)
{
	if (n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		*count = *count + 1;
	}
	else if (n > 9)
	{
		ft_print_signed(n / 10, count);
		ft_print_signed(n % 10, count);
	}
}

void			ft_print_unsigned(unsigned int n, int *count)
{
	if (n <= 9)
	{
		ft_putchar_fd(n + '0', 1);
		*count = *count + 1;
	}
	else if (n > 9)
	{
		ft_print_unsigned(n / 10, count);
		ft_print_unsigned(n % 10, count);
	}
}
