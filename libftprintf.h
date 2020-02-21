/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 16:47:58 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/19 17:17:25 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"

typedef struct	s_flag
{
	size_t		negative;
	size_t		zero;
	size_t		period;
	size_t		astrix;
	size_t		pers_one;
	size_t		pers_two;
}				t_flag;
int				fill_flags(const char c, t_flag flags);
int				ft_printf(const char *format, ...);

#endif
