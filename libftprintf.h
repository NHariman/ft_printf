/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 16:47:58 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/27 19:42:13 by nhariman      ########   odam.nl         */
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
}				t_flag;
void			ft_format(char c, va_list argp, int *count);
t_flag			ft_flags(const char *format, int *i, t_flag flags);
int				ft_printf(const char *format, ...);
void			ft_diuxx(const char c, int arg, int *count);
void			ft_print_hex(const char c, unsigned int nb, int *count);
void			ft_print_unsigned(unsigned int n, int *count);
void			ft_print_signed(int n, int *count);
void			ft_printstr(char *str, int *count);
void			ft_printchar(char c, int *count);
void			ft_printptr(unsigned long n, size_t start, int *count);
#endif
