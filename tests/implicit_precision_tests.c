/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   implicit_precision_tests.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/15 23:23:44 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/15 23:25:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int     main(void)
{
// implicit precision tests with number != 0
	printf("implicit precision tests:\n");
	printf("implicit precision tests with number != 0\n");
	printf(" .x: %i\n", ft_printf("[%.x]\n",  5));
	printf(" .x: %i\n\n",  printf("[%.x]\n",  5));
	printf("-.x: %i\n", ft_printf("[%-.x]\n", 5));
	printf("-.x: %i\n\n",  printf("[%-.x]\n", 5));
    printf("0.x: %i\n", ft_printf("[%0.x]\n", 5));
	printf("0.x: %i\n\n",  printf("[%0.x]\n", 5));
	// i
	printf(" .i: %i\n", ft_printf("[%.i]\n",  5));
	printf(" .i: %i\n\n",  printf("[%.i]\n",  5));
	printf("-.i: %i\n", ft_printf("[%-.i]\n", 5));
	printf("-.i: %i\n\n",  printf("[%-.i]\n", 5));
    printf("0.i: %i\n", ft_printf("[%0.i]\n", 5));
	printf("0.i: %i\n\n",  printf("[%0.i]\n", 5));
	// u
	printf(" .u: %i\n", ft_printf("[%.u]\n",  5));
	printf(" .u: %i\n\n",  printf("[%.u]\n",  5));
	printf("-.u: %i\n", ft_printf("[%-.u]\n", 5));
	printf("-.u: %i\n\n",  printf("[%-.u]\n", 5));
    printf("0.u: %i\n", ft_printf("[%0.u]\n", 5));
	printf("0.u: %i\n\n",  printf("[%0.u]\n", 5));
    // negative
    printf("now with negative\n");
	printf(" .x: %i\n", ft_printf("[%.x]\n",  -5));
	printf(" .x: %i\n\n",  printf("[%.x]\n",  -5));
	printf("-.x: %i\n", ft_printf("[%-.x]\n", -5));
	printf("-.x: %i\n\n",  printf("[%-.x]\n", -5));
    printf("0.x: %i\n", ft_printf("[%0.x]\n", -5));
	printf("0.x: %i\n\n",  printf("[%0.x]\n", -5));
	// i
	printf(" .i: %i\n", ft_printf("[%.i]\n",  -5));
	printf(" .i: %i\n\n",  printf("[%.i]\n",  -5));
	printf("-.i: %i\n", ft_printf("[%-.i]\n", -5));
	printf("-.i: %i\n\n",  printf("[%-.i]\n", -5));
    printf("0.i: %i\n", ft_printf("[%0.i]\n", -5));
	printf("0.i: %i\n\n",  printf("[%0.i]\n", -5));
	// u
	printf(" .u: %i\n", ft_printf("[%.u]\n",  -5));
	printf(" .u: %i\n\n",  printf("[%.u]\n",  -5));
	printf("-.u: %i\n", ft_printf("[%-.u]\n", -5));
	printf("-.u: %i\n\n",  printf("[%-.u]\n", -5));
    printf("0.u: %i\n", ft_printf("[%0.u]\n", -5));
	printf("0.u: %i\n\n",  printf("[%0.u]\n", -5));
	// implicit precision with number == 0
	printf("implicit precision with number == 0\n");
	printf(" .c: %i\n",ft_printf("[%5.c]\n", 'c'));
	printf(" .c: %i\n\n", printf("[%5.c]\n", 'c'));
	// s
	printf(" .s: %i\n", ft_printf("[%.s]\n", "hello world!"));
	printf(" .s: %i\n\n",  printf("[%.s]\n", "hello world!"));
		// x
	printf(" .x: %i\n", ft_printf("[%.x]\n", 0));
	printf(" .x: %i\n\n",  printf("[%.x]\n", 0));
	printf("-.x: %i\n", ft_printf("[%-.x]\n", 0));
	printf("-.x: %i\n\n",  printf("[%-.x]\n", 0));
    printf("0.x: %i\n", ft_printf("[%0.x]\n", 0));
	printf("0.x: %i\n\n",  printf("[%0.x]\n", 0));
	// i
	printf(" .i: %i\n",  ft_printf("[%.i]\n", 0));
	printf(" .i: %i\n\n",   printf("[%.i]\n", 0));
	printf("-.i: %i\n", ft_printf("[%-.i]\n", 0));
	printf("-.i: %i\n\n",  printf("[%-.i]\n", 0));
    printf("0.i: %i\n", ft_printf("[%0.i]\n", 0));
	printf("0.i: %i\n\n",  printf("[%0.i]\n", 0));
	// 
	printf(" .u: %i\n",  ft_printf("[%.u]\n", 0));
	printf(" .u: %i\n\n",   printf("[%.u]\n", 0));
	printf("-.u: %i\n", ft_printf("[%-.u]\n", 0));
	printf("-.u: %i\n\n",  printf("[%-.u]\n", 0));
    printf("0.u: %i\n", ft_printf("[%0.u]\n", 0));
	printf("0.u: %i\n\n",  printf("[%0.u]\n", 0));
	// p
	printf(" 5.p: %i\n", ft_printf("[%5.p]\n", 0));
	printf(" 5.p: %i\n\n", printf("[%5.p]\n", 0));
	// implicit precision with specified, with number == 0
	printf("implicit precision with specified width, number == 0\n");
	printf(" 5.c: %i\n", ft_printf("[%5.c]\n", 'c'));
	printf(" 5.c: %i\n\n", printf("[%5.c]\n", 'c'));
	// s
	printf(" 5.s: %i\n", ft_printf("[%5.s]\n", "hello world!"));
	printf(" 5.s: %i\n\n", printf("[%5.s]\n", "hello world!"));
		// x
	printf(" 5.x: %i\n", ft_printf("[%5.x]\n", 0));
	printf(" 5.x: %i\n\n",  printf("[%5.x]\n", 0));
	printf("-5.x: %i\n", ft_printf("[%-5.x]\n", 0));
	printf("-5.x: %i\n\n",  printf("[%-5.x]\n", 0));
    printf("05.x: %i\n", ft_printf("[%05.x]\n", 0));
	printf("05.x: %i\n\n",  printf("[%05.x]\n", 0));
	// i
	printf(" 5.i: %i\n", ft_printf("[%5.i]\n", 0));
	printf(" 5.i: %i\n\n",  printf("[%5.i]\n", 0));
	printf("-5.i: %i\n", ft_printf("[%-5.i]\n", 0));
	printf("-5.i: %i\n\n",  printf("[%-5.i]\n", 0));
    printf("05.i: %i\n", ft_printf("[%05.i]\n", 0));
	printf("05.i: %i\n\n",  printf("[%05.i]\n", 0));
	// u
	printf(" 5.u: %i\n", ft_printf("[%5.u]\n", 0));
	printf(" 5.u: %i\n\n",  printf("[%5.u]\n", 0));
	printf("-5.u: %i\n", ft_printf("[%-5.u]\n", 0));
	printf("-5.u: %i\n\n",  printf("[%-5.u]\n", 0));
    printf("05.u: %i\n", ft_printf("[%05.u]\n", 0));
	printf("05.u: %i\n\n",  printf("[%05.u]\n", 0));
	// p
	printf(" 5.p: %i\n", ft_printf("[%5.p]\n", 0));
	printf(" 5.p: %i\n\n", printf("[%5.p]\n", 0));
	// implicit precision with specified width, number != 0
	printf("implicit precision with specified width, number != 0\n");
    // x
	printf(" 5.x: %i\n", ft_printf("[%5.x]\n",  5));
	printf(" 5.x: %i\n\n",  printf("[%5.x]\n",  5));
	printf("-5.x: %i\n", ft_printf("[%-5.x]\n", 5));
	printf("-5.x: %i\n\n",  printf("[%-5.x]\n", 5));
    printf("05.x: %i\n", ft_printf("[%05.x]\n", 5));
	printf("05.x: %i\n\n",  printf("[%05.x]\n", 5));
	// i
	printf(" 5.i: %i\n", ft_printf("[%5.i]\n",  5));
	printf(" 5.i: %i\n\n",  printf("[%5.i]\n",  5));
	printf("-5.i: %i\n", ft_printf("[%-5.i]\n", 5));
	printf("-5.i: %i\n\n",  printf("[%-5.i]\n", 5));
    printf("05.i: %i\n", ft_printf("[%05.i]\n", 5));
	printf("05.i: %i\n\n",  printf("[%05.i]\n", 5));
	// u
	printf(" 5.u: %i\n", ft_printf("[%5.u]\n",  5));
	printf(" 5.u: %i\n\n",  printf("[%5.u]\n",  5));
	printf("-5.u: %i\n", ft_printf("[%-5.u]\n", 5));
	printf("-5.u: %i\n\n",  printf("[%-5.u]\n", 5));
    printf("05.u: %i\n", ft_printf("[%05.u]\n", 5));
	printf("05.u: %i\n\n",  printf("[%05.u]\n", 5));
    //n
    printf("now with negative\n");
    // x
	printf(" 5.x: %i\n", ft_printf("[%5.x]\n",  -5));
	printf(" 5.x: %i\n\n",  printf("[%5.x]\n",  -5));
	printf("-5.x: %i\n", ft_printf("[%-5.x]\n", -5));
	printf("-5.x: %i\n\n",  printf("[%-5.x]\n", -5));
    printf("05.x: %i\n", ft_printf("[%05.x]\n", -5));
	printf("05.x: %i\n\n",  printf("[%05.x]\n", -5));
	// i
	printf(" 5.i: %i\n", ft_printf("[%5.i]\n",  -5));
	printf(" 5.i: %i\n\n",  printf("[%5.i]\n",  -5));
	printf("-5.i: %i\n", ft_printf("[%-5.i]\n", -5));
	printf("-5.i: %i\n\n",  printf("[%-5.i]\n", -5));
    printf("05.i: %i\n", ft_printf("[%05.i]\n", -5));
	printf("05.i: %i\n\n",  printf("[%05.i]\n", -5));
	// u
	printf(" 5.u: %i\n", ft_printf("[%5.u]\n",  -5));
	printf(" 5.u: %i\n\n",  printf("[%5.u]\n",  -5));
	printf("-5.u: %i\n", ft_printf("[%-5.u]\n", -5));
	printf("-5.u: %i\n\n",  printf("[%-5.u]\n", -5));
    printf("05.u: %i\n", ft_printf("[%05.u]\n", -5));
	printf("05.u: %i\n\n",  printf("[%05.u]\n", -5));
	// p
	printf(" 5.p: %i\n", ft_printf("[%5.p]\n", 5));
	printf(" 5.p: %i\n\n", printf("[%5.p]\n",5));
	// implicit precision with positive astrix width, number != 0
	printf("implicit precision with positive astrix width, number != 0\n");
	printf( " *.x: %i\n",  ft_printf("[%*.x]\n", 5, 5));
	printf( " *.x: %i\n\n",   printf("[%*.x]\n", 5, 5));
    printf(" -*.x: %i\n", ft_printf("[%-*.x]\n", 5, 5));
	printf(" -*.x: %i\n\n",  printf("[%-*.x]\n", 5, 5));
	printf(" 0*.x: %i\n", ft_printf("[%0*.x]\n", 5, 5));
	printf(" 0*.x: %i\n\n",  printf("[%0*.x]\n", 5, 5));
	// i
	printf( " *.i: %i\n",  ft_printf("[%*.i]\n", 5, 5));
	printf( " *.i: %i\n\n",   printf("[%*.i]\n", 5, 5));
    printf(" -*.i: %i\n", ft_printf("[%-*.i]\n", 5, 5));
	printf(" -*.i: %i\n\n",  printf("[%-*.i]\n", 5, 5));
	printf(" 0*.i: %i\n", ft_printf("[%0*.i]\n", 5, 5));
	printf(" 0*.i: %i\n\n",  printf("[%0*.i]\n", 5, 5));
	// u
	printf( " *.u: %i\n",  ft_printf("[%*.u]\n", 5, 5));
	printf( " *.u: %i\n\n",   printf("[%*.u]\n", 5, 5));
    printf(" -*.u: %i\n", ft_printf("[%-*.u]\n", 5, 5));
	printf(" -*.u: %i\n\n",  printf("[%-*.u]\n", 5, 5));
	printf(" 0*.u: %i\n", ft_printf("[%0*.u]\n", 5, 5));
	printf(" 0*.u: %i\n\n",  printf("[%0*.u]\n", 5, 5));
    // negative
    printf("Now with negative numbers:\n");
	printf( " *.x: %i\n",  ft_printf("[%*.x]\n", 5, -5));
	printf( " *.x: %i\n\n",   printf("[%*.x]\n", 5, -5));
    printf(" -*.x: %i\n", ft_printf("[%-*.x]\n", 5, -5));
	printf(" -*.x: %i\n\n",  printf("[%-*.x]\n", 5, -5));
	printf(" 0*.x: %i\n", ft_printf("[%0*.x]\n", 5, -5));
	printf(" 0*.x: %i\n\n",  printf("[%0*.x]\n", 5, -5));
	// i
	printf( " *.i: %i\n",  ft_printf("[%*.i]\n", 5, -5));
	printf( " *.i: %i\n\n",   printf("[%*.i]\n", 5, -5));
    printf(" -*.i: %i\n", ft_printf("[%-*.i]\n", 5, -5));
	printf(" -*.i: %i\n\n",  printf("[%-*.i]\n", 5, -5));
	printf(" 0*.i: %i\n", ft_printf("[%0*.i]\n", 5, -5));
	printf(" 0*.i: %i\n\n",  printf("[%0*.i]\n", 5, -5));
	// u
	printf( " *.u: %i\n",  ft_printf("[%*.u]\n", 5, -5));
	printf( " *.u: %i\n\n",   printf("[%*.u]\n", 5, -5));
    printf(" -*.u: %i\n", ft_printf("[%-*.u]\n", 5, -5));
	printf(" -*.u: %i\n\n",  printf("[%-*.u]\n", 5, -5));
	printf(" 0*.u: %i\n", ft_printf("[%0*.u]\n", 5, -5));
	printf(" 0*.u: %i\n\n",  printf("[%0*.u]\n", 5, -5));
	// p
	printf(" *.p: %i\n", ft_printf("[%*.p]\n", 5, 5));
	printf(" *.p: %i\n\n", printf("[%*.p]\n", 5, 5));
	// implicit precision with negative astrix width, number != 0
	printf("implicit precision with negative astrix width, number != 0\n");
    //x
	printf( " *.x: %i\n",  ft_printf("[%*.x]\n", -5, 5));
	printf( " *.x: %i\n\n",   printf("[%*.x]\n", -5, 5));
    printf(" -*.x: %i\n", ft_printf("[%-*.x]\n", -5, 5));
	printf(" -*.x: %i\n\n",  printf("[%-*.x]\n", -5, 5));
	printf(" 0*.x: %i\n", ft_printf("[%0*.x]\n", -5, 5));
	printf(" 0*.x: %i\n\n",  printf("[%0*.x]\n", -5, 5));
	// i
	printf( " *.i: %i\n",  ft_printf("[%*.i]\n", -5, 5));
	printf( " *.i: %i\n\n",   printf("[%*.i]\n", -5, 5));
    printf(" -*.i: %i\n", ft_printf("[%-*.i]\n", -5, 5));
	printf(" -*.i: %i\n\n",  printf("[%-*.i]\n", -5, 5));
	printf(" 0*.i: %i\n", ft_printf("[%0*.i]\n", -5, 5));
	printf(" 0*.i: %i\n\n",  printf("[%0*.i]\n", -5, 5));
	// u
	printf( " *.u: %i\n",  ft_printf("[%*.u]\n", -5, 5));
	printf( " *.u: %i\n\n",   printf("[%*.u]\n", -5, 5));
    printf(" -*.u: %i\n", ft_printf("[%-*.u]\n", -5, 5));
	printf(" -*.u: %i\n\n",  printf("[%-*.u]\n", -5, 5));
	printf(" 0*.u: %i\n", ft_printf("[%0*.u]\n", -5, 5));
	printf(" 0*.u: %i\n\n",  printf("[%0*.u]\n", -5, 5));
	// p
	printf(" *.p: %i\n",   ft_printf("[%*.p]\n", -5, 5));
	printf(" *.p: %i\n\n",    printf("[%*.p]\n", -5, 5)); 
    // negative
    printf("now with negative numbers\n");
	printf( " *.x: %i\n",  ft_printf("[%*.x]\n", -5, -5));
	printf( " *.x: %i\n\n",   printf("[%*.x]\n", -5, -5));
    printf(" -*.x: %i\n", ft_printf("[%-*.x]\n", -5, -5));
	printf(" -*.x: %i\n\n",  printf("[%-*.x]\n", -5, -5));
	printf(" 0*.x: %i\n", ft_printf("[%0*.x]\n", -5, -5));
	printf(" 0*.x: %i\n\n",  printf("[%0*.x]\n", -5, -5));
	// i
	printf( " *.i: %i\n",  ft_printf("[%*.i]\n", -5, -5));
	printf( " *.i: %i\n\n",   printf("[%*.i]\n", -5, -5));
    printf(" -*.i: %i\n", ft_printf("[%-*.i]\n", -5, -5));
	printf(" -*.i: %i\n\n",  printf("[%-*.i]\n", -5, -5));
	printf(" 0*.i: %i\n", ft_printf("[%0*.i]\n", -5, -5));
	printf(" 0*.i: %i\n\n",  printf("[%0*.i]\n", -5, -5));
	// u
	printf( " *.u: %i\n",  ft_printf("[%*.u]\n", -5, -5));
	printf( " *.u: %i\n\n",   printf("[%*.u]\n", -5, -5));
    printf(" -*.u: %i\n", ft_printf("[%-*.u]\n", -5, -5));
	printf(" -*.u: %i\n\n",  printf("[%-*.u]\n", -5, -5));
	printf(" 0*.u: %i\n", ft_printf("[%0*.u]\n", -5, -5));
	printf(" 0*.u: %i\n\n",  printf("[%0*.u]\n", -5, -5));
	// p
	printf(" *.p: %i\n",   ft_printf("[%*.p]\n", -5, -5));
	printf(" *.p: %i\n\n",    printf("[%*.p]\n", -5, -5)); 
    return (0);
}

