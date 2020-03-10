/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   no_flags_basic_tests.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:29:56 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/10 16:04:35 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int		main(void)
{
	int		ptr;

	ptr = 0;
	//no flags, basic tests
	printf("no flags\n");
		// %c
	printf(" c: %i\n", ft_printf("[%c]\n", 'c'));
	printf(" c: %i\n\n", printf("[%c]\n", 'c'));
		// %s	
	printf(" s: %i\n", ft_printf("[%s]\n", "hello world!"));
	printf(" s: %i\n\n", printf("[%s]\n", "hello world!"));
		// NULL %str
	printf("NULL string:\n");
	printf(" s: %i\n", ft_printf("[%s]\n", NULL));
	printf(" s: %i\n\n", printf("[%s]\n", NULL));
		// %i positive number
	printf("i is positive\n");
	printf(" i: %i\n", ft_printf("[%i]\n", 5));
	printf(" i: %i\n\n", printf("[%i]\n", 5));
		// %i negative number
	printf("i is negative\n");
	printf(" i: %i\n", ft_printf("[%i]\n", -5));
	printf(" i: %i\n\n", printf("[%i]\n", -5));
		// %i is max int
	printf("i is max int\n");
	printf(" i: %i\n", ft_printf("[%i]\n", INT_MAX));
	printf(" i: %i\n\n", printf("[%i]\n", INT_MAX));
		// %i is min int
	printf("i is min int\n");
	printf(" i: %i\n", ft_printf("[%i]\n", INT_MIN));
	printf(" i: %i\n\n", printf("[%i]\n", INT_MIN));
		// %d positive number
	printf("d is positive\n");
	printf(" d: %i\n", ft_printf("[%d]\n", 5));
	printf(" d: %i\n\n", printf("[%d]\n", 5));
		// %d negative number
	printf("d is negative\n");
	printf(" d: %i\n", ft_printf("[%d]\n", -5));
	printf(" d: %i\n\n", printf("[%d]\n", -5));
		// %d is max int
	printf("d is max int\n");
	printf(" d: %i\n", ft_printf("[%d]\n", INT_MAX));
	printf(" d: %i\n\n", printf("[%d]\n", INT_MAX));
		// %i is min int
	printf("d is min int\n");
	printf(" d: %i\n", ft_printf("[%d]\n", INT_MIN));
	printf(" d: %i\n\n", printf("[%d]\n", INT_MIN));
		// %u
	printf(" u: %i\n", ft_printf("[%u]\n", 5));
	printf(" u: %i\n\n", printf("[%u]\n", 5));
		// %x
	printf(" x: %i\n", ft_printf("[%x]\n", 5));
	printf(" x: %i\n\n", printf("[%x]\n", 5));
		// %X
	printf(" X: %i\n", ft_printf("[%X]\n", 5));
	printf(" X: %i\n\n", printf("[%X]\n", 5));
		// %p
	printf(" p: %i\n", ft_printf("[%p]\n", &ptr));
	printf(" p: %i\n\n", printf("[%p]\n", &ptr));
	return (0);
}
