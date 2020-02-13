/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 16:47:58 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/13 18:51:03 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"

int				ft_printf(const char *format, ...);
typedef struct	s_conflags
{
	size_t		negative;
	size_t		zero;
	size_t		period;
	size_t		astrix;
	size_t		c_con;
	size_t		s_con;
	size_t		p_con;
	size_t		diuxx_con;
	size_t		percent;
}				t_conflags;

#endif
