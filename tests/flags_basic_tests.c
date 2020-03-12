/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flags_basic_tests.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 15:45:10 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/12 22:47:40 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int		main(void)
{
	int		*ptr;

	ptr = 0;
			//width, basic tests
	printf("width specified\n");
		// %c
	printf(" 8c: %i\n", ft_printf("[%8c]\n", 'c'));
	printf(" 8c: %i\n\n",  printf("[%8c]\n", 'c'));
	printf(" -8c: %i\n", ft_printf("[%-8c]\n", 'c'));
	printf(" -8c: %i\n\n",  printf("[%-8c]\n", 'c'));
	printf(" 08c: %i\n", ft_printf("[%08c]\n", 'c'));
	printf(" 08c: %i\n\n",  printf("[%08c]\n", 'c'));
	printf(" -08c: %i\n", ft_printf("[%-08c]\n", 'c'));
	printf(" -08c: %i\n\n",  printf("[%-08c]\n", 'c'));
		// %s	
	printf(" 8s: %i\n", ft_printf("[%8s]\n", "hello world!"));
	printf(" 8s: %i\n\n",  printf("[%8s]\n", "hello world!"));
	printf(" -8s: %i\n", ft_printf("[%-8s]\n", "hello world!"));
	printf(" -8s: %i\n\n",  printf("[%-8s]\n", "hello world!"));
	printf(" 08s: %i\n", ft_printf("[%08s]\n", "hello world!"));
	printf(" 08s: %i\n\n",  printf("[%08s]\n", "hello world!"));
	printf(" -08s: %i\n", ft_printf("[%-08s]\n", "hello world!"));
	printf(" -08s: %i\n\n",  printf("[%-08s]\n", "hello world!"));

		// NULL %str
	printf("NULL string:\n");
	printf(" 8s: %i\n", ft_printf("[%8s]\n", NULL));
	printf(" 8s: %i\n\n",  printf("[%8s]\n", NULL));
		// %i positive number
	printf("i is positive\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", 5));
	printf(" 8i: %i\n\n",  printf("[%8i]\n", 5));
	printf(" -8i: %i\n", ft_printf("[%-8i]\n", 5));
	printf(" -8i: %i\n\n",  printf("[%-8i]\n", 5));
	printf(" 08i: %i\n", ft_printf("[%08i]\n", 5));
	printf(" 08i: %i\n\n",  printf("[%08i]\n", 5));
	printf(" 0-8i: %i\n", ft_printf("[%0-8i]\n", 5));
	printf(" 0-8i: %i\n\n",  printf("[%0-8i]\n", 5));
		// %i negative number
	printf("i is negative\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", -5));
	printf(" 8i: %i\n\n",  printf("[%8i]\n", -5));
	printf(" -8i: %i\n", ft_printf("[%-8i]\n", -5));
	printf(" -8i: %i\n\n",  printf("[%-8i]\n", -5));
	printf(" 08i: %i\n", ft_printf("[%08i]\n", -5));
	printf(" 08i: %i\n\n",  printf("[%08i]\n", -5));
	printf(" 0-8i: %i\n", ft_printf("[%0-8i]\n", -5));
	printf(" 0-8i: %i\n\n",  printf("[%0-8i]\n", -5));
		// %i is max int
	printf("i is max int\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", INT_MAX));
	printf(" 8i: %i\n\n",  printf("[%8i]\n", INT_MAX));
	printf(" -8i: %i\n", ft_printf("[%-8i]\n", INT_MAX));
	printf(" -8i: %i\n\n",  printf("[%-8i]\n", INT_MAX));
	printf(" 08i: %i\n", ft_printf("[%08i]\n", INT_MAX));
	printf(" 08i: %i\n\n",  printf("[%08i]\n", INT_MAX));
	printf(" 0-8i: %i\n", ft_printf("[%0-8i]\n", INT_MAX));
	printf(" 0-8i: %i\n\n",  printf("[%0-8i]\n", INT_MAX));
		// %i is min int
	printf("i is min int\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", INT_MIN));
	printf(" 8i: %i\n\n",  printf("[%8i]\n", INT_MIN));
	printf(" -8i: %i\n", ft_printf("[%-8i]\n", INT_MIN));
	printf(" -8i: %i\n\n",  printf("[%-8i]\n", INT_MIN));
	printf(" 08i: %i\n", ft_printf("[%08i]\n", INT_MIN));
	printf(" 08i: %i\n\n",  printf("[%08i]\n", INT_MIN));
	printf(" 0-8i: %i\n", ft_printf("[%0-8i]\n", INT_MIN));
	printf(" 0-8i: %i\n\n",  printf("[%0-8i]\n", INT_MIN));
		// %d positive number
	printf("d is positive\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", 5));
	printf(" 8d: %i\n\n",  printf("[%8d]\n", 5));
	printf(" -8d: %i\n", ft_printf("[%-8d]\n", 5));
	printf(" -8d: %i\n\n",  printf("[%-8d]\n", 5));
	printf(" 08d: %i\n", ft_printf("[%08d]\n", 5));
	printf(" 08d: %i\n\n",  printf("[%08d]\n", 5));
	printf(" 0-8d: %i\n", ft_printf("[%0-8d]\n", 5));
	printf(" 0-8d: %i\n\n",  printf("[%0-8d]\n", 5));
		// %d negative number
	printf("d is negative\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", -5));
	printf(" 8d: %i\n\n",  printf("[%8d]\n", -5));
	printf(" -8d: %i\n", ft_printf("[%-8d]\n", -5));
	printf(" -8d: %i\n\n",  printf("[%-8d]\n", -5));
	printf(" 08d: %i\n", ft_printf("[%08d]\n", -5));
	printf(" 08d: %i\n\n",  printf("[%08d]\n", -5));
	printf(" 0-8d: %i\n", ft_printf("[%0-8d]\n", -5));
	printf(" 0-8d: %i\n\n",  printf("[%0-8d]\n", -5));
		// %d is max int
	printf("d is max int\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", INT_MAX));
	printf(" 8d: %i\n\n",  printf("[%8d]\n", INT_MAX));
	printf(" -8d: %i\n", ft_printf("[%-8d]\n", INT_MAX));
	printf(" -8d: %i\n\n",  printf("[%-8d]\n", INT_MAX));
	printf(" 08d: %i\n", ft_printf("[%08d]\n", INT_MAX));
	printf(" 08d: %i\n\n",  printf("[%08d]\n", INT_MAX));
	printf(" 0-8d: %i\n", ft_printf("[%0-8d]\n", INT_MAX));
	printf(" 0-8d: %i\n\n",  printf("[%0-8d]\n", INT_MAX));
		// %i is min int
	printf("d is min int\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", INT_MIN));
	printf(" 8d: %i\n\n",  printf("[%8d]\n", INT_MIN));
	printf(" -8d: %i\n", ft_printf("[%-8d]\n", INT_MIN));
	printf(" -8d: %i\n\n",  printf("[%-8d]\n", INT_MIN));
	printf(" 08d: %i\n", ft_printf("[%08d]\n", INT_MIN));
	printf(" 08d: %i\n\n",  printf("[%08d]\n", INT_MIN));
	printf(" 0-8d: %i\n", ft_printf("[%0-8d]\n", INT_MIN));
	printf(" 0-8d: %i\n\n",  printf("[%0-8d]\n", INT_MIN));
		// %u
	printf(" 8u: %i\n", ft_printf("[%8u]\n", 5));
	printf(" 8u: %i\n\n",  printf("[%8u]\n", 5));
	printf(" -8u: %i\n", ft_printf("[%-8u]\n", 5));
	printf(" -8u: %i\n\n",  printf("[%-8u]\n", 5));
	printf(" 08u: %i\n", ft_printf("[%08u]\n", 5));
	printf(" 08u: %i\n\n",  printf("[%08u]\n", 5));
	printf(" 0-8u: %i\n", ft_printf("[%0-8u]\n", 5));
	printf(" 0-8u: %i\n\n",  printf("[%0-8u]\n", 5));
		// %x
	printf(" 8x: %i\n", ft_printf("[%8x]\n", 5));
	printf(" 8x: %i\n\n",  printf("[%8x]\n", 5));
	printf(" 08x: %i\n", ft_printf("[%08x]\n", 5));
	printf(" 08x: %i\n\n",  printf("[%08x]\n", 5));
	printf(" -8x: %i\n", ft_printf("[%-8x]\n", 5));
	printf(" -8x: %i\n\n",  printf("[%-8x]\n", 5));
	printf(" 0-8x: %i\n", ft_printf("[%0-8x]\n", 5));
	printf(" 0-8x: %i\n\n",  printf("[%0-8x]\n", 5));
		// %X
	printf(" 8X: %i\n", ft_printf("[%8X]\n", 5));
	printf(" 8X: %i\n\n",  printf("[%8X]\n", 5));
	printf(" -8X: %i\n", ft_printf("[%-8X]\n", 5));
	printf(" -8X: %i\n\n",  printf("[%-8X]\n", 5));
	printf(" 08X: %i\n", ft_printf("[%08X]\n", 5));
	printf(" 08X: %i\n\n",  printf("[%08X]\n", 5));
	printf(" 0-8X: %i\n", ft_printf("[%0-8X]\n", 5));
	printf(" 0-8X: %i\n\n",  printf("[%0-8X]\n", 5));
		// %p
	printf(" 8p: %i\n", ft_printf("[%8p]\n", &ptr));
	printf(" 8p: %i\n\n",  printf("[%8p]\n", &ptr));
	printf(" -8p: %i\n", ft_printf("[%-8p]\n", &ptr));
	printf(" -8p: %i\n\n",  printf("[%-8p]\n", &ptr));
	printf(" 08p: %i\n", ft_printf("[%08p]\n", &ptr));
	printf(" 08p: %i\n\n",  printf("[%08p]\n", &ptr));
	printf(" 0-8p: %i\n", ft_printf("[%0-8p]\n", &ptr));
	printf(" 0-8p: %i\n\n",  printf("[%0-8p]\n", &ptr));

			//precision, basic tests
	printf("precision specified\n");
		// %c
	printf(" .8c: %i\n", ft_printf("[%.8c]\n", 'c'));
	printf(" .8c: %i\n\n",  printf("[%.8c]\n", 'c'));
	printf(" -.8c: %i\n", ft_printf("[%-.8c]\n", 'c'));
	printf(" -.8c: %i\n\n",  printf("[%-.8c]\n", 'c'));
	printf(" 0.8c: %i\n", ft_printf("[%0.8c]\n", 'c'));
	printf(" 0.8c: %i\n\n",  printf("[%0.8c]\n", 'c'));
	printf(" 0-.8c: %i\n", ft_printf("[%0-.8c]\n", 'c'));
	printf(" 0-.8c: %i\n\n",  printf("[%0-.8c]\n", 'c'));
		// %s	
	printf(" .8s: %i\n", ft_printf("[%.8s]\n", "hello world!"));
	printf(" .8s: %i\n\n",  printf("[%.8s]\n", "hello world!"));
	printf(" -.8s: %i\n", ft_printf("[%-.8s]\n", "hello world!"));
	printf(" -.8s: %i\n\n",  printf("[%-.8s]\n", "hello world!"));
	printf(" 0.8s: %i\n", ft_printf("[%0.8s]\n", "hello world!"));
	printf(" 0.8s: %i\n\n",  printf("[%0.8s]\n", "hello world!"));
	printf(" 0-.8s: %i\n", ft_printf("[%0-.8s]\n", "hello world!"));
	printf(" 0-.8s: %i\n\n",  printf("[%0-.8s]\n", "hello world!"));
		// NULL %str
	printf("NULL string:\n");
	printf(" s: %i\n", ft_printf("[%s]\n", NULL));
	printf(" s: %i\n\n",  printf("[%s]\n", NULL));
	printf(" -s: %i\n", ft_printf("[%-s]\n", NULL));
	printf(" -s: %i\n\n",  printf("[%-s]\n", NULL));
	printf(" 0s: %i\n", ft_printf("[%0s]\n", NULL));
	printf(" 0s: %i\n\n",  printf("[%0s]\n", NULL));
	printf(" 0-s: %i\n", ft_printf("[%0-s]\n", NULL));
	printf(" 0-s: %i\n\n",  printf("[%0-s]\n", NULL));
		// %i positive number
	printf("i is positive\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", 5));
	printf(" .8i: %i\n\n",  printf("[%.8i]\n", 5));
	printf(" -.8i: %i\n", ft_printf("[%-.8i]\n", 5));
	printf(" -.8i: %i\n\n",  printf("[%-.8i]\n", 5));
	printf(" 0.8i: %i\n", ft_printf("[%0.8i]\n", 5));
	printf(" 0.8i: %i\n\n",  printf("[%0.8i]\n", 5));
	printf(" 0-.8i: %i\n", ft_printf("[%0-.8i]\n", 5));
	printf(" 0-.8i: %i\n\n",  printf("[%0-.8i]\n", 5));
		// %i negative number
	printf("i is negative\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", -5));
	printf(" .8i: %i\n\n",  printf("[%.8i]\n", -5));
	printf(" -.8i: %i\n", ft_printf("[%-.8i]\n", -5));
	printf(" -.8i: %i\n\n",  printf("[%-.8i]\n", -5));
	printf(" 0.8i: %i\n", ft_printf("[%0.8i]\n", -5));
	printf(" 0.8i: %i\n\n",  printf("[%0.8i]\n", -5));
	printf(" 0-.8i: %i\n", ft_printf("[%0-.8i]\n", -5));
	printf(" 0-.8i: %i\n\n",  printf("[%0-.8i]\n", -5));
		// %i is max int
	printf("i is max int\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", INT_MAX));
	printf(" .8i: %i\n\n",  printf("[%.8i]\n", INT_MAX));
	printf(" -.8i: %i\n", ft_printf("[%-.8i]\n", INT_MAX));
	printf(" -.8i: %i\n\n",  printf("[%-.8i]\n", INT_MAX));
	printf(" 0.8i: %i\n", ft_printf("[%0.8i]\n", INT_MAX));
	printf(" 0.8i: %i\n\n",  printf("[%0.8i]\n", INT_MAX));
	printf(" 0-.8i: %i\n", ft_printf("[%0-.8i]\n", INT_MAX));
	printf(" 0-.8i: %i\n\n",  printf("[%0-.8i]\n", INT_MAX));
		// %i is min int
	printf("i is min int\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", INT_MIN));
	printf(" .8i: %i\n\n",  printf("[%.8i]\n", INT_MIN));
	printf(" -.8i: %i\n", ft_printf("[%-.8i]\n", INT_MIN));
	printf(" -.8i: %i\n\n",  printf("[%-.8i]\n", INT_MIN));
	printf(" 0.8i: %i\n", ft_printf("[%0.8i]\n", INT_MIN));
	printf(" 0.8i: %i\n\n",  printf("[%0.8i]\n", INT_MIN));
	printf(" 0-.8i: %i\n", ft_printf("[%0-.8i]\n", INT_MIN));
	printf(" 0-.8i: %i\n\n",  printf("[%0-.8i]\n", INT_MIN));
		// %d positive number
	printf("d is positive\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", 5));
	printf(" .8d: %i\n\n",  printf("[%.8d]\n", 5));
	printf(" -.8d: %i\n", ft_printf("[%-.8d]\n", 5));
	printf(" -.8d: %i\n\n",  printf("[%-.8d]\n", 5));
	printf(" 0.8d: %i\n", ft_printf("[%0.8d]\n", 5));
	printf(" 0.8d: %i\n\n",  printf("[%0.8d]\n", 5));
	printf(" 0-.8d: %i\n", ft_printf("[%0-.8d]\n", 5));
	printf(" 0-.8d: %i\n\n",  printf("[%0-.8d]\n", 5));
		// %d negative number
	printf("d is negative\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", -5));
	printf(" .8d: %i\n\n",  printf("[%.8d]\n", -5));
	printf(" -.8d: %i\n", ft_printf("[%-.8d]\n", -5));
	printf(" -.8d: %i\n\n",  printf("[%-.8d]\n", -5));
	printf(" 0.8d: %i\n", ft_printf("[%0.8d]\n", -5));
	printf(" 0.8d: %i\n\n",  printf("[%0.8d]\n", -5));
	printf(" 0-.8d: %i\n", ft_printf("[%0-.8d]\n", -5));
	printf(" 0-.8d: %i\n\n",  printf("[%0-.8d]\n", -5));
		// %d is max int
	printf("d is max int\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", INT_MAX));
	printf(" .8d: %i\n\n",  printf("[%.8d]\n", INT_MAX));
	printf(" -.8d: %i\n", ft_printf("[%-.8d]\n", INT_MAX));
	printf(" -.8d: %i\n\n",  printf("[%-.8d]\n", INT_MAX));
	printf(" 0.8d: %i\n", ft_printf("[%0.8d]\n", INT_MAX));
	printf(" 0.8d: %i\n\n",  printf("[%0.8d]\n", INT_MAX));
	printf(" 0-.8d: %i\n", ft_printf("[%0-.8d]\n", INT_MAX));
	printf(" 0-.8d: %i\n\n",  printf("[%0-.8d]\n", INT_MAX));
		// %i is min int
	printf("d is min int\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", INT_MIN));
	printf(" .8d: %i\n\n",  printf("[%.8d]\n", INT_MIN));
	printf(" -.8d: %i\n", ft_printf("[%-.8d]\n", INT_MIN));
	printf(" -.8d: %i\n\n",  printf("[%-.8d]\n", INT_MIN));
	printf(" 0.8d: %i\n", ft_printf("[%0.8d]\n", INT_MIN));
	printf(" 0.8d: %i\n\n",  printf("[%0.8d]\n", INT_MIN));
	printf(" 0-.8d: %i\n", ft_printf("[%0-.8d]\n", INT_MIN));
	printf(" 0-.8d: %i\n\n",  printf("[%0-.8d]\n", INT_MIN));
		// %u
	printf(" .8u: %i\n", ft_printf("[%.8u]\n", 5));
	printf(" .8u: %i\n\n",  printf("[%.8u]\n", 5));
	printf(" -.8u: %i\n", ft_printf("[%-.8u]\n", 5));
	printf(" -.8u: %i\n\n",  printf("[%-.8u]\n", 5));
	printf(" 0.8u: %i\n", ft_printf("[%0.8u]\n", 5));
	printf(" 0.8u: %i\n\n",  printf("[%0.8u]\n", 5));
	printf(" 0-.8u: %i\n", ft_printf("[%0-.8u]\n", 5));
	printf(" 0-.8u: %i\n\n",  printf("[%0-.8u]\n", 5));
		// %x
	printf(" .8x: %i\n", ft_printf("[%.8x]\n", 5));
	printf(" .8x: %i\n\n",  printf("[%.8x]\n", 5));
	printf(" -.8x: %i\n", ft_printf("[%-.8x]\n", 5));
	printf(" -.8x: %i\n\n",  printf("[%-.8x]\n", 5));
	printf(" 0.8x: %i\n", ft_printf("[%0.8x]\n", 5));
	printf(" 0.8x: %i\n\n",  printf("[%0.8x]\n", 5));
	printf(" 0-.8x: %i\n", ft_printf("[%0-.8x]\n", 5));
	printf(" 0-.8x: %i\n\n",  printf("[%0-.8x]\n", 5));
		// %X
	printf(" .8X: %i\n", ft_printf("[%.8X]\n", 5));
	printf(" .8X: %i\n\n",  printf("[%.8X]\n", 5));
	printf(" -.8X: %i\n", ft_printf("[%-.8X]\n", 5));
	printf(" -.8X: %i\n\n",  printf("[%-.8X]\n", 5));
	printf(" 0.8X: %i\n", ft_printf("[%0.8X]\n", 5));
	printf(" 0.8X: %i\n\n",  printf("[%0.8X]\n", 5));
	printf(" 0-.8X: %i\n", ft_printf("[%0-.8X]\n", 5));
	printf(" 0-.8X: %i\n\n",  printf("[%0-.8X]\n", 5));
		// %p
	printf(" .8p: %i\n", ft_printf("[%.8p]\n", &ptr));
	printf(" .8p: %i\n\n",  printf("[%.8p]\n", &ptr));
	printf(" -.8p: %i\n", ft_printf("[%-.8p]\n", &ptr));
	printf(" -.8p: %i\n\n",  printf("[%-.8p]\n", &ptr));
	printf(" 0.8p: %i\n", ft_printf("[%0.8p]\n", &ptr));
	printf(" 0.8p: %i\n\n",  printf("[%0.8p]\n", &ptr));
	printf(" 0-.8p: %i\n", ft_printf("[%0-.8p]\n", &ptr));
	printf(" 0-.8p: %i\n\n",  printf("[%0-.8p]\n", &ptr));
	return (0);
}