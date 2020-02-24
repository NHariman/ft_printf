/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_num.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:14 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/24 17:31:32 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_print_signed(int n, int *count)
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
		ft_print_signed(n / 10, count);
		ft_print_signed(n % 10, count);
	}
}

void		ft_print_unsigned(unsigned int n, int *count)
{
	if (n <= 9)
	{
		ft_putchar_fd(n + '0', 0);
		*count = *count + 1;
	}
	else if (n > 9)
	{
		ft_print_unsigned(n / 10, count);
		ft_print_unsigned(n % 10, count);
	}
}

void			ft_print_hex_low(unsigned int nb, int *count)
{
	if (nb >= 10 && nb < 16)
	{
		ft_putchar_fd(nb + 87, 0);
		*count = *count + 1;
	}
	else if (nb >= 16)
	{
		ft_print_hex_low(nb / 16, count);
		ft_print_hex_low(nb % 16, count);
	}
	else
	{
		ft_putchar_fd(nb + '0', 0);
		*count = *count + 1;
	}
}

void			ft_print_hex_up(unsigned int nb, int *count)
{
	if (nb >= 10 && nb < 16)
	{
		ft_putchar_fd(nb + 55, 0);
		*count = *count + 1;
	}
	else if (nb >= 16)
	{
		ft_print_hex_up(nb / 16, count);
		ft_print_hex_up(nb % 16, count);
	}
	else
	{
		ft_putchar_fd(nb + '0', 0);
		*count = *count + 1;
	}
}
