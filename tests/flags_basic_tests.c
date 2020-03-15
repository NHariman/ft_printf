/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flags_basic_tests.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 15:45:10 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/15 23:16:47 by nhariman      ########   odam.nl         */
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
	printf("c flag:\n");
	  printf(" 8c: %i\n", ft_printf(  "[%8c]\n",     'c'));
	  printf(" 8c: %i\n\n",  printf(  "[%8c]\n",     'c'));
	  printf(" *c: %i\n", ft_printf(  "[%*c]\n", 8,  'c'));
	  printf(" *c: %i\n\n",  printf(  "[%*c]\n", 8,  'c'));
	 printf(" -8c: %i\n", ft_printf( "[%-8c]\n",     'c'));
	 printf(" -8c: %i\n\n",  printf( "[%-8c]\n",     'c'));
	 printf(" -*c: %i\n", ft_printf( "[%-8c]\n", 8,  'c'));
	 printf(" -*c: %i\n\n",  printf( "[%-8c]\n", 8,  'c'));
	 printf(" 08c: %i\n", ft_printf( "[%08c]\n",     'c'));
	 printf(" 08c: %i\n\n",  printf( "[%08c]\n",     'c'));
	 printf(" 0*c: %i\n", ft_printf( "[%08c]\n", 8,  'c'));
	 printf(" 0*c: %i\n\n",  printf( "[%08c]\n", 8,  'c'));
	printf(" -08c: %i\n", ft_printf("[%-08c]\n",     'c'));
	printf(" -08c: %i\n\n",  printf("[%-08c]\n",     'c'));
	printf(" -0*c: %i\n", ft_printf("[%-0*c]\n", 8,  'c'));
	printf(" -0*c: %i\n\n",  printf("[%-0*c]\n", 8,  'c'));
		// %s	
	printf("s flag:\n");
	  printf(" 8s: %i\n", ft_printf(  "[%8s]\n",     "hello world!"));
	  printf(" 8s: %i\n\n",  printf(  "[%8s]\n",     "hello world!"));
	  printf(" *s: %i\n", ft_printf(  "[%*s]\n", 8,  "hello world!"));
	  printf(" *s: %i\n\n",  printf(  "[%*s]\n", 8,  "hello world!"));
	 printf(" -8s: %i\n", ft_printf( "[%-8s]\n",     "hello world!"));
	 printf(" -8s: %i\n\n",  printf( "[%-8s]\n",     "hello world!"));
	 printf(" -*s: %i\n", ft_printf( "[%-*s]\n", 8,  "hello world!"));
	 printf(" -*s: %i\n\n",  printf( "[%-*s]\n", 8,  "hello world!"));
	 printf(" 08s: %i\n", ft_printf( "[%08s]\n",     "hello world!"));
	 printf(" 08s: %i\n\n",  printf( "[%08s]\n",     "hello world!"));
	 printf(" 0*s: %i\n", ft_printf( "[%0*s]\n", 8,  "hello world!"));
	 printf(" 0*s: %i\n\n",  printf( "[%0*s]\n", 8,  "hello world!"));
	printf(" -08s: %i\n", ft_printf("[%-08s]\n",     "hello world!"));
	printf(" -08s: %i\n\n",  printf("[%-08s]\n",     "hello world!"));
	printf(" -0*s: %i\n", ft_printf("[%-0*s]\n", 8,  "hello world!"));
	printf(" -0*s: %i\n\n",  printf("[%-0*s]\n", 8,  "hello world!"));

		// NULL %str, cannot test on linux 
