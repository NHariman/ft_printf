/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 16:47:58 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/17 20:25:48 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"

int				ft_printf(const char *format, ...);
typedef struct	s_flag
{
	size_t		negative;
	size_t		zero;
	size_t		period;
	size_t		astrix;
}				t_flag;

#endif
