/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 16:47:58 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/05 22:18:11 by nhariman      ########   odam.nl         */
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
	size_t		dot;
	int			pad;
	int			pre;
}				t_flag;
typedef struct	s_dashpad
{
	long		onbr;
	long		padlen;
}				t_dashpad;

void				ft_vprintf(const char *format, va_list argp, int *count);
/*
** the first layer, checks for flags, width, precision (-0.)
** ends with a format check (ft_format) and sends them there
 */
void			ft_flags(const char *format, int *i, t_flag *flags);
void			ft_width(const char *format, int *i,
							va_list argp, t_flag *flags);
void			ft_precision(const char *format, int *i,
							va_list argp, t_flag *flag);
/*
** second layer, comes from ft_format, which checks for pdiuxX%
** the following functions are called upon depending on which
** conversion is used.
** these functions call the padding and precision functions if 
** needed and then call the function that is actually responsible
** for printing the values correctly
 */
void			ft_hex(char c, unsigned long n, int *count, t_flag *flags);
void			ft_ptr(unsigned long n, int *count, t_flag *flags);
void			ft_signed(long n, int *count, t_flag *flags);
void			ft_unsigned(unsigned long n, int *count, t_flag *flags);
/*
** these functions handle the padding AND 
** printing of strings or characters. Unlike number functions
** which need an extra function to do so as shown above.
 */
void			ft_print_char(char c, int *count, t_flag *flags);
void			ft_print_str(char *str, int *count, t_flag *flags);
/*
** these functions handle the printing of numeric values
 */
void			ft_print_hex(const char c, unsigned long nb, int *count);
void			ft_print_decimal(unsigned long n, int *count);
/*
** these functions handle the 0 padding or ' ' padding if needed
 */
void			ft_pad(int n, int *count);
void			ft_padzero(int n, int *count);
#endif