/*
	printf("NULL string:\n");
	  printf(" 8s: %i\n", ft_printf(  "[%8s]\n",     NULL));
	  printf(" 8s: %i\n\n",  printf(  "[%8s]\n",     NULL));
	  printf(" *s: %i\n", ft_printf(  "[%*s]\n", 8,  NULL));
	  printf(" *s: %i\n\n",  printf(  "[%*s]\n", 8,  NULL));
	 printf(" -8s: %i\n", ft_printf( "[%-8s]\n",     NULL));
	 printf(" -8s: %i\n\n",  printf( "[%-8s]\n",     NULL));
	 printf(" -*s: %i\n", ft_printf( "[%-8s]\n", 8,  NULL));
	 printf(" -*s: %i\n\n",  printf( "[%-8s]\n", 8,  NULL));
	 printf(" 08s: %i\n", ft_printf( "[%08s]\n",     NULL));
	 printf(" 08s: %i\n\n",  printf( "[%08s]\n",     NULL));
	 printf(" 0*s: %i\n", ft_printf( "[%08s]\n", 8,  NULL));
	 printf(" 0*s: %i\n\n",  printf( "[%08s]\n", 8,  NULL));
	printf(" -08s: %i\n", ft_printf("[%-08s]\n",     NULL));
	printf(" -08s: %i\n\n",  printf("[%-08s]\n",     NULL));
	printf(" -0*s: %i\n", ft_printf("[%-0*s]\n", 8,  NULL));
	printf(" -0*s: %i\n\n",  printf("[%-0*s]\n", 8,  NULL)); */
		// %i positive number
	printf("i is positive\n");
	  printf(" 8i: %i\n", ft_printf(  "[%8i]\n",     5));
	  printf(" 8i: %i\n\n",  printf(  "[%8i]\n",     5));
	  printf(" *i: %i\n", ft_printf(  "[%*i]\n", 8,  5));
	  printf(" *i: %i\n\n",  printf(  "[%*i]\n", 8,  5));
	 printf(" -8i: %i\n", ft_printf( "[%-8i]\n",     5));
	 printf(" -8i: %i\n\n",  printf( "[%-8i]\n",     5));
	 printf(" -*i: %i\n", ft_printf( "[%-*i]\n", 8,  5));
	 printf(" -*i: %i\n\n",  printf( "[%-*i]\n", 8,  5));
	 printf(" 08i: %i\n", ft_printf( "[%08i]\n",     5));
	 printf(" 08i: %i\n\n",  printf( "[%08i]\n",     5));
	 printf(" 0*i: %i\n", ft_printf( "[%0*i]\n", 8,  5));
	 printf(" 0*i: %i\n\n",  printf( "[%0*i]\n", 8,  5));
	printf(" -08i: %i\n", ft_printf("[%-08i]\n",     5));
	printf(" -08i: %i\n\n",  printf("[%-08i]\n",     5));
	printf(" -0*i: %i\n", ft_printf("[%-0*i]\n", 8,  5));
	printf(" -0*i: %i\n\n",  printf("[%-0*i]\n", 8,  5));
		// %i negative number
	printf("i is negative\n");
	  printf(" 8i: %i\n", ft_printf(  "[%8i]\n",     -5));
	  printf(" 8i: %i\n\n",  printf(  "[%8i]\n",     -5));
	  printf(" *i: %i\n", ft_printf(  "[%*i]\n", 8,  -5));
	  printf(" *i: %i\n\n",  printf(  "[%*i]\n", 8,  -5));
	 printf(" -8i: %i\n", ft_printf( "[%-8i]\n",     -5));
	 printf(" -8i: %i\n\n",  printf( "[%-8i]\n",     -5));
	 printf(" -*i: %i\n", ft_printf( "[%-*i]\n", 8,  -5));
	 printf(" -*i: %i\n\n",  printf( "[%-*i]\n", 8,  -5));
	 printf(" 08i: %i\n", ft_printf( "[%08i]\n",     -5));
	 printf(" 08i: %i\n\n",  printf( "[%08i]\n",     -5));
	 printf(" 0*i: %i\n", ft_printf( "[%0*i]\n", 8,  -5));
	 printf(" 0*i: %i\n\n",  printf( "[%0*i]\n", 8,  -5));
	printf(" -08i: %i\n", ft_printf("[%-08i]\n",     -5));
	printf(" -08i: %i\n\n",  printf("[%-08i]\n",     -5));
	printf(" -0*i: %i\n", ft_printf("[%-0*i]\n", 8,  -5));
	printf(" -0*i: %i\n\n",  printf("[%-0*i]\n", 8,  -5));
		// %i is max int
	printf("i is max int\n");
	  printf(" 8i: %i\n", ft_printf(  "[%8i]\n",     INT_MAX));
	  printf(" 8i: %i\n\n",  printf(  "[%8i]\n",     INT_MAX));
	  printf(" *i: %i\n", ft_printf(  "[%*i]\n", 8,  INT_MAX));
	  printf(" *i: %i\n\n",  printf(  "[%*i]\n", 8,  INT_MAX));
	 printf(" -8i: %i\n", ft_printf( "[%-8i]\n",     INT_MAX));
	 printf(" -8i: %i\n\n",  printf( "[%-8i]\n",     INT_MAX));
	 printf(" -*i: %i\n", ft_printf( "[%-*i]\n", 8,  INT_MAX));
	 printf(" -*i: %i\n\n",  printf( "[%-*i]\n", 8,  INT_MAX));
	 printf(" 08i: %i\n", ft_printf( "[%08i]\n",     INT_MAX));
	 printf(" 08i: %i\n\n",  printf( "[%08i]\n",     INT_MAX));
	 printf(" 0*i: %i\n", ft_printf( "[%0*i]\n", 8,  INT_MAX));
	 printf(" 0*i: %i\n\n",  printf( "[%0*i]\n", 8,  INT_MAX));
	printf(" -08i: %i\n", ft_printf("[%-08i]\n",     INT_MAX));
	printf(" -08i: %i\n\n",  printf("[%-08i]\n",     INT_MAX));
	printf(" -0*i: %i\n", ft_printf("[%-0*i]\n", 8,  INT_MAX));
	printf(" -0*i: %i\n\n",  printf("[%-0*i]\n", 8,  INT_MAX));
		// %i is min int
	printf("i is min int\n");
	  printf(" 8i: %i\n", ft_printf(  "[%8i]\n",     INT_MIN));
	  printf(" 8i: %i\n\n",  printf(  "[%8i]\n",     INT_MIN));
	  printf(" *i: %i\n", ft_printf(  "[%*i]\n", 8,  INT_MIN));
	  printf(" *i: %i\n\n",  printf(  "[%*i]\n", 8,  INT_MIN));
	 printf(" -8i: %i\n", ft_printf( "[%-8i]\n",     INT_MIN));
	 printf(" -8i: %i\n\n",  printf( "[%-8i]\n",     INT_MIN));
	 printf(" -*i: %i\n", ft_printf( "[%-*i]\n", 8,  INT_MIN));
	 printf(" -*i: %i\n\n",  printf( "[%-*i]\n", 8,  INT_MIN));
	 printf(" 08i: %i\n", ft_printf( "[%08i]\n",     INT_MIN));
	 printf(" 08i: %i\n\n",  printf( "[%08i]\n",     INT_MIN));
	 printf(" 0*i: %i\n", ft_printf( "[%0*i]\n", 8,  INT_MIN));
	 printf(" 0*i: %i\n\n",  printf( "[%0*i]\n", 8,  INT_MIN));
	printf(" -08i: %i\n", ft_printf("[%-08i]\n",     INT_MIN));
	printf(" -08i: %i\n\n",  printf("[%-08i]\n",     INT_MIN));
	printf(" -0*i: %i\n", ft_printf("[%-0*i]\n", 8,  INT_MIN));
	printf(" -0*i: %i\n\n",  printf("[%-0*i]\n", 8,  INT_MIN));
		// %d positive number
	printf("d is positive\n");
	  printf(" 8d: %i\n", ft_printf(  "[%8d]\n",     5));
	  printf(" 8d: %i\n\n",  printf(  "[%8d]\n",     5));
	  printf(" *d: %i\n", ft_printf(  "[%*d]\n", 8,  5));
	  printf(" *d: %i\n\n",  printf(  "[%*d]\n", 8,  5));
	 printf(" -8d: %i\n", ft_printf( "[%-8d]\n",     5));
	 printf(" -8d: %i\n\n",  printf( "[%-8d]\n",     5));
	 printf(" -*d: %i\n", ft_printf( "[%-*d]\n", 8,  5));
	 printf(" -*d: %i\n\n",  printf( "[%-*d]\n", 8,  5));
	 printf(" 08d: %i\n", ft_printf( "[%08d]\n",     5));
	 printf(" 08d: %i\n\n",  printf( "[%08d]\n",     5));
	 printf(" 0*d: %i\n", ft_printf( "[%0*d]\n", 8,  5));
	 printf(" 0*d: %i\n\n",  printf( "[%0*d]\n", 8,  5));
	printf(" -08d: %i\n", ft_printf("[%-08d]\n",     5));
	printf(" -08d: %i\n\n",  printf("[%-08d]\n",     5));
	printf(" -0*d: %i\n", ft_printf("[%-0*d]\n", 8,  5));
	printf(" -0*d: %i\n\n",  printf("[%-0*d]\n", 8,  5));
		// %d negative number
	printf("d is negative\n");
	  printf(" 8d: %i\n", ft_printf(  "[%8d]\n",     -5));
	  printf(" 8d: %i\n\n",  printf(  "[%8d]\n",     -5));
	  printf(" *d: %i\n", ft_printf(  "[%*d]\n", 8,  -5));
	  printf(" *d: %i\n\n",  printf(  "[%*d]\n", 8,  -5));
	 printf(" -8d: %i\n", ft_printf( "[%-8d]\n",     -5));
	 printf(" -8d: %i\n\n",  printf( "[%-8d]\n",     -5));
	 printf(" -*d: %i\n", ft_printf( "[%-*d]\n", 8,  -5));
	 printf(" -*d: %i\n\n",  printf( "[%-*d]\n", 8,  -5));
	 printf(" 08d: %i\n", ft_printf( "[%08d]\n",     -5));
	 printf(" 08d: %i\n\n",  printf( "[%08d]\n",     -5));
	 printf(" 0*d: %i\n", ft_printf( "[%0*d]\n", 8,  -5));
	 printf(" 0*d: %i\n\n",  printf( "[%0*d]\n", 8,  -5));
	printf(" -08d: %i\n", ft_printf("[%-08d]\n",     -5));
	printf(" -08d: %i\n\n",  printf("[%-08d]\n",     -5));
	printf(" -0*d: %i\n", ft_printf("[%-0*d]\n", 8,  -5));
	printf(" -0*d: %i\n\n",  printf("[%-0*d]\n", 8,  -5));
		// %d is max int
	printf("d is max int\n");
	  printf(" 8d: %i\n", ft_printf(  "[%8d]\n",     INT_MAX));
	  printf(" 8d: %i\n\n",  printf(  "[%8d]\n",     INT_MAX));
	  printf(" *d: %i\n", ft_printf(  "[%*d]\n", 8,  INT_MAX));
	  printf(" *d: %i\n\n",  printf(  "[%*d]\n", 8,  INT_MAX));
	 printf(" -8d: %i\n", ft_printf( "[%-8d]\n",     INT_MAX));
	 printf(" -8d: %i\n\n",  printf( "[%-8d]\n",     INT_MAX));
	 printf(" -*d: %i\n", ft_printf( "[%-*d]\n", 8,  INT_MAX));
	 printf(" -*d: %i\n\n",  printf( "[%-*d]\n", 8,  INT_MAX));
	 printf(" 08d: %i\n", ft_printf( "[%08d]\n",     INT_MAX));
	 printf(" 08d: %i\n\n",  printf( "[%08d]\n",     INT_MAX));
	 printf(" 0*d: %i\n", ft_printf( "[%0*d]\n", 8,  INT_MAX));
	 printf(" 0*d: %i\n\n",  printf( "[%0*d]\n", 8,  INT_MAX));
	printf(" -08d: %i\n", ft_printf("[%-08d]\n",     INT_MAX));
	printf(" -08d: %i\n\n",  printf("[%-08d]\n",     INT_MAX));
	printf(" -0*d: %i\n", ft_printf("[%-0*d]\n", 8,  INT_MAX));
	printf(" -0*d: %i\n\n",  printf("[%-0*d]\n", 8,  INT_MAX));
		// %i is min int
	printf("d is min int\n");
	  printf(" 8d: %i\n", ft_printf(  "[%8d]\n",     INT_MIN));
	  printf(" 8d: %i\n\n",  printf(  "[%8d]\n",     INT_MIN));
	  printf(" *d: %i\n", ft_printf(  "[%*d]\n", 8,  INT_MIN));
	  printf(" *d: %i\n\n",  printf(  "[%*d]\n", 8,  INT_MIN));
	 printf(" -8d: %i\n", ft_printf( "[%-8d]\n",     INT_MIN));
	 printf(" -8d: %i\n\n",  printf( "[%-8d]\n",     INT_MIN));
	 printf(" -*d: %i\n", ft_printf( "[%-*d]\n", 8,  INT_MIN));
	 printf(" -*d: %i\n\n",  printf( "[%-*d]\n", 8,  INT_MIN));
	 printf(" 08d: %i\n", ft_printf( "[%08d]\n",     INT_MIN));
	 printf(" 08d: %i\n\n",  printf( "[%08d]\n",     INT_MIN));
	 printf(" 0*d: %i\n", ft_printf( "[%0*d]\n", 8,  INT_MIN));
	 printf(" 0*d: %i\n\n",  printf( "[%0*d]\n", 8,  INT_MIN));
	printf(" -08d: %i\n", ft_printf("[%-08d]\n",     INT_MIN));
	printf(" -08d: %i\n\n",  printf("[%-08d]\n",     INT_MIN));
	printf(" -0*d: %i\n", ft_printf("[%-0*d]\n", 8,  INT_MIN));
	printf(" -0*d: %i\n\n",  printf("[%-0*d]\n", 8,  INT_MIN));
		// %u
	  printf(" 8u: %i\n", ft_printf(  "[%8u]\n",     5));
	  printf(" 8u: %i\n\n",  printf(  "[%8u]\n",     5));
	  printf(" *u: %i\n", ft_printf(  "[%*u]\n", 8,  5));
	  printf(" *u: %i\n\n",  printf(  "[%*u]\n", 8,  5));
	 printf(" -8u: %i\n", ft_printf( "[%-8u]\n",     5));
	 printf(" -8u: %i\n\n",  printf( "[%-8u]\n",     5));
	 printf(" -*u: %i\n", ft_printf( "[%-*u]\n", 8,  5));
	 printf(" -*u: %i\n\n",  printf( "[%-*u]\n", 8,  5));
	 printf(" 08u: %i\n", ft_printf( "[%08u]\n",     5));
	 printf(" 08u: %i\n\n",  printf( "[%08u]\n",     5));
	 printf(" 0*u: %i\n", ft_printf( "[%0*u]\n", 8,  5));
	 printf(" 0*u: %i\n\n",  printf( "[%0*u]\n", 8,  5));
	printf(" -08u: %i\n", ft_printf("[%-08u]\n",     5));
	printf(" -08u: %i\n\n",  printf("[%-08u]\n",     5));
	printf(" -0*u: %i\n", ft_printf("[%-0*u]\n", 8,  5));
	printf(" -0*u: %i\n\n",  printf("[%-0*u]\n", 8,  5));
		// %x
	  printf(" 8x: %i\n", ft_printf(  "[%8x]\n",     5));
	  printf(" 8x: %i\n\n",  printf(  "[%8x]\n",     5));
	  printf(" *x: %i\n", ft_printf(  "[%*x]\n", 8,  5));
	  printf(" *x: %i\n\n",  printf(  "[%*x]\n", 8,  5));
	 printf(" -8x: %i\n", ft_printf( "[%-8x]\n",     5));
	 printf(" -8x: %i\n\n",  printf( "[%-8x]\n",     5));
	 printf(" -*x: %i\n", ft_printf( "[%-*x]\n", 8,  5));
	 printf(" -*x: %i\n\n",  printf( "[%-*x]\n", 8,  5));
	 printf(" 08x: %i\n", ft_printf( "[%08x]\n",     5));
	 printf(" 08x: %i\n\n",  printf( "[%08x]\n",     5));
	 printf(" 0*x: %i\n", ft_printf( "[%0*x]\n", 8,  5));
	 printf(" 0*x: %i\n\n",  printf( "[%0*x]\n", 8,  5));
	printf(" -08x: %i\n", ft_printf("[%-08x]\n",     5));
	printf(" -08x: %i\n\n",  printf("[%-08x]\n",     5));
	printf(" -0*x: %i\n", ft_printf("[%-0*x]\n", 8,  5));
	printf(" -0*x: %i\n\n",  printf("[%-0*x]\n", 8,  5));
		// %X
	  printf(" 8X: %i\n", ft_printf(  "[%8X]\n",     5));
	  printf(" 8X: %i\n\n",  printf(  "[%8X]\n",     5));
	  printf(" *X: %i\n", ft_printf(  "[%*X]\n", 8,  5));
	  printf(" *X: %i\n\n",  printf(  "[%*X]\n", 8,  5));
	 printf(" -8X: %i\n", ft_printf( "[%-8X]\n",     5));
	 printf(" -8X: %i\n\n",  printf( "[%-8X]\n",     5));
	 printf(" -*X: %i\n", ft_printf( "[%-*X]\n", 8,  5));
	 printf(" -*X: %i\n\n",  printf( "[%-*X]\n", 8,  5));
	 printf(" 08X: %i\n", ft_printf( "[%08X]\n",     5));
	 printf(" 08X: %i\n\n",  printf( "[%08X]\n",     5));
	 printf(" 0*X: %i\n", ft_printf( "[%0*X]\n", 8,  5));
	 printf(" 0*X: %i\n\n",  printf( "[%0*X]\n", 8,  5));
	printf(" -08X: %i\n", ft_printf("[%-08X]\n",     5));
	printf(" -08X: %i\n\n",  printf("[%-08X]\n",     5));
	printf(" -0*X: %i\n", ft_printf("[%-0*X]\n", 8,  5));
	printf(" -0*X: %i\n\n",  printf("[%-0*X]\n", 8,  5));
		// %p
	  printf(" 8p: %i\n", ft_printf(  "[%8p]\n",     &ptr));
	  printf(" 8p: %i\n\n",  printf(  "[%8p]\n",     &ptr));
	  printf(" *p: %i\n", ft_printf(  "[%*p]\n", 8,  &ptr));
	  printf(" *p: %i\n\n",  printf(  "[%*p]\n", 8,  &ptr));
	 printf(" -8p: %i\n", ft_printf( "[%-8p]\n",     &ptr));
	 printf(" -8p: %i\n\n",  printf( "[%-8p]\n",     &ptr));
	 printf(" -*p: %i\n", ft_printf( "[%-*p]\n", 8,  &ptr));
	 printf(" -*p: %i\n\n",  printf( "[%-*p]\n", 8,  &ptr));
	 printf(" 08p: %i\n", ft_printf( "[%08p]\n",     &ptr));
	 printf(" 08p: %i\n\n",  printf( "[%08p]\n",     &ptr));
	 printf(" 0*p: %i\n", ft_printf( "[%0*p]\n", 8,  &ptr));
	 printf(" 0*p: %i\n\n",  printf( "[%0*p]\n", 8,  &ptr));
	printf(" -08p: %i\n", ft_printf("[%-08p]\n",     &ptr));
	printf(" -08p: %i\n\n",  printf("[%-08p]\n",     &ptr));
	printf(" -0*p: %i\n", ft_printf("[%-0*p]\n", 8,  &ptr));
	printf(" -0*p: %i\n\n",  printf("[%-0*p]\n", 8,  &ptr));

			//precision, basic tests
	printf("precision specified\n");
		// %c
	printf(  " .8c: %i\n",   ft_printf("[%.8c]\n",     'c'));
	printf(  " .8c: %i\n\n",    printf("[%.8c]\n",     'c'));
	printf(  " .*c: %i\n",   ft_printf("[%.*c]\n", 8,  'c'));
	printf(  " .*c: %i\n\n",    printf("[%.*c]\n", 8,  'c'));
	printf( " -.8c: %i\n",  ft_printf("[%-.8c]\n",     'c'));
	printf( " -.8c: %i\n\n",   printf("[%-.8c]\n",     'c'));
	printf( " -.*c: %i\n",  ft_printf("[%-.*c]\n", 8,  'c'));
	printf( " -.*c: %i\n\n",   printf("[%-.*c]\n", 8,  'c'));
	printf( " 0.8c: %i\n",  ft_printf("[%0.8c]\n",     'c'));
	printf( " 0.8c: %i\n\n" ,  printf("[%0.8c]\n",     'c'));
	printf( " 0.*c: %i\n" , ft_printf("[%0.*c]\n", 8,  'c'));
	printf( " 0.*c: %i\n\n" ,  printf("[%0.*c]\n", 8,  'c'));
	printf(" 0-.8c: %i\n", ft_printf("[%0-.8c]\n",     'c'));
	printf(" 0-.8c: %i\n\n",  printf("[%0-.8c]\n",     'c'));
	printf(" 0-.*c: %i\n", ft_printf("[%0-.*c]\n", 8,  'c'));
	printf(" 0-.*c: %i\n\n",  printf("[%0-.*c]\n", 8,  'c'));
		// strings
	printf("in strings\n\n");
	printf(  " .8s: %i\n",   ft_printf("[%.8s]\n",     "hello world!"));
	printf(  " .8s: %i\n\n",    printf("[%.8s]\n",     "hello world!"));
	printf(  " .*s: %i\n",   ft_printf("[%.*s]\n", 8,  "hello world!"));
	printf(  " .*s: %i\n\n",    printf("[%.*s]\n", 8,  "hello world!"));
	printf( " -.8s: %i\n",  ft_printf("[%-.8s]\n",     "hello world!"));
	printf( " -.8s: %i\n\n",   printf("[%-.8s]\n",     "hello world!"));
	printf( " -.*s: %i\n",  ft_printf("[%-.*s]\n", 8,  "hello world!"));
	printf( " -.*s: %i\n\n",   printf("[%-.*s]\n", 8,  "hello world!"));
	printf( " 0.8s: %i\n",  ft_printf("[%0.8s]\n",     "hello world!"));
	printf( " 0.8s: %i\n\n" ,  printf("[%0.8s]\n",     "hello world!"));
	printf( " 0.*s: %i\n" , ft_printf("[%0.*s]\n", 8,  "hello world!"));
	printf( " 0.*s: %i\n\n" ,  printf("[%0.*s]\n", 8,  "hello world!"));
	printf(" 0-.8s: %i\n", ft_printf("[%0-.8s]\n",     "hello world!"));
	printf(" 0-.8s: %i\n\n",  printf("[%0-.8s]\n",     "hello world!"));
	printf(" 0-.*s: %i\n", ft_printf("[%0-.*s]\n", 8,  "hello world!"));
	printf(" 0-.*s: %i\n\n",  printf("[%0-.*s]\n", 8,  "hello world!"));
		// NULL %str
