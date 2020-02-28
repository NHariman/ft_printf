/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 16:47:58 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/28 19:55:29 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct	s_flag
{
	size_t		dash;
	size_t		zero;
	size_t		pre;
	size_t		pad;
}				t_flag;
void			ft_format(char c, va_list argp, int *count, t_flag *flags);
void			ft_flags(const char *format, int *i, t_flag *flags);
void			ft_width(const char *format, int *i, t_flag *flags);
void			ft_precision(const char *format, int *i, t_flag *flag);
void			ft_diuxx(const char c, int arg, int *count, t_flag *flags);
void			ft_print_hex(const char c, unsigned int nb, int *count);
void			ft_print_unsigned(unsigned int n, int *count);
void			ft_print_signed(int n, int *count);
void			ft_printstr(char *str, int *count, t_flag *flags);
void			ft_printchar(char c, int *count, t_flag *flags);
void			ft_printptr(unsigned long n,
					size_t start,
					int *count);
#endif
