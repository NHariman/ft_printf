/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 16:47:58 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/24 17:32:59 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>


typedef struct	s_flag
{
	size_t		negative;
	size_t		zero;
	size_t		period;
	size_t		astrix;
	size_t		pers_one;
	size_t		pers_two;
}				t_flag;
void			ft_format(char c, va_list argp, int *count);
int				fill_flags(const char c, t_flag flags);
int				ft_printf(const char *format, ...);
void			ft_diuxx(const char c, int arg, int *count);
void			ft_print_hex_low(unsigned int nb, int *count);
void			ft_print_hex_up(unsigned int nb, int *count);
void			ft_print_unsigned(unsigned int n, int *count);
void			ft_print_signed(int n, int *count);
void			ft_printstr(char *str, int *count);
void			ft_printchar(char c, int *count);
#endif