/*
	printf("NULL string:\n");
	printf(  " .8s: %i\n",   ft_printf("[%.8s]\n",     NULL));
	printf(  " .8s: %i\n\n",    printf("[%.8s]\n",     NULL));
	printf(  " .*s: %i\n",   ft_printf("[%.*s]\n", 8,  NULL));
	printf(  " .*s: %i\n\n",    printf("[%.*s]\n", 8,  NULL));
	printf( " -.8s: %i\n",  ft_printf("[%-.8s]\n",     NULL));
	printf( " -.8s: %i\n\n",   printf("[%-.8s]\n",     NULL));
	printf( " -.*s: %i\n",  ft_printf("[%-.*s]\n", 8,  NULL));
	printf( " -.*s: %i\n\n",   printf("[%-.*s]\n", 8,  NULL));
	printf( " 0.8s: %i\n",  ft_printf("[%0.8s]\n",     NULL));
	printf( " 0.8s: %i\n\n" ,  printf("[%0.8s]\n",     NULL));
	printf( " 0.*s: %i\n" , ft_printf("[%0.*s]\n", 8,  NULL));
	printf( " 0.*s: %i\n\n" ,  printf("[%0.*s]\n", 8,  NULL));
	printf(" 0-.8s: %i\n", ft_printf("[%0-.8s]\n",     NULL));
	printf(" 0-.8s: %i\n\n",  printf("[%0-.8s]\n",     NULL));
	printf(" 0-.*s: %i\n", ft_printf("[%0-.*s]\n", 8,  NULL));
	printf(" 0-.*s: %i\n\n",  printf("[%0-.*s]\n", 8,  NULL));
*/
		// %i positive number
	printf("i is positive\n");
	printf(  " .8i: %i\n",   ft_printf("[%.8i]\n",     5));
	printf(  " .8i: %i\n\n",    printf("[%.8i]\n",     5));
	printf(  " .*i: %i\n",   ft_printf("[%.*i]\n", 8,  5));
	printf(  " .*i: %i\n\n",    printf("[%.*i]\n", 8,  5));
	printf( " -.8i: %i\n",  ft_printf("[%-.8i]\n",     5));
	printf( " -.8i: %i\n\n",   printf("[%-.8i]\n",     5));
	printf( " -.*i: %i\n",  ft_printf("[%-.*i]\n", 8,  5));
	printf( " -.*i: %i\n\n",   printf("[%-.*i]\n", 8,  5));
	printf( " 0.8i: %i\n",  ft_printf("[%0.8i]\n",     5));
	printf( " 0.8i: %i\n\n" ,  printf("[%0.8i]\n",     5));
	printf( " 0.*i: %i\n" , ft_printf("[%0.*i]\n", 8,  5));
	printf( " 0.*i: %i\n\n" ,  printf("[%0.*i]\n", 8,  5));
	printf(" 0-.8i: %i\n", ft_printf("[%0-.8i]\n",     5));
	printf(" 0-.8i: %i\n\n",  printf("[%0-.8i]\n",     5));
	printf(" 0-.*i: %i\n", ft_printf("[%0-.*i]\n", 8,  5));
	printf(" 0-.*i: %i\n\n",  printf("[%0-.*i]\n", 8,  5));
		// %i negative number
	printf("i is negative\n");
	printf(  " .8i: %i\n",   ft_printf("[%.8i]\n",     -5));
	printf(  " .8i: %i\n\n",    printf("[%.8i]\n",     -5));
	printf(  " .*i: %i\n",   ft_printf("[%.*i]\n", 8,  -5));
	printf(  " .*i: %i\n\n",    printf("[%.*i]\n", 8,  -5));
	printf( " -.8i: %i\n",  ft_printf("[%-.8i]\n",     -5));
	printf( " -.8i: %i\n\n",   printf("[%-.8i]\n",     -5));
	printf( " -.*i: %i\n",  ft_printf("[%-.*i]\n", 8,  -5));
	printf( " -.*i: %i\n\n",   printf("[%-.*i]\n", 8,  -5));
	printf( " 0.8i: %i\n",  ft_printf("[%0.8i]\n",     -5));
	printf( " 0.8i: %i\n\n" ,  printf("[%0.8i]\n",     -5));
	printf( " 0.*i: %i\n" , ft_printf("[%0.*i]\n", 8,  -5));
	printf( " 0.*i: %i\n\n" ,  printf("[%0.*i]\n", 8,  -5));
	printf(" 0-.8i: %i\n", ft_printf("[%0-.8i]\n",     -5));
	printf(" 0-.8i: %i\n\n",  printf("[%0-.8i]\n",     -5));
	printf(" 0-.*i: %i\n", ft_printf("[%0-.*i]\n", 8,  -5));
	printf(" 0-.*i: %i\n\n",  printf("[%0-.*i]\n", 8,  -5));
		// %i is max int
	printf("i is max int\n");
	printf(  " .8i: %i\n",   ft_printf("[%.8i]\n",     INT_MAX));
	printf(  " .8i: %i\n\n",    printf("[%.8i]\n",     INT_MAX));
	printf(  " .*i: %i\n",   ft_printf("[%.*i]\n", 8,  INT_MAX));
	printf(  " .*i: %i\n\n",    printf("[%.*i]\n", 8,  INT_MAX));
	printf( " -.8i: %i\n",  ft_printf("[%-.8i]\n",     INT_MAX));
	printf( " -.8i: %i\n\n",   printf("[%-.8i]\n",     INT_MAX));
	printf( " -.*i: %i\n",  ft_printf("[%-.*i]\n", 8,  INT_MAX));
	printf( " -.*i: %i\n\n",   printf("[%-.*i]\n", 8,  INT_MAX));
	printf( " 0.8i: %i\n",  ft_printf("[%0.8i]\n",     INT_MAX));
	printf( " 0.8i: %i\n\n" ,  printf("[%0.8i]\n",     INT_MAX));
	printf( " 0.*i: %i\n" , ft_printf("[%0.*i]\n", 8,  INT_MAX));
	printf( " 0.*i: %i\n\n" ,  printf("[%0.*i]\n", 8,  INT_MAX));
	printf(" 0-.8i: %i\n", ft_printf("[%0-.8i]\n",     INT_MAX));
	printf(" 0-.8i: %i\n\n",  printf("[%0-.8i]\n",     INT_MAX));
	printf(" 0-.*i: %i\n", ft_printf("[%0-.*i]\n", 8,  INT_MAX));
	printf(" 0-.*i: %i\n\n",  printf("[%0-.*i]\n", 8,  INT_MAX));
		// %i is min int
	printf("i is min int\n");
	printf(  " .8i: %i\n",   ft_printf("[%.8i]\n",     INT_MIN));
	printf(  " .8i: %i\n\n",    printf("[%.8i]\n",     INT_MIN));
	printf(  " .*i: %i\n",   ft_printf("[%.*i]\n", 8,  INT_MIN));
	printf(  " .*i: %i\n\n",    printf("[%.*i]\n", 8,  INT_MIN));
	printf( " -.8i: %i\n",  ft_printf("[%-.8i]\n",     INT_MIN));
	printf( " -.8i: %i\n\n",   printf("[%-.8i]\n",     INT_MIN));
	printf( " -.*i: %i\n",  ft_printf("[%-.*i]\n", 8,  INT_MIN));
	printf( " -.*i: %i\n\n",   printf("[%-.*i]\n", 8,  INT_MIN));
	printf( " 0.8i: %i\n",  ft_printf("[%0.8i]\n",     INT_MIN));
	printf( " 0.8i: %i\n\n" ,  printf("[%0.8i]\n",     INT_MIN));
	printf( " 0.*i: %i\n" , ft_printf("[%0.*i]\n", 8,  INT_MIN));
	printf( " 0.*i: %i\n\n" ,  printf("[%0.*i]\n", 8,  INT_MIN));
	printf(" 0-.8i: %i\n", ft_printf("[%0-.8i]\n",     INT_MIN));
	printf(" 0-.8i: %i\n\n",  printf("[%0-.8i]\n",     INT_MIN));
	printf(" 0-.*i: %i\n", ft_printf("[%0-.*i]\n", 8,  INT_MIN));
	printf(" 0-.*i: %i\n\n",  printf("[%0-.*i]\n", 8,  INT_MIN));
		// %d positive number
	printf("d is positive\n");
	printf(  " .8d: %i\n",   ft_printf("[%.8d]\n",     5));
	printf(  " .8d: %i\n\n",    printf("[%.8d]\n",     5));
	printf(  " .*d: %i\n",   ft_printf("[%.*d]\n", 8,  5));
	printf(  " .*d: %i\n\n",    printf("[%.*d]\n", 8,  5));
	printf( " -.8d: %i\n",  ft_printf("[%-.8d]\n",     5));
	printf( " -.8d: %i\n\n",   printf("[%-.8d]\n",     5));
	printf( " -.*d: %i\n",  ft_printf("[%-.*d]\n", 8,  5));
	printf( " -.*d: %i\n\n",   printf("[%-.*d]\n", 8,  5));
	printf( " 0.8d: %i\n",  ft_printf("[%0.8d]\n",     5));
	printf( " 0.8d: %i\n\n" ,  printf("[%0.8d]\n",     5));
	printf( " 0.*d: %i\n" , ft_printf("[%0.*d]\n", 8,  5));
	printf( " 0.*d: %i\n\n" ,  printf("[%0.*d]\n", 8,  5));
	printf(" 0-.8d: %i\n", ft_printf("[%0-.8d]\n",     5));
	printf(" 0-.8d: %i\n\n",  printf("[%0-.8d]\n",     5));
	printf(" 0-.*d: %i\n", ft_printf("[%0-.*d]\n", 8,  5));
	printf(" 0-.*d: %i\n\n",  printf("[%0-.*d]\n", 8,  5));
		// %d negative number
	printf("d is negative\n");
	printf(  " .8d: %i\n",   ft_printf("[%.8d]\n",     -5));
	printf(  " .8d: %i\n\n",    printf("[%.8d]\n",     -5));
	printf(  " .*d: %i\n",   ft_printf("[%.*d]\n", 8,  -5));
	printf(  " .*d: %i\n\n",    printf("[%.*d]\n", 8,  -5));
	printf( " -.8d: %i\n",  ft_printf("[%-.8d]\n",     -5));
	printf( " -.8d: %i\n\n",   printf("[%-.8d]\n",     -5));
	printf( " -.*d: %i\n",  ft_printf("[%-.*d]\n", 8,  -5));
	printf( " -.*d: %i\n\n",   printf("[%-.*d]\n", 8,  -5));
	printf( " 0.8d: %i\n",  ft_printf("[%0.8d]\n",     -5));
	printf( " 0.8d: %i\n\n" ,  printf("[%0.8d]\n",     -5));
	printf( " 0.*d: %i\n" , ft_printf("[%0.*d]\n", 8,  -5));
	printf( " 0.*d: %i\n\n" ,  printf("[%0.*d]\n", 8,  -5));
	printf(" 0-.8d: %i\n", ft_printf("[%0-.8d]\n",     -5));
	printf(" 0-.8d: %i\n\n",  printf("[%0-.8d]\n",     -5));
	printf(" 0-.*d: %i\n", ft_printf("[%0-.*d]\n", 8,  -5));
	printf(" 0-.*d: %i\n\n",  printf("[%0-.*d]\n", 8,  -5));
		// %d is max int
	printf("d is max int\n");
	printf(  " .8d: %i\n",   ft_printf("[%.8d]\n",     INT_MAX));
	printf(  " .8d: %i\n\n",    printf("[%.8d]\n",     INT_MAX));
	printf(  " .*d: %i\n",   ft_printf("[%.*d]\n", 8,  INT_MAX));
	printf(  " .*d: %i\n\n",    printf("[%.*d]\n", 8,  INT_MAX));
	printf( " -.8d: %i\n",  ft_printf("[%-.8d]\n",     INT_MAX));
	printf( " -.8d: %i\n\n",   printf("[%-.8d]\n",     INT_MAX));
	printf( " -.*d: %i\n",  ft_printf("[%-.*d]\n", 8,  INT_MAX));
	printf( " -.*d: %i\n\n",   printf("[%-.*d]\n", 8,  INT_MAX));
	printf( " 0.8d: %i\n",  ft_printf("[%0.8d]\n",     INT_MAX));
	printf( " 0.8d: %i\n\n" ,  printf("[%0.8d]\n",     INT_MAX));
	printf( " 0.*d: %i\n" , ft_printf("[%0.*d]\n", 8,  INT_MAX));
	printf( " 0.*d: %i\n\n" ,  printf("[%0.*d]\n", 8,  INT_MAX));
	printf(" 0-.8d: %i\n", ft_printf("[%0-.8d]\n",     INT_MAX));
	printf(" 0-.8d: %i\n\n",  printf("[%0-.8d]\n",     INT_MAX));
	printf(" 0-.*d: %i\n", ft_printf("[%0-.*d]\n", 8,  INT_MAX));
	printf(" 0-.*d: %i\n\n",  printf("[%0-.*d]\n", 8,  INT_MAX));
	// %d is min MAX
	printf("d is min int\n");
	printf(  " .8d: %i\n",   ft_printf("[%.8d]\n",     INT_MIN));
	printf(  " .8d: %i\n\n",    printf("[%.8d]\n",     INT_MIN));
	printf(  " .*d: %i\n",   ft_printf("[%.*d]\n", 8,  INT_MIN));
	printf(  " .*d: %i\n\n",    printf("[%.*d]\n", 8,  INT_MIN));
	printf( " -.8d: %i\n",  ft_printf("[%-.8d]\n",     INT_MIN));
	printf( " -.8d: %i\n\n",   printf("[%-.8d]\n",     INT_MIN));
	printf( " -.*d: %i\n",  ft_printf("[%-.*d]\n", 8,  INT_MIN));
	printf( " -.*d: %i\n\n",   printf("[%-.*d]\n", 8,  INT_MIN));
	printf( " 0.8d: %i\n",  ft_printf("[%0.8d]\n",     INT_MIN));
	printf( " 0.8d: %i\n\n" ,  printf("[%0.8d]\n",     INT_MIN));
	printf( " 0.*d: %i\n" , ft_printf("[%0.*d]\n", 8,  INT_MIN));
	printf( " 0.*d: %i\n\n" ,  printf("[%0.*d]\n", 8,  INT_MIN));
	printf(" 0-.8d: %i\n", ft_printf("[%0-.8d]\n",     INT_MIN));
	printf(" 0-.8d: %i\n\n",  printf("[%0-.8d]\n",     INT_MIN));
	printf(" 0-.*d: %i\n", ft_printf("[%0-.*d]\n", 8,  INT_MIN));
	printf(" 0-.*d: %i\n\n",  printf("[%0-.*d]\n", 8,  INT_MIN));
		// %u
	printf(  " .8u: %i\n",   ft_printf("[%.8u]\n",     5));
	printf(  " .8u: %i\n\n",    printf("[%.8u]\n",     5));
	printf(  " .*u: %i\n",   ft_printf("[%.*u]\n", 8,  5));
	printf(  " .*u: %i\n\n",    printf("[%.*u]\n", 8,  5));
	printf( " -.8u: %i\n",  ft_printf("[%-.8u]\n",     5));
	printf( " -.8u: %i\n\n",   printf("[%-.8u]\n",     5));
	printf( " -.*u: %i\n",  ft_printf("[%-.*u]\n", 8,  5));
	printf( " -.*u: %i\n\n",   printf("[%-.*u]\n", 8,  5));
	printf( " 0.8u: %i\n",  ft_printf("[%0.8u]\n",     5));
	printf( " 0.8u: %i\n\n" ,  printf("[%0.8u]\n",     5));
	printf( " 0.*u: %i\n" , ft_printf("[%0.*u]\n", 8,  5));
	printf( " 0.*u: %i\n\n" ,  printf("[%0.*u]\n", 8,  5));
	printf(" 0-.8u: %i\n", ft_printf("[%0-.8u]\n",     5));
	printf(" 0-.8u: %i\n\n",  printf("[%0-.8u]\n",     5));
	printf(" 0-.*u: %i\n", ft_printf("[%0-.*u]\n", 8,  5));
	printf(" 0-.*u: %i\n\n",  printf("[%0-.*u]\n", 8,  5));
		// %x
	printf(  " .8x: %i\n",   ft_printf("[%.8x]\n",     5));
	printf(  " .8x: %i\n\n",    printf("[%.8x]\n",     5));
	printf(  " .*x: %i\n",   ft_printf("[%.*x]\n", 8,  5));
	printf(  " .*x: %i\n\n",    printf("[%.*x]\n", 8,  5));
	printf( " -.8x: %i\n",  ft_printf("[%-.8x]\n",     5));
	printf( " -.8x: %i\n\n",   printf("[%-.8x]\n",     5));
	printf( " -.*x: %i\n",  ft_printf("[%-.*x]\n", 8,  5));
	printf( " -.*x: %i\n\n",   printf("[%-.*x]\n", 8,  5));
	printf( " 0.8x: %i\n",  ft_printf("[%0.8x]\n",     5));
	printf( " 0.8x: %i\n\n" ,  printf("[%0.8x]\n",     5));
	printf( " 0.*x: %i\n" , ft_printf("[%0.*x]\n", 8,  5));
	printf( " 0.*x: %i\n\n" ,  printf("[%0.*x]\n", 8,  5));
	printf(" 0-.8x: %i\n", ft_printf("[%0-.8x]\n",     5));
	printf(" 0-.8x: %i\n\n",  printf("[%0-.8x]\n",     5));
	printf(" 0-.*x: %i\n", ft_printf("[%0-.*x]\n", 8,  5));
	printf(" 0-.*x: %i\n\n",  printf("[%0-.*x]\n", 8,  5));
		// %X
	printf(  " .8X: %i\n",   ft_printf("[%.8X]\n",     5));
	printf(  " .8X: %i\n\n",    printf("[%.8X]\n",     5));
	printf(  " .*X: %i\n",   ft_printf("[%.*X]\n", 8,  5));
	printf(  " .*X: %i\n\n",    printf("[%.*X]\n", 8,  5));
	printf( " -.8X: %i\n",  ft_printf("[%-.8X]\n",     5));
	printf( " -.8X: %i\n\n",   printf("[%-.8X]\n",     5));
	printf( " -.*X: %i\n",  ft_printf("[%-.*X]\n", 8,  5));
	printf( " -.*X: %i\n\n",   printf("[%-.*X]\n", 8,  5));
	printf( " 0.8X: %i\n",  ft_printf("[%0.8X]\n",     5));
	printf( " 0.8X: %i\n\n" ,  printf("[%0.8X]\n",     5));
	printf( " 0.*X: %i\n" , ft_printf("[%0.*X]\n", 8,  5));
	printf( " 0.*X: %i\n\n" ,  printf("[%0.*X]\n", 8,  5));
	printf(" 0-.8X: %i\n", ft_printf("[%0-.8X]\n",     5));
	printf(" 0-.8X: %i\n\n",  printf("[%0-.8X]\n",     5));
	printf(" 0-.*X: %i\n", ft_printf("[%0-.*X]\n", 8,  5));
	printf(" 0-.*X: %i\n\n",  printf("[%0-.*X]\n", 8,  5));
		// %p
	printf(  " .8p: %i\n",   ft_printf("[%.8p]\n",     &ptr));
	printf(  " .8p: %i\n\n",    printf("[%.8p]\n",     &ptr));
	printf(  " .*p: %i\n",   ft_printf("[%.*p]\n", 8,  &ptr));
	printf(  " .*p: %i\n\n",    printf("[%.*p]\n", 8,  &ptr));
	printf( " -.8p: %i\n",  ft_printf("[%-.8p]\n",     &ptr));
	printf( " -.8p: %i\n\n",   printf("[%-.8p]\n",     &ptr));
	printf( " -.*p: %i\n",  ft_printf("[%-.*p]\n", 8,  &ptr));
	printf( " -.*p: %i\n\n",   printf("[%-.*p]\n", 8,  &ptr));
	printf( " 0.8p: %i\n",  ft_printf("[%0.8p]\n",     &ptr));
	printf( " 0.8p: %i\n\n" ,  printf("[%0.8p]\n",     &ptr));
	printf( " 0.*p: %i\n" , ft_printf("[%0.*p]\n", 8,  &ptr));
	printf( " 0.*p: %i\n\n" ,  printf("[%0.*p]\n", 8,  &ptr));
	printf(" 0-.8p: %i\n", ft_printf("[%0-.8p]\n",     &ptr));
	printf(" 0-.8p: %i\n\n",  printf("[%0-.8p]\n",     &ptr));
	printf(" 0-.*p: %i\n", ft_printf("[%0-.*p]\n", 8,  &ptr));
	printf(" 0-.*p: %i\n\n",  printf("[%0-.*p]\n", 8,  &ptr));
	return (0);
}