/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   all_tests.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 16:58:19 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/11 17:11:34 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int	*ptr;

	ptr = 0;
	printf("WARNING!! THIS TEST IS HUGE, IF THERE'S AN ERROR SOMEWHERE CHECK THE MAIN/ALL_TEST.C FILE BEFORE YOUR OWN CODE, THERE MAY BE A MISTAKE. I TRIED TO BE THOROUGH THOUGH.")
	printf("basic input:\n")
	printf(" no arguments: %i\n", ft_printf("hello world!"));
	printf(" no arguments: %i\n\n", printf("hello world!"));	
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
		//width, basic tests
	printf("width specified\n");
		// %c
	printf(" 8c: %i\n", ft_printf("[%8c]\n", 'c'));
	printf(" 8c: %i\n\n", printf("[%8c]\n", 'c'));
		// %s	
	printf(" 8s: %i\n", ft_printf("[%8s]\n", "hello world!"));
	printf(" 8s: %i\n\n", printf("[%8s]\n", "hello world!"));
		// NULL %str
	printf("NULL string:\n");
	printf(" 8s: %i\n", ft_printf("[%8s]\n", NULL));
	printf(" 8s: %i\n\n", printf("[%8s]\n", NULL));
		// %i positive number
	printf("i is positive\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", 5));
	printf(" 8i: %i\n\n", printf("[%8i]\n", 5));
		// %i negative number
	printf("i is negative\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", -5));
	printf(" 8i: %i\n\n", printf("[%8i]\n", -5));
		// %i is max int
	printf("i is max int\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", INT_MAX));
	printf(" 8i: %i\n\n", printf("[%8i]\n", INT_MAX));
		// %i is min int
	printf("i is min int\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", INT_MIN));
	printf(" 8i: %i\n\n", printf("[%8i]\n", INT_MIN));
		// %d positive number
	printf("d is positive\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", 5));
	printf(" 8d: %i\n\n", printf("[%8d]\n", 5));
		// %d negative number
	printf("d is negative\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", -5));
	printf(" 8d: %i\n\n", printf("[%8d]\n", -5));
		// %d is max int
	printf("d is max int\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", INT_MAX));
	printf(" 8d: %i\n\n", printf("[%8d]\n", INT_MAX));
		// %i is min int
	printf("d is min int\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", INT_MIN));
	printf(" 8d: %i\n\n", printf("[%8d]\n", INT_MIN));
		// %u
	printf(" 8u: %i\n", ft_printf("[%8u]\n", 5));
	printf(" 8u: %i\n\n", printf("[%8u]\n", 5));
		// %x
	printf(" 8x: %i\n", ft_printf("[%8x]\n", 5));
	printf(" 8x: %i\n\n", printf("[%8x]\n", 5));
		// %X
	printf(" 8X: %i\n", ft_printf("[%8X]\n", 5));
	printf(" 8X: %i\n\n", printf("[%8X]\n", 5));
		// %p
	printf(" 8p: %i\n", ft_printf("[%8p]\n", &ptr));
	printf(" 8p: %i\n\n", printf("[%8p]\n", &ptr));

			//precision, basic tests
	printf("precision specified\n");
		// %c
	printf(" .8c: %i\n", ft_printf("[%.8c]\n", 'c'));
	printf(" .8c: %i\n\n", printf("[%.8c]\n", 'c'));
		// %s	
	printf(" .8s: %i\n", ft_printf("[%.8s]\n", "hello world!"));
	printf(" .8s: %i\n\n", printf("[%.8s]\n", "hello world!"));
		// NULL %str
	printf("NULL string:\n");
	printf(" s: %i\n", ft_printf("[%s]\n", NULL));
	printf(" s: %i\n\n", printf("[%s]\n", NULL));
		// %i positive number
	printf("i is positive\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", 5));
	printf(" .8i: %i\n\n", printf("[%.8i]\n", 5));
		// %i negative number
	printf("i is negative\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", -5));
	printf(" .8i: %i\n\n", printf("[%.8i]\n", -5));
		// %i is max int
	printf("i is max int\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", INT_MAX));
	printf(" .8i: %i\n\n", printf("[%.8i]\n", INT_MAX));
		// %i is min int
	printf("i is min int\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", INT_MIN));
	printf(" .8i: %i\n\n", printf("[%.8i]\n", INT_MIN));
		// %d positive number
	printf("d is positive\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", 5));
	printf(" .8d: %i\n\n", printf("[%.8d]\n", 5));
		// %d negative number
	printf("d is negative\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", -5));
	printf(" .8d: %i\n\n", printf("[%.8d]\n", -5));
		// %d is max int
	printf("d is max int\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", INT_MAX));
	printf(" .8d: %i\n\n", printf("[%.8d]\n", INT_MAX));
		// %i is min int
	printf("d is min int\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", INT_MIN));
	printf(" .8d: %i\n\n", printf("[%.8d]\n", INT_MIN));
		// %u
	printf(" .8u: %i\n", ft_printf("[%.8u]\n", 5));
	printf(" .8u: %i\n\n", printf("[%.8u]\n", 5));
		// %x
	printf(" .8x: %i\n", ft_printf("[%.8x]\n", 5));
	printf(" .8x: %i\n\n", printf("[%.8x]\n", 5));
		// %X
	printf(" .8X: %i\n", ft_printf("[%.8X]\n", 5));
	printf(" .8X: %i\n\n", printf("[%.8X]\n", 5));
		// %p
	printf(" .8p: %i\n", ft_printf("[%.8p]\n", &ptr));
	printf(" .8p: %i\n\n", printf("[%.8p]\n", &ptr));
	
	// implicit precision tests with number != 0
	printf("implicit precision tests:\n");
	printf("implicit precision tests with number != 0\n");
	// c
	printf(" .c: %i\n", ft_printf("[%.c]\n", 'c'));
	printf(" .c: %i\n\n", printf("[%.c]\n", 'c'));
	// s
	printf(" .s: %i\n", ft_printf("[%.s]\n", "hello world!"));
	printf(" .s: %i\n\n", printf("[%.s]\n", "hello world!"));
	// x
	printf(" .x: %i\n", ft_printf("[%.x]\n", 5));
	printf(" .x: %i\n\n", printf("[%.x]\n", 5));
	// i
	printf(" .i: %i\n", ft_printf("[%.i]\n", 5));
	printf(" .i: %i\n\n", printf("[%.i]\n",5));
	// u
	printf(" .u: %i\n", ft_printf("[%.u]\n", 5));
	printf(" .u: %i\n\n", printf("[%.u]\n",5));
	// p
	printf(" .p: %i\n", ft_printf("[%.p]\n", 5));
	printf(" .p: %i\n\n", printf("[%.p]\n",5));
	// implicit precision with number == 0
	printf("implicit precision with number == 0\n");
		// x
	printf(" .x: %i\n", ft_printf("[%.x]\n", 0));
	printf(" .x: %i\n\n", printf("[%.x]\n", 0));
	// i
	printf(" .i: %i\n", ft_printf("[%.i]\n", 0));
	printf(" .i: %i\n\n", printf("[%.i]\n",0));
	// u
	printf(" .u: %i\n", ft_printf("[%.u]\n", 0));
	printf(" .u: %i\n\n", printf("[%.u]\n",0));
	// p
	printf(" .p: %i\n", ft_printf("[%.p]\n", 0));
	printf(" .p: %i\n\n", printf("[%.p]\n",0));
	// implicit precision with specified, with number == 0
	printf("implicit precision with specified width, number == 0\n");
	printf(" 5.c: %i\n", ft_printf("[%5.c]\n", 'c'));
	printf(" 5.c: %i\n\n", printf("[%5.c]\n", 'c'));
	// s
	printf(" 5.s: %i\n", ft_printf("[%5.s]\n", "hello world!"));
	printf(" 5.s: %i\n\n", printf("[%5.s]\n", "hello world!"));
		// x
	printf(" 5.x: %i\n", ft_printf("[%5.x]\n", 0));
	printf(" 5.x: %i\n\n", printf("[%5.x]\n", 0));
	// i
	printf(" 5.i: %i\n", ft_printf("[%5.i]\n", 0));
	printf(" 5.i: %i\n\n", printf("[%5.i]\n",0));
	// u
	printf(" 5.u: %i\n", ft_printf("[%5.u]\n", 0));
	printf(" 5.u: %i\n\n", printf("[%5.u]\n",0));
	// p
	printf(" 5.p: %i\n", ft_printf("[%5.p]\n", 0));
	printf(" 5.p: %i\n\n", printf("[%5.p]\n", 0));
	// implicit precision with specified width, number != 0
	printf("implicit precision with specified width, number != 0\n");
	printf(" 5.x: %i\n", ft_printf("[%5.x]\n", 5));
	printf(" 5.x: %i\n\n", printf("[%5.x]\n", 5));
	// i
	printf(" 5.i: %i\n", ft_printf("[%5.i]\n", 5));
	printf(" 5.i: %i\n\n", printf("[%5.i]\n",5));
	// u
	printf(" 5.u: %i\n", ft_printf("[%5.u]\n", 5));
	printf(" 5.u: %i\n\n", printf("[%5.u]\n",5));
	// p
	printf(" 5.p: %i\n", ft_printf("[%5.p]\n", 5));
	printf(" 5.p: %i\n\n", printf("[%5.p]\n",5));
	// implicit precision with positive astrix width, number != 0
	printf("implicit precision with positive astrix width, number != 0\n");
	printf(" *.x: %i\n", ft_printf("[%*.x]\n",5, 5));
	printf(" *.x: %i\n\n", printf("[%*.x]\n", 5 ,5));
	// i
	printf(" *.i: %i\n", ft_printf("[%*.i]\n", 5, 5));
	printf(" *.i: %i\n\n", printf("[%*.i]\n", 5, 5));
	// u
	printf(" *.u: %i\n", ft_printf("[%*.u]\n", 5, 5));
	printf(" *.u: %i\n\n", printf("[%*.u]\n", 5, 5));
	// p
	printf(" *.p: %i\n", ft_printf("[%*.p]\n", 5, 5));
	printf(" *.p: %i\n\n", printf("[%*.p]\n", 5, 5));
	// implicit precision with negative astrix width, number != 0
	printf("implicit precision with negative astrix width, number != 0\n");
	printf(" *.x: %i\n", ft_printf("[%*.x]\n",-5, 5));
	printf(" *.x: %i\n\n", printf("[%*.x]\n", -5 ,5));
	// i
	printf(" *.i: %i\n", ft_printf("[%*.i]\n", -5, 5));
	printf(" *.i: %i\n\n", printf("[%*.i]\n", -5, 5));
	// u
	printf(" *.u: %i\n", ft_printf("[%*.u]\n", -5, 5));
	printf(" *.u: %i\n\n", printf("[%*.u]\n", -5, 5));
	// p
	printf(" *.p: %i\n", ft_printf("[%*.p]\n", -5, 5));
	printf(" *.p: %i\n\n", printf("[%*.p]\n", -5, 5)); 

	printf("width specified\n");
		// %c
	printf(" 8c: %i\n", ft_printf("[%8c]\n", 'c'));
	printf(" 8c: %i\n\n", printf("[%8c]\n", 'c'));
		// %s	
	printf(" 8s: %i\n", ft_printf("[%8s]\n", "hello world!"));
	printf(" 8s: %i\n\n", printf("[%8s]\n", "hello world!"));
		// NULL %str
	printf("NULL string:\n");
	printf(" 8s: %i\n", ft_printf("[%8s]\n", NULL));
	printf(" 8s: %i\n\n", printf("[%8s]\n", NULL));
		// %i positive number
	printf("i is positive\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", 5));
	printf(" 8i: %i\n\n", printf("[%8i]\n", 5));
		// %i negative number
	printf("i is negative\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", -5));
	printf(" 8i: %i\n\n", printf("[%8i]\n", -5));
		// %i is max int
	printf("i is max int\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", INT_MAX));
	printf(" 8i: %i\n\n", printf("[%8i]\n", INT_MAX));
		// %i is min int
	printf("i is min int\n");
	printf(" 8i: %i\n", ft_printf("[%8i]\n", INT_MIN));
	printf(" 8i: %i\n\n", printf("[%8i]\n", INT_MIN));
		// %d positive number
	printf("d is positive\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", 5));
	printf(" 8d: %i\n\n", printf("[%8d]\n", 5));
		// %d negative number
	printf("d is negative\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", -5));
	printf(" 8d: %i\n\n", printf("[%8d]\n", -5));
		// %d is max int
	printf("d is max int\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", INT_MAX));
	printf(" 8d: %i\n\n", printf("[%8d]\n", INT_MAX));
		// %i is min int
	printf("d is min int\n");
	printf(" 8d: %i\n", ft_printf("[%8d]\n", INT_MIN));
	printf(" 8d: %i\n\n", printf("[%8d]\n", INT_MIN));
		// %u
	printf(" 8u: %i\n", ft_printf("[%8u]\n", 5));
	printf(" 8u: %i\n\n", printf("[%8u]\n", 5));
		// %x
	printf(" 8x: %i\n", ft_printf("[%8x]\n", 5));
	printf(" 8x: %i\n\n", printf("[%8x]\n", 5));
		// %X
	printf(" 8X: %i\n", ft_printf("[%8X]\n", 5));
	printf(" 8X: %i\n\n", printf("[%8X]\n", 5));
		// %p
	printf(" 8p: %i\n", ft_printf("[%8p]\n", &ptr));
	printf(" 8p: %i\n\n", printf("[%8p]\n", &ptr));

			//precision, basic tests
	printf("precision specified\n");
		// %c
	printf(" .8c: %i\n", ft_printf("[%.8c]\n", 'c'));
	printf(" .8c: %i\n\n", printf("[%.8c]\n", 'c'));
		// %s	
	printf(" .8s: %i\n", ft_printf("[%.8s]\n", "hello world!"));
	printf(" .8s: %i\n\n", printf("[%.8s]\n", "hello world!"));
		// NULL %str
	printf("NULL string:\n");
	printf(" s: %i\n", ft_printf("[%s]\n", NULL));
	printf(" s: %i\n\n", printf("[%s]\n", NULL));
		// %i positive number
	printf("i is positive\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", 5));
	printf(" .8i: %i\n\n", printf("[%.8i]\n", 5));
		// %i negative number
	printf("i is negative\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", -5));
	printf(" .8i: %i\n\n", printf("[%.8i]\n", -5));
		// %i is max int
	printf("i is max int\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", INT_MAX));
	printf(" .8i: %i\n\n", printf("[%.8i]\n", INT_MAX));
		// %i is min int
	printf("i is min int\n");
	printf(" .8i: %i\n", ft_printf("[%.8i]\n", INT_MIN));
	printf(" .8i: %i\n\n", printf("[%.8i]\n", INT_MIN));
		// %d positive number
	printf("d is positive\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", 5));
	printf(" .8d: %i\n\n", printf("[%.8d]\n", 5));
		// %d negative number
	printf("d is negative\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", -5));
	printf(" .8d: %i\n\n", printf("[%.8d]\n", -5));
		// %d is max int
	printf("d is max int\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", INT_MAX));
	printf(" .8d: %i\n\n", printf("[%.8d]\n", INT_MAX));
		// %i is min int
	printf("d is min int\n");
	printf(" .8d: %i\n", ft_printf("[%.8d]\n", INT_MIN));
	printf(" .8d: %i\n\n", printf("[%.8d]\n", INT_MIN));
		// %u
	printf(" .8u: %i\n", ft_printf("[%.8u]\n", 5));
	printf(" .8u: %i\n\n", printf("[%.8u]\n", 5));
		// %x
	printf(" .8x: %i\n", ft_printf("[%.8x]\n", 5));
	printf(" .8x: %i\n\n", printf("[%.8x]\n", 5));
		// %X
	printf(" .8X: %i\n", ft_printf("[%.8X]\n", 5));
	printf(" .8X: %i\n\n", printf("[%.8X]\n", 5));
		// %p
	printf(" .8p: %i\n", ft_printf("[%.8p]\n", &ptr));
	printf(" .8p: %i\n\n", printf("[%.8p]\n", &ptr));

// width with *, positive width
	printf("* testing, with positive width\n");
		// %c
	printf("********* %%c *********\n");
	printf(" *.5c: %i\n", ft_printf("[%*.5c]\n", 5, 'c'));
	printf(" *.5c: %i\n\n", printf("[%*.5c]\n", 5, 'c'));
		//
	printf(" -*.5c: %i\n", ft_printf("[%-*.5c]\n", 5, 'c'));
	printf(" -*.5c: %i\n\n", printf("[%-*.5c]\n", 5, 'c'));
		//
	printf(" 0*.5c: %i\n", ft_printf("[%0*.5c]\n", 5, 'c'));
	printf(" 0*.5c: %i\n\n", printf("[%0*.5c]\n", 5, 'c'));
		//
	printf(" 0-*.5c: %i\n", ft_printf("[%0-*.5c]\n", 5, 'c'));
	printf(" 0-*.5c: %i\n\n", printf("[%0-*.5c]\n", 5, 'c'));
		//
	printf(" -0*.5c: %i\n", ft_printf("[%-0*.5c]\n", 5, 'c'));
	printf(" -0*.5c: %i\n\n", printf("[%-0*.5c]\n", 5, 'c'));
		// %s
	printf("********* %%s *********\n");
	printf(" *.5s: %i\n", ft_printf("[%*.5s]\n", 5, "hello world!"));
	printf(" *.5s: %i\n\n", printf("[%*.5s]\n", 5, "hello world!"));
		//
	printf(" -*.5s: %i\n", ft_printf("[%-*.5s]\n", 5, "hello world!"));
	printf(" -*.5s: %i\n\n", printf("[%-*.5s]\n", 5, "hello world!"));
		//
	printf(" 0*.5s: %i\n", ft_printf("[%0*.5s]\n", 5, "hello world!"));
	printf(" 0*.5s: %i\n\n", printf("[%0*.5s]\n", 5, "hello world!"));
		//
	printf(" 0-*.5s: %i\n", ft_printf("[%0-*.5s]\n", 5, "hello world!"));
	printf(" 0-*.5s: %i\n\n", printf("[%0-*.5s]\n", 5, "hello world!"));
		//
	printf(" -0*.5s: %i\n", ft_printf("[%-0*.5s]\n", 5, "hello world!"));
	printf(" -0*.5s: %i\n\n", printf("[%-0*.5s]\n", 5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********\n");
	printf(" *.5i: %i\n", ft_printf("[%*.5i]\n", 5, 5));
	printf(" *.5i: %i\n\n", printf("[%*.5i]\n", 5, 5));
		//
	printf(" -*.5i: %i\n", ft_printf("[%-*.5i]\n", 5, 5));
	printf(" -*.5i: %i\n\n", printf("[%-*.5i]\n", 5, 5));
		//
	printf(" 0*.5i: %i\n", ft_printf("[%0*.5i]\n", 5, 5));
	printf(" 0*.5i: %i\n\n", printf("[%0*.5i]\n", 5, 5));
		//
	printf(" 0-*.5i: %i\n", ft_printf("[%0-*.5i]\n", 5, 5));
	printf(" 0-*.5i: %i\n\n", printf("[%0-*.5i]\n", 5, 5));
		//
	printf(" -0*.5i: %i\n", ft_printf("[%-0*.5i]\n", 5, 5));
	printf(" -0*.5i: %i\n\n", printf("[%-0*.5i]\n", 5, 5));
		// %i negative
	printf("********* %%i, negative *********\n");
	printf(" *.5i: %i\n", ft_printf("[%*.5i]\n", 5, -5));
	printf(" *.5i: %i\n\n", printf("[%*.5i]\n", 5, -5));
		//
	printf(" -*.5i: %i\n", ft_printf("[%-*.5i]\n", 5, -5));
	printf(" -*.5i: %i\n\n", printf("[%-*.5i]\n", 5, -5));
		//
	printf(" 0*.5i: %i\n", ft_printf("[%0*.5i]\n", 5, -5));
	printf(" 0*.5i: %i\n\n", printf("[%0*.5i]\n", 5, -5));
		//
	printf(" 0-*.5i: %i\n", ft_printf("[%0-*.5i]\n", 5, -5));
	printf(" 0-*.5i: %i\n\n", printf("[%0-*.5i]\n", 5, -5));
		//
	printf(" -0*.5i: %i\n", ft_printf("[%-0*.5i]\n", 5, -5));
	printf(" -0*.5i: %i\n\n", printf("[%-0*.5i]\n", 5, -5));
		// %u
	printf("********* %%u *********\n");
	printf(" *.5u: %u\n", ft_printf("[%*.5u]\n", 5, 5));
	printf(" *.5u: %u\n\n", printf("[%*.5u]\n", 5, 5));
		//
	printf(" -*.5u: %i\n", ft_printf("[%-*.5u]\n", 5, 5));
	printf(" -*.5u: %i\n\n", printf("[%-*.5u]\n", 5, 5));
		//
	printf(" 0*.5u: %i\n", ft_printf("[%0*.5u]\n", 5, 5));
	printf(" 0*.5u: %i\n\n", printf("[%0*.5u]\n", 5, 5));
		//
	printf(" 0-*.5u: %i\n", ft_printf("[%0-*.5u]\n", 5, 5));
	printf(" 0-*.5u: %i\n\n", printf("[%0-*.5u]\n", 5, 5));
		//
	printf(" -0*.5u: %i\n", ft_printf("[%-0*.5u]\n", 5, 5));
	printf(" -0*.5u: %i\n\n", printf("[%-0*.5u]\n", 5, 5));
		// %d positive
	printf("********* %%d positive *********\n");
	printf(" *.5d: %i\n", ft_printf("[%*.5d]\n", 5, 5));
	printf(" *.5d: %i\n\n", printf("[%*.5d]\n", 5, 5));
		//
	printf(" -*.5d: %i\n", ft_printf("[%-*.5d]\n", 5, 5));
	printf(" -*.5d: %i\n\n", printf("[%-*.5d]\n", 5, 5));
		//
	printf(" 0*.5d: %i\n", ft_printf("[%0*.5d]\n", 5, 5));
	printf(" 0*.5d: %i\n\n", printf("[%0*.5d]\n", 5, 5));
		//
	printf(" 0-*.5d: %i\n", ft_printf("[%0-*.5d]\n", 5, 5));
	printf(" 0-*.5d: %i\n\n", printf("[%0-*.5d]\n", 5, 5));
		//
	printf(" -0*.5d: %i\n", ft_printf("[%-0*.5d]\n", 5, 5));
	printf(" -0*.5d: %i\n\n", printf("[%-0*.5d]\n", 5, 5));
		// %d negative
	printf("********* %%d negative *********\n");
	printf(" *.5d: %i\n", ft_printf("[%*.5d]\n", 5, -5));
	printf(" *.5d: %i\n\n", printf("[%*.5d]\n", 5, -5));
		//
	printf(" -*.5d: %i\n", ft_printf("[%-*.5d]\n", 5, -5));
	printf(" -*.5d: %i\n\n", printf("[%-*.5d]\n", 5, -5));
		//
	printf(" 0*.5d: %i\n", ft_printf("[%0*.5d]\n", 5, -5));
	printf(" 0*.5d: %i\n\n", printf("[%0*.5d]\n", 5, -5));
		//
	printf(" 0-*.5d: %i\n", ft_printf("[%0-*.5d]\n", 5, -5));
	printf(" 0-*.5d: %i\n\n", printf("[%0-*.5d]\n", 5, -5));
		//
	printf(" -0*.5d: %i\n", ft_printf("[%-0*.5d]\n", 5, -5));
	printf(" -0*.5d: %i\n\n", printf("[%-0*.5d]\n", 5, -5));
		// %x
	printf("********* %%x *********\n");
	printf(" *.5x: %i\n", ft_printf("[%*.5x]\n", 5, 5));
	printf(" *.5x: %i\n\n", printf("[%*.5x]\n", 5, 5));
		//
	printf(" -*.5x: %i\n", ft_printf("[%-*.5x]\n", 5, 5));
	printf(" -*.5x: %i\n\n", printf("[%-*.5x]\n", 5, 5));
		//
	printf(" 0*.5x: %i\n", ft_printf("[%0*.5x]\n", 5, 5));
	printf(" 0*.5x: %i\n\n", printf("[%0*.5x]\n", 5, 5));
		//
	printf(" 0-*.5x: %i\n", ft_printf("[%0-*.5x]\n", 5, 5));
	printf(" 0-*.5x: %i\n\n", printf("[%0-*.5x]\n", 5, 5));
		//
	printf(" -0*.5x: %i\n", ft_printf("[%-0*.5x]\n", 5, 5));
	printf(" -0*.5x: %i\n\n", printf("[%-0*.5x]\n", 5, 5));
		// %X
	printf("********* %%X *********\n");
	printf(" *.5X: %i\n", ft_printf("[%*.5X]\n", 5, 5));
	printf(" *.5X: %i\n\n", printf("[%*.5X]\n", 5, 5));
		//
	printf(" -*.5X: %i\n", ft_printf("[%-*.5X]\n", 5, 5));
	printf(" -*.5X: %i\n\n", printf("[%-*.5X]\n", 5, 5));
		//
	printf(" 0*.5X: %i\n", ft_printf("[%0*.5X]\n", 5, 5));
	printf(" 0*.5X: %i\n\n", printf("[%0*.5X]\n", 5, 5));
		//
	printf(" 0-*.5X: %i\n", ft_printf("[%0-*.5X]\n", 5, 5));
	printf(" 0-*.5X: %i\n\n", printf("[%0-*.5X]\n", 5, 5));
		//
	printf(" -0*.5X: %i\n", ft_printf("[%-0*.5X]\n", 5, 5));
	printf(" -0*.5X: %i\n\n", printf("[%-0*.5X]\n", 5, 5));
		// %p
	printf("********* %%p *********\n");
	printf(" *.5p: %i\n", ft_printf("[%*.5p]\n", 5, &ptr));
	printf(" *.5p: %i\n\n", printf("[%*.5p]\n", 5, &ptr));
		//
	printf(" -*.5p: %i\n", ft_printf("[%-*.5p]\n", 5, &ptr));
	printf(" -*.5p: %i\n\n", printf("[%-*.5p]\n", 5, &ptr));
		//
	printf(" 0*.5p: %i\n", ft_printf("[%0*.5p]\n", 5, &ptr));
	printf(" 0*.5p: %i\n\n", printf("[%0*.5p]\n", 5, &ptr));
		//
	printf(" 0-*.5p: %i\n", ft_printf("[%0-*.5p]\n", 5, &ptr));
	printf(" 0-*.5p: %i\n\n", printf("[%0-*.5p]\n", 5, &ptr));
		//
	printf(" -0*.5p: %i\n", ft_printf("[%-0*.5p]\n", 5, &ptr));
	printf(" -0*.5p: %i\n\n", printf("[%-0*.5p]\n", 5, &ptr));
	
	//////////////////////////////////////////////////////////////////
	// width with *, negative width
	printf("* testing, with negative width\n");
		// %c
	printf("********* %%c *********\n");
	printf(" *.5c: %i\n", ft_printf("[%*.5c]\n", -5, 'c'));
	printf(" *.5c: %i\n\n", printf("[%*.5c]\n", -5, 'c'));
		//
	printf(" -*.5c: %i\n", ft_printf("[%-*.5c]\n", -5, 'c'));
	printf(" -*.5c: %i\n\n", printf("[%-*.5c]\n", -5, 'c'));
		//
	printf(" 0*.5c: %i\n", ft_printf("[%0*.5c]\n", -5, 'c'));
	printf(" 0*.5c: %i\n\n", printf("[%0*.5c]\n", -5, 'c'));
		//
	printf(" 0-*.5c: %i\n", ft_printf("[%0-*.5c]\n", -5, 'c'));
	printf(" 0-*.5c: %i\n\n", printf("[%*0-.5c]\n", -5, 'c'));
		//
	printf(" -0*.5c: %i\n", ft_printf("[%-0*.5c]\n", -5, 'c'));
	printf(" -0*.5c: %i\n\n", printf("[%-0*.5c]\n", -5, 'c'));
		// %s
	printf("********* %%s *********\n");
	printf(" *.5s: %i\n", ft_printf("[%*.5s]\n", -5, "hello world!"));
	printf(" *.5s: %i\n\n", printf("[%*.5s]\n", -5, "hello world!"));
		//
	printf(" -*.5s: %i\n", ft_printf("[%-*.5s]\n", -5, "hello world!"));
	printf(" -*.5s: %i\n\n", printf("[%-*.5s]\n", -5, "hello world!"));
		//
	printf(" 0*.5s: %i\n", ft_printf("[%0*.5s]\n", -5, "hello world!"));
	printf(" 0*.5s: %i\n\n", printf("[%0*.5s]\n", -5, "hello world!"));
		//
	printf(" 0-*.5s: %i\n", ft_printf("[%0-*.5s]\n", -5, "hello world!"));
	printf(" 0-*.5s: %i\n\n", printf("[%0-*.5s]\n", -5, "hello world!"));
		//
	printf(" -0*.5s: %i\n", ft_printf("[%-0*.5s]\n", -5, "hello world!"));
	printf(" -0*.5s: %i\n\n", printf("[%-0*.5s]\n", -5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********\n");
	printf(" *.5i: %i\n", ft_printf("[%*.5i]\n", -5, 5));
	printf(" *.5i: %i\n\n", printf("[%*.5i]\n", -5, 5));
		//
	printf(" -*.5i: %i\n", ft_printf("[%-*.5i]\n", -5, 5));
	printf(" -*.5i: %i\n\n", printf("[%-*.5i]\n", -5, 5));
		//
	printf(" 0*.5i: %i\n", ft_printf("[%0*.5i]\n", -5, 5));
	printf(" 0*.5i: %i\n\n", printf("[%0*.5i]\n", 5, 5));
		//
	printf(" 0-*.5i: %i\n", ft_printf("[%0-*.5i]\n", -5, 5));
	printf(" 0-*.5i: %i\n\n", printf("[%0-*.5i]\n", -5, 5));
		//
	printf(" -0*.5i: %i\n", ft_printf("[%-0*.5i]\n", -5, 5));
	printf(" -0*.5i: %i\n\n", printf("[%-0*.5i]\n", -5, 5));
		// %i negative
	printf("********* %%i, negative *********\n");
	printf(" *.5i: %i\n", ft_printf("[%*.5i]\n", -5, -5));
	printf(" *.5i: %i\n\n", printf("[%*.5i]\n", -5, -5));
		//
	printf(" -*.5i: %i\n", ft_printf("[%-*.5i]\n", -5, -5));
	printf(" -*.5i: %i\n\n", printf("[%-*.5i]\n", 5, -5));
		//
	printf(" 0*.5i: %i\n", ft_printf("[%0*.5i]\n", -5, -5));
	printf(" 0*.5i: %i\n\n", printf("[%0*.5i]\n", -5, -5));
		//
	printf(" 0-*.5i: %i\n", ft_printf("[%0-*.5i]\n", -5, -5));
	printf(" 0-*.5i: %i\n\n", printf("[%0-*.5i]\n", -5, -5));
		//
	printf(" -0*.5i: %i\n", ft_printf("[%-0*.5i]\n", -5, -5));
	printf(" -0*.5i: %i\n\n", printf("[%-0*.5i]\n", -5, -5));
		// %u
	printf("********* %%u *********\n");
	printf(" *.5u: %u\n", ft_printf("[%*.5u]\n", -5, 5));
	printf(" *.5u: %u\n\n", printf("[%*.5u]\n", -5, 5));
		//
	printf(" -*.5u: %i\n", ft_printf("[%-*.5u]\n", -5, 5));
	printf(" -*.5u: %i\n\n", printf("[%-*.5u]\n", -5, 5));
		//
	printf(" 0*.5u: %i\n", ft_printf("[%0*.5u]\n", -5, 5));
	printf(" 0*.5u: %i\n\n", printf("[%0*.5u]\n", -5, 5));
		//
	printf(" 0-*.5u: %i\n", ft_printf("[%0-*.5u]\n", -5, 5));
	printf(" 0-*.5u: %i\n\n", printf("[%0-*.5u]\n", -5, 5));
		//
	printf(" -0*.5u: %i\n", ft_printf("[%-0*.5u]\n", -5, 5));
	printf(" -0*.5u: %i\n\n", printf("[%-0*.5u]\n", -5, 5));
		// %d positive
	printf("********* %%d positive *********\n");
	printf(" *.5d: %i\n", ft_printf("[%*.5d]\n", -5, 5));
	printf(" *.5d: %i\n\n", printf("[%*.5d]\n", -5, 5));
		//
	printf(" -*.5d: %i\n", ft_printf("[%-*.5d]\n", -5, 5));
	printf(" -*.5d: %i\n\n", printf("[%-*.5d]\n", -5, 5));
		//
	printf(" 0*.5d: %i\n", ft_printf("[%0*.5d]\n", -5, 5));
	printf(" 0*.5d: %i\n\n", printf("[%0*.5d]\n", -5, 5));
		//
	printf(" 0-*.5d: %i\n", ft_printf("[%0-*.5d]\n", -5, 5));
	printf(" 0-*.5d: %i\n\n", printf("[%0-*.5d]\n", -5, 5));
		//
	printf(" -0*.5d: %i\n", ft_printf("[%-0*.5d]\n", -5, 5));
	printf(" -0*.5d: %i\n\n", printf("[%-0*.5d]\n", -5, 5));
		// %d negative
	printf("********* %%d negative *********\n");
	printf(" *.5d: %i\n", ft_printf("[%*.5d]\n", -5, -5));
	printf(" *.5d: %i\n\n", printf("[%*.5d]\n", -5, -5));
		//
	printf(" -*.5d: %i\n", ft_printf("[%-*.5d]\n", -5, -5));
	printf(" -*.5d: %i\n\n", printf("[%-*.5d]\n", -5, -5));
		//
	printf(" 0*.5d: %i\n", ft_printf("[%0*.5d]\n", -5, -5));
	printf(" 0*.5d: %i\n\n", printf("[%0*.5d]\n", -5, -5));
		//
	printf(" 0-*.5d: %i\n", ft_printf("[%0-*.5d]\n", -5, -5));
	printf(" 0-*.5d: %i\n\n", printf("[%0-*.5d]\n", -5, -5));
		//
	printf(" -0*.5d: %i\n", ft_printf("[%-0*.5d]\n", -5, -5));
	printf(" -0*.5d: %i\n\n", printf("[%-0*.5d]\n", -5, -5));
		// %x
	printf("********* %%x *********\n");
	printf(" *.5x: %i\n", ft_printf("[%*.5x]\n", -5, 5));
	printf(" *.5x: %i\n\n", printf("[%*.5x]\n", -5, 5));
		//
	printf(" -*.5x: %i\n", ft_printf("[%-*.5x]\n", -5, 5));
	printf(" -*.5x: %i\n\n", printf("[%-*.5x]\n", -5, 5));
		//
	printf(" 0*.5x: %i\n", ft_printf("[%0*.5x]\n", -5, 5));
	printf(" 0*.5x: %i\n\n", printf("[%0*.5x]\n", -5, 5));
		//
	printf(" 0-*.5x: %i\n", ft_printf("[%0-*.5x]\n", -5, 5));
	printf(" 0-*.5x: %i\n\n", printf("[%0-*.5x]\n", -5, 5));
		//
	printf(" -0*.5x: %i\n", ft_printf("[%-0*.5x]\n", -5, 5));
	printf(" -0*.5x: %i\n\n", printf("[%-0*.5x]\n", -5, 5));
		// %X
	printf("********* %%X *********\n");
	printf(" *.5X: %i\n", ft_printf("[%*.5X]\n", -5, 5));
	printf(" *.5X: %i\n\n", printf("[%*.5X]\n", -5, 5));
		//
	printf(" -*.5X: %i\n", ft_printf("[%-*.5X]\n", -5, 5));
	printf(" -*.5X: %i\n\n", printf("[%-*.5X]\n", -5, 5));
		//
	printf(" 0*.5X: %i\n", ft_printf("[%0*.5X]\n", -5, 5));
	printf(" 0*.5X: %i\n\n", printf("[%0*.5X]\n", -5, 5));
		//
	printf(" 0-*.5X: %i\n", ft_printf("[%0-*.5X]\n", -5, 5));
	printf(" 0-*.5X: %i\n\n", printf("[%0-*.5X]\n", -5, 5));
		//
	printf(" -0*.5X: %i\n", ft_printf("[%-0*.5X]\n", -5, 5));
	printf(" -0*.5X: %i\n\n", printf("[%-0*.5X]\n", -5, 5));
		// %p
	printf("********* %%p *********\n");
	printf(" *.5p: %i\n", ft_printf("[%*.5p]\n", -5, &ptr));
	printf(" *.5p: %i\n\n", printf("[%*.5p]\n", -5, &ptr));
		//
	printf(" -*.5p: %i\n", ft_printf("[%-*.5p]\n", -5, &ptr));
	printf(" -*.5p: %i\n\n", printf("[%-*.5p]\n", -5, &ptr));
		//
	printf(" 0*.5p: %i\n", ft_printf("[%0*.5p]\n", -5, &ptr));
	printf(" 0*.5p: %i\n\n", printf("[%0*.5p]\n", -5, &ptr));
		//
	printf(" 0-*.5p: %i\n", ft_printf("[%0-*.5p]\n", -5, &ptr));
	printf(" 0-*.5p: %i\n\n", printf("[%0-*.5p]\n", -5, &ptr));
		//
	printf(" -0*.5p: %i\n", ft_printf("[%-0*.5p]\n", -5, &ptr));
	printf(" -0*.5p: %i\n\n", printf("[%-0*.5p]\n", -5, &ptr));

	// width AND precision with *, positive precision and width
	printf("* testing, with positive precision and positive width\n");
	printf("********* %%c *********\n");
	printf(" *.*c: %i\n", ft_printf("[%*.*c]\n", 5, 5, 'c'));
	printf(" *.*c: %i\n\n", printf("[%*.*c]\n", 5, 5, 'c'));
		//
	printf(" -*.*c: %i\n", ft_printf("[%-*.*c]\n", 5, 5, 'c'));
	printf(" -*.*c: %i\n\n", printf("[%-*.*c]\n", 5, 5, 'c'));
		//
	printf(" 0*.*c: %i\n", ft_printf("[%0*.*c]\n", 5, 5, 'c'));
	printf(" 0*.*c: %i\n\n", printf("[%0*.*c]\n", 5, 5, 'c'));
		//
	printf(" 0-*.*c: %i\n", ft_printf("[%0-*.*c]\n", 5, 5, 'c'));
	printf(" 0-*.*c: %i\n\n", printf("[%0-*.*c]\n", 5, 5, 'c'));
		//
	printf(" -0*.*c: %i\n", ft_printf("[%-0*.*c]\n", 5, 5, 'c'));
	printf(" -0*.*c: %i\n\n", printf("[%-0*.*c]\n", 5, 5, 'c'));
		// %s
	printf("********* %%s *********\n");
	printf(" *.*s: %i\n", ft_printf("[%*.*s]\n", -5, 5, "hello world!"));
	printf(" *.*s: %i\n\n", printf("[%*.*s]\n", -5, 5, "hello world!"));
		//
	printf(" -*.*s: %i\n", ft_printf("[%-*.*s]\n", -5, 5, "hello world!"));
	printf(" -*.*s: %i\n\n", printf("[%-*.*s]\n", -5, 5, "hello world!"));
		//
	printf(" 0*.*s: %i\n", ft_printf("[%0*.*s]\n", -5, 5, "hello world!"));
	printf(" 0*.*s: %i\n\n", printf("[%0*.*s]\n", -5, 5, "hello world!"));
		//
	printf(" 0-*.*s: %i\n", ft_printf("[%0-*.*s]\n", -5, 5, "hello world!"));
	printf(" 0-*.*s: %i\n\n", printf("[%0-*.*s]\n", -5, 5, "hello world!"));
		//
	printf(" -0*.*s: %i\n", ft_printf("[%-0*.*s]\n", -5, 5, "hello world!"));
	printf(" -0*.*s: %i\n\n", printf("[%-0*.*s]\n", -5, 5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********\n");
	printf(" *.*i: %i\n", ft_printf("[%*.*i]\n", 5, 5, 5));
	printf(" *.*i: %i\n\n", printf("[%*.*i]\n", 5, 5, 5));
	//
	printf(" -*.*i: %i\n", ft_printf("[%-*.*i]\n", 5, 5, 5));
	printf(" -*.*i: %i\n\n", printf("[%-*.*i]\n", 5, 5, 5));
	//
	printf(" 0*.*i: %i\n", ft_printf("[%0*.*i]\n", 5, 5, 5));
	printf(" 0*.*i: %i\n\n", printf("[%0*.*i]\n", 5, 5, 5));
	//
	printf(" 0-*.*i: %i\n", ft_printf("[%0-*.*i]\n", 5, 5, 5));
	printf(" 0-*.*i: %i\n\n", printf("[%0-*.*i]\n", 5, 5, 5));
	//
	printf(" -0*.*i: %i\n", ft_printf("[%-0*.*i]\n", 5, 5, 5));
	printf(" -0*.*i: %i\n\n", printf("[%-0*.*i]\n", 5, 5, 5));
		// %i negative
	printf("********* %%i, negative *********\n");
	printf(" *.*i: %i\n", ft_printf("[%*.*i]\n", 5, 5, -5));
	printf(" *.*i: %i\n\n", printf("[%*.*i]\n", 5, 5, -5));
	//
	printf(" -*.*i: %i\n", ft_printf("[%-*.*i]\n", 5, 5, -5));
	printf(" -*.*i: %i\n\n", printf("[%-*.*i]\n", 5, 5, -5));
	//
	printf(" 0*.*i: %i\n", ft_printf("[%0*.*i]\n", 5, 5, -5));
	printf(" 0*.*i: %i\n\n", printf("[%0*.*i]\n", 5, 5, -5));
	//
	printf(" 0-*.*i: %i\n", ft_printf("[%0-*.*i]\n", 5, 5, -5));
	printf(" 0-*.*i: %i\n\n", printf("[%0-*.*i]\n", 5, 5, -5));
	//
	printf(" -0*.*i: %i\n", ft_printf("[%-0*.*i]\n", 5, 5, -5));
	printf(" -0*.*i: %i\n\n", printf("[%-0*.*i]\n", 5, 5, -5));
			// %d positive
	printf("********* %%d, positive *********\n");
	printf(" *.*d: %i\n", ft_printf("[%*.*d]\n", 5, 5, 5));
	printf(" *.*d: %i\n\n", printf("[%*.*d]\n", 5, 5, 5));
	//
	printf(" -*.*d: %i\n", ft_printf("[%-*.*d]\n", 5, 5, 5));
	printf(" -*.*d: %i\n\n", printf("[%-*.*d]\n", 5, 5, 5));
	//
	printf(" 0*.*d: %i\n", ft_printf("[%0*.*d]\n", 5, 5, 5));
	printf(" 0*.*d: %i\n\n", printf("[%0*.*d]\n", 5, 5, 5));
	//
	printf(" 0-*.*d: %i\n", ft_printf("[%0-*.*d]\n", 5, 5, 5));
	printf(" 0-*.*d: %i\n\n", printf("[%0-*.*d]\n", 5, 5, 5));
	//
	printf(" -0*.*d: %i\n", ft_printf("[%-0*.*d]\n", 5, 5, 5));
	printf(" -0*.*d: %i\n\n", printf("[%-0*.*d]\n", 5, 5, 5));
			// %d negative
	printf("********* %%d, negative *********\n");
	printf(" *.*d: %i\n", ft_printf("[%*.*d]\n", 5, 5, -5));
	printf(" *.*d: %i\n\n", printf("[%*.*d]\n", 5, 5, -5));
	//
	printf(" -*.*d: %i\n", ft_printf("[%-*.*d]\n", 5, 5, -5));
	printf(" -*.*d: %i\n\n", printf("[%-*.*d]\n", 5, 5, -5));
	//
	printf(" 0*.*d: %i\n", ft_printf("[%0*.*d]\n", 5, 5, -5));
	printf(" 0*.*d: %i\n\n", printf("[%0*.*d]\n", 5, 5, -5));
	//
	printf(" 0-*.*d: %i\n", ft_printf("[%0-*.*d]\n", 5, 5, -5));
	printf(" 0-*.*d: %i\n\n", printf("[%0-*.*d]\n", 5, 5, -5));
	//
	printf(" -0*.*d: %i\n", ft_printf("[%-0*.*d]\n", 5, 5, -5));
	printf(" -0*.*d: %i\n\n", printf("[%-0*.*d]\n", 5, 5, -5));
		// %u
	printf("********* %%u *********\n");
	printf(" *.*u: %i\n", ft_printf("[%*.*u]\n", 5, 5, 5));
	printf(" *.*u: %i\n\n", printf("[%*.*u]\n", 5, 5, 5));
	//
	printf(" -*.*u: %i\n", ft_printf("[%-*.*u]\n", 5, 5, 5));
	printf(" -*.*u: %i\n\n", printf("[%-*.*u]\n", 5, 5, 5));
	//
	printf(" 0*.*u: %i\n", ft_printf("[%0*.*u]\n", 5, 5, 5));
	printf(" 0*.*u: %i\n\n", printf("[%0*.*u]\n", 5, 5, 5));
	//
	printf(" 0-*.*u: %i\n", ft_printf("[%0-*.*u]\n", 5, 5, 5));
	printf(" 0-*.*u: %i\n\n", printf("[%0-*.*u]\n", 5, 5, 5));
	//
	printf(" -0*.*u: %i\n", ft_printf("[%-0*.*u]\n", 5, 5, 5));
	printf(" -0*.*u: %i\n\n", printf("[%-0*.*u]\n", 5, 5, 5));
		// %x
	printf("********* %%x *********\n");
	printf(" *.*x: %i\n", ft_printf("[%*.*x]\n", 5, 5, 5));
	printf(" *.*x: %i\n\n", printf("[%*.*x]\n", 5, 5, 5));
	//
	printf(" -*.*x: %i\n", ft_printf("[%-*.*x]\n", 5, 5, 5));
	printf(" -*.*x: %i\n\n", printf("[%-*.*x]\n", 5, 5, 5));
	//
	printf(" 0*.*x: %i\n", ft_printf("[%0*.*x]\n", 5, 5, 5));
	printf(" 0*.*x: %i\n\n", printf("[%0*.*x]\n", 5, 5, 5));
	//
	printf(" 0-*.*x: %i\n", ft_printf("[%0-*.*x]\n", 5, 5, 5));
	printf(" 0-*.*x: %i\n\n", printf("[%0-*.*x]\n", 5, 5, 5));
	//
	printf(" -0*.*x: %i\n", ft_printf("[%-0*.*x]\n", 5, 5, 5));
	printf(" -0*.*x: %i\n\n", printf("[%-0*.*x]\n", 5, 5, 5));
		// %p
	printf("********* %%p *********\n");
	printf(" *.*p: %i\n", ft_printf("[%*.*p]\n", 5, 5, &ptr));
	printf(" *.*p: %i\n\n", printf("[%*.*p]\n", 5, 5, &ptr));
	//
	printf(" -*.*p: %i\n", ft_printf("[%-*.*p]\n", 5, 5, &ptr));
	printf(" -*.*p: %i\n\n", printf("[%-*.*p]\n", 5, 5, &ptr));
	//
	printf(" 0*.*p: %i\n", ft_printf("[%0*.*p]\n", 5, 5, &ptr));
	printf(" 0*.*p: %i\n\n", printf("[%0*.*p]\n", 5, 5, &ptr));
	//
	printf(" 0-*.*p: %i\n", ft_printf("[%0-*.*p]\n", 5, 5, &ptr));
	printf(" 0-*.*p: %i\n\n", printf("[%0-*.*p]\n", 5, 5, &ptr));
	//
	printf(" -0*.*p: %i\n", ft_printf("[%-0*.*p]\n", 5, 5, &ptr));
	printf(" -0*.*p: %i\n\n", printf("[%-0*.*p]\n", 5, 5, &ptr));


	// END OF BIT: width AND precision with *, positive precision and width
	
	// width AND precision with *, negative width and positive precision
	printf("* testing, with positive precision negative width\n");
	printf("********* %%c *********\n");
	printf(" *.*c: %i\n", ft_printf("[%*.*c]\n", -5, 5, 'c'));
	printf(" *.*c: %i\n\n", printf("[%*.*c]\n", -5, 5, 'c'));
		//
	printf(" -*.*c: %i\n", ft_printf("[%-*.*c]\n", -5, 5, 'c'));
	printf(" -*.*c: %i\n\n", printf("[%-*.*c]\n", -5, 5, 'c'));
		//
	printf(" 0*.*c: %i\n", ft_printf("[%0*.*c]\n", -5, 5, 'c'));
	printf(" 0*.*c: %i\n\n", printf("[%0*.*c]\n", -5, 5, 'c'));
		//
	printf(" 0-*.*c: %i\n", ft_printf("[%0-*.*c]\n", -5, 5, 'c'));
	printf(" 0-*.*c: %i\n\n", printf("[%0-*.*c]\n", -5, 5, 'c'));
		//
	printf(" -0*.*c: %i\n", ft_printf("[%-0*.*c]\n", -5, 5, 'c'));
	printf(" -0*.*c: %i\n\n", printf("[%-0*.*c]\n", -5, 5, 'c'));
		// %s
	printf("********* %%s *********\n");
	printf(" *.*s: %i\n", ft_printf("[%*.*s]\n", -5, 5, "hello world!"));
	printf(" *.*s: %i\n\n", printf("[%*.*s]\n", -5, 5, "hello world!"));
		//
	printf(" -*.*s: %i\n", ft_printf("[%-*.*s]\n", -5, 5, "hello world!"));
	printf(" -*.*s: %i\n\n", printf("[%-*.*s]\n", -5, 5, "hello world!"));
		//
	printf(" 0*.*s: %i\n", ft_printf("[%0*.*s]\n", -5, 5, "hello world!"));
	printf(" 0*.*s: %i\n\n", printf("[%0*.*s]\n", -5, 5, "hello world!"));
		//
	printf(" 0-*.*s: %i\n", ft_printf("[%0-*.*s]\n", -5, 5, "hello world!"));
	printf(" 0-*.*s: %i\n\n", printf("[%0-*.*s]\n", -5, 5, "hello world!"));
		//
	printf(" -0*.*s: %i\n", ft_printf("[%-0*.*s]\n", -5, 5, "hello world!"));
	printf(" -0*.*s: %i\n\n", printf("[%-0*.*s]\n", -5, 5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********\n");
	printf(" *.*i: %i\n", ft_printf("[%*.*i]\n", -5, 5, 5));
	printf(" *.*i: %i\n\n", printf("[%*.*i]\n", -5, 5, 5));
	//
	printf(" -*.*i: %i\n", ft_printf("[%-*.*i]\n", -5, 5, 5));
	printf(" -*.*i: %i\n\n", printf("[%-*.*i]\n", -5, 5, 5));
	//
	printf(" 0*.*i: %i\n", ft_printf("[%0*.*i]\n", -5, 5, 5));
	printf(" 0*.*i: %i\n\n", printf("[%0*.*i]\n", -5, 5, 5));
	//
	printf(" 0-*.*i: %i\n", ft_printf("[%0-*.*i]\n", -5, 5, 5));
	printf(" 0-*.*i: %i\n\n", printf("[%0-*.*i]\n", -5, 5, 5));
	//
	printf(" -0*.*i: %i\n", ft_printf("[%-0*.*i]\n", -5, 5, 5));
	printf(" -0*.*i: %i\n\n", printf("[%-0*.*i]\n", -5, 5, 5));
			// %i negative
	printf("********* %%i, negative *********\n");
	printf(" *.*i: %i\n", ft_printf("[%*.*i]\n", -5, 5, -5));
	printf(" *.*i: %i\n\n", printf("[%*.*i]\n", -5, 5, -5));
	//
	printf(" -*.*i: %i\n", ft_printf("[%-*.*i]\n", -5, 5, -5));
	printf(" -*.*i: %i\n\n", printf("[%-*.*i]\n", -5, 5, -5));
	//
	printf(" 0*.*i: %i\n", ft_printf("[%0*.*i]\n", -5, 5, -5));
	printf(" 0*.*i: %i\n\n", printf("[%0*.*i]\n", -5, 5, -5));
	//
	printf(" 0-*.*i: %i\n", ft_printf("[%0-*.*i]\n", -5, 5, -5));
	printf(" 0-*.*i: %i\n\n", printf("[%0-*.*i]\n", -5, 5, -5));
	//
	printf(" -0*.*i: %i\n", ft_printf("[%-0*.*i]\n", -5, 5, -5));
	printf(" -0*.*i: %i\n\n", printf("[%-0*.*i]\n", -5, 5, -5));
			// %d positive
	printf("********* %%d, positive *********\n");
	printf(" *.*d: %i\n", ft_printf("[%*.*d]\n", -5, 5, 5));
	printf(" *.*d: %i\n\n", printf("[%*.*d]\n", -5, 5, 5));
	//
	printf(" -*.*d: %i\n", ft_printf("[%-*.*d]\n", -5, 5, 5));
	printf(" -*.*d: %i\n\n", printf("[%-*.*d]\n", -5, 5, 5));
	//
	printf(" 0*.*d: %i\n", ft_printf("[%0*.*d]\n", -5, 5, 5));
	printf(" 0*.*d: %i\n\n", printf("[%0*.*d]\n", -5, 5, 5));
	//
	printf(" 0-*.*d: %i\n", ft_printf("[%0-*.*d]\n", -5, 5, 5));
	printf(" 0-*.*d: %i\n\n", printf("[%0-*.*d]\n", -5, 5, 5));
	//
	printf(" -0*.*d: %i\n", ft_printf("[%-0*.*d]\n", -5, 5, 5));
	printf(" -0*.*d: %i\n\n", printf("[%-0*.*d]\n", -5, 5, 5));
			// %d negative
	printf("********* %%d, negative *********\n");
	printf(" *.*d: %i\n", ft_printf("[%*.*d]\n", -5, 5, -5));
	printf(" *.*d: %i\n\n", printf("[%*.*d]\n", -5, 5, -5));
	//
	printf(" -*.*d: %i\n", ft_printf("[%-*.*d]\n", -5, 5, -5));
	printf(" -*.*d: %i\n\n", printf("[%-*.*d]\n", -5, 5, -5));
	//
	printf(" 0*.*d: %i\n", ft_printf("[%0*.*d]\n", -5, 5, -5));
	printf(" 0*.*d: %i\n\n", printf("[%0*.*d]\n", -5, 5, -5));
	//
	printf(" 0-*.*d: %i\n", ft_printf("[%0-*.*d]\n", -5, 5, -5));
	printf(" 0-*.*d: %i\n\n", printf("[%0-*.*d]\n", -5, 5, -5));
	//
	printf(" -0*.*d: %i\n", ft_printf("[%-0*.*d]\n", -5, 5, -5));
	printf(" -0*.*d: %i\n\n", printf("[%-0*.*d]\n", -5, 5, -5));
		// %u
	printf("********* %%u *********\n");
	printf(" *.*u: %i\n", ft_printf("[%*.*u]\n", -5, 5, 5));
	printf(" *.*u: %i\n\n", printf("[%*.*u]\n", -5, 5, 5));
	//
	printf(" -*.*u: %i\n", ft_printf("[%-*.*u]\n", -5, 5, 5));
	printf(" -*.*u: %i\n\n", printf("[%-*.*u]\n", -5, 5, 5));
	//
	printf(" 0*.*u: %i\n", ft_printf("[%0*.*u]\n", -5, 5, 5));
	printf(" 0*.*u: %i\n\n", printf("[%0*.*u]\n", -5, 5, 5));
	//
	printf(" 0-*.*u: %i\n", ft_printf("[%0-*.*u]\n", -5, 5, 5));
	printf(" 0-*.*u: %i\n\n", printf("[%0-*.*u]\n", -5, 5, 5));
	//
	printf(" -0*.*u: %i\n", ft_printf("[%-0*.*u]\n", -5, 5, 5));
	printf(" -0*.*u: %i\n\n", printf("[%-0*.*u]\n", -5, 5, 5));
		// %x
	printf("********* %%x *********\n");
	printf(" *.*x: %i\n", ft_printf("[%*.*x]\n", -5, 5, 5));
	printf(" *.*x: %i\n\n", printf("[%*.*x]\n", -5, 5, 5));
	//
	printf(" -*.*x: %i\n", ft_printf("[%-*.*x]\n", -5, 5, 5));
	printf(" -*.*x: %i\n\n", printf("[%-*.*x]\n", -5, 5, 5));
	//
	printf(" 0*.*x: %i\n", ft_printf("[%0*.*x]\n", -5, 5, 5));
	printf(" 0*.*x: %i\n\n", printf("[%0*.*x]\n", -5, 5, 5));
	//
	printf(" 0-*.*x: %i\n", ft_printf("[%0-*.*x]\n", -5, 5, 5));
	printf(" 0-*.*x: %i\n\n", printf("[%0-*.*x]\n", -5, 5, 5));
	//
	printf(" -0*.*x: %i\n", ft_printf("[%-0*.*x]\n", -5, 5, 5));
	printf(" -0*.*x: %i\n\n", printf("[%-0*.*x]\n", -5, 5, 5));
		// %p
	printf("********* %%p *********\n");
	printf(" *.*p: %i\n", ft_printf("[%*.*p]\n", -5, 5, &ptr));
	printf(" *.*p: %i\n\n", printf("[%*.*p]\n", -5, 5, &ptr));
	//
	printf(" -*.*p: %i\n", ft_printf("[%-*.*p]\n", -5, 5, &ptr));
	printf(" -*.*p: %i\n\n", printf("[%-*.*p]\n", -5, 5, &ptr));
	//
	printf(" 0*.*p: %i\n", ft_printf("[%0*.*p]\n", -5, 5, &ptr));
	printf(" 0*.*p: %i\n\n", printf("[%0*.*p]\n", -5, 5, &ptr));
	//
	printf(" 0-*.*p: %i\n", ft_printf("[%0-*.*p]\n", -5, 5, &ptr));
	printf(" 0-*.*p: %i\n\n", printf("[%0-*.*p]\n", -5, 5, &ptr));
	//
	printf(" -0*.*p: %i\n", ft_printf("[%-0*.*p]\n", -5, 5, &ptr));
	printf(" -0*.*p: %i\n\n", printf("[%-0*.*p]\n", -5, 5, &ptr));

	// END OF BIT: width AND precision with *, negative with, positive precision
	
	// width AND precision with *, negative precision and positive width
	printf("* testing, with negative precision and positive width\n");
		// %c
	printf("********* %%c *********\n");
	printf(" *.*c: %i\n", ft_printf("[%*.*c]\n", 5, -5, 'c'));
	printf(" *.*c: %i\n\n", printf("[%*.*c]\n", 5, -5, 'c'));
		//
	printf(" -*.*c: %i\n", ft_printf("[%-*.*c]\n", 5, -5, 'c'));
	printf(" -*.*c: %i\n\n", printf("[%-*.*c]\n", 5, -5, 'c'));
		//
	printf(" 0*.*c: %i\n", ft_printf("[%0*.*c]\n", 5, -5, 'c'));
	printf(" 0*.*c: %i\n\n", printf("[%0*.*c]\n", 5, -5, 'c'));
		//
	printf(" 0-*.*c: %i\n", ft_printf("[%0-*.*c]\n", 5, -5, 'c'));
	printf(" 0-*.*c: %i\n\n", printf("[%0-*.*c]\n", 5, -5, 'c'));
		//
	printf(" -0*.*c: %i\n", ft_printf("[%-0*.*c]\n", 5, -5, 'c'));
	printf(" -0*.*c: %i\n\n", printf("[%-0*.*c]\n", 5, -5, 'c'));
		// %s
	printf("********* %%s *********\n");
	printf(" *.*s: %i\n", ft_printf("[%*.*s]\n", 5, -5, "hello world!"));
	printf(" *.*s: %i\n\n", printf("[%*.*s]\n", 5, -5, "hello world!"));
		//
	printf(" -*.*s: %i\n", ft_printf("[%-*.*s]\n", 5, -5, "hello world!"));
	printf(" -*.*s: %i\n\n", printf("[%-*.*s]\n", 5, -5, "hello world!"));
		//
	printf(" 0*.*s: %i\n", ft_printf("[%0*.*s]\n", 5, -5, "hello world!"));
	printf(" 0*.*s: %i\n\n", printf("[%0*.*s]\n", 5, -5, "hello world!"));
		//
	printf(" 0-*.*s: %i\n", ft_printf("[%0-*.*s]\n", 5, -5, "hello world!"));
	printf(" 0-*.*s: %i\n\n", printf("[%0-*.*s]\n", 5, -5, "hello world!"));
		//
	printf(" -0*.*s: %i\n", ft_printf("[%-0*.*s]\n", 5, -5, "hello world!"));
	printf(" -0*.*s: %i\n\n", printf("[%-0*.*s]\n", 5, -5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********\n");
	printf(" *.*i: %i\n", ft_printf("[%*.*i]\n", 5, -5, 5));
	printf(" *.*i: %i\n\n", printf("[%*.*i]\n", 5, -5, 5));
	//
	printf(" -*.*i: %i\n", ft_printf("[%-*.*i]\n", 5, -5, 5));
	printf(" -*.*i: %i\n\n", printf("[%-*.*i]\n", 5, -5, 5));
	//
	printf(" 0*.*i: %i\n", ft_printf("[%0*.*i]\n", 5, -5, 5));
	printf(" 0*.*i: %i\n\n", printf("[%0*.*i]\n", 5, -5, 5));
	//
	printf(" 0-*.*i: %i\n", ft_printf("[%0-*.*i]\n", 5, -5, 5));
	printf(" 0-*.*i: %i\n\n", printf("[%0-*.*i]\n", 5, -5, 5));
	//
	printf(" -0*.*i: %i\n", ft_printf("[%-0*.*i]\n", 5, -5, 5));
	printf(" -0*.*i: %i\n\n", printf("[%-0*.*i]\n", 5, -5, 5));
		// %i negative
	printf("********* %%i, negative *********\n");
	printf(" *.*i: %i\n", ft_printf("[%*.*i]\n", 5, -5, -5));
	printf(" *.*i: %i\n\n", printf("[%*.*i]\n", 5, -5, -5));
	//
	printf(" -*.*i: %i\n", ft_printf("[%-*.*i]\n", 5, -5, -5));
	printf(" -*.*i: %i\n\n", printf("[%-*.*i]\n", 5, -5, -5));
	//
	printf(" 0*.*i: %i\n", ft_printf("[%0*.*i]\n", 5, -5, -5));
	printf(" 0*.*i: %i\n\n", printf("[%0*.*i]\n", 5, -5, -5));
	//
	printf(" 0-*.*i: %i\n", ft_printf("[%0-*.*i]\n", 5, -5, -5));
	printf(" 0-*.*i: %i\n\n", printf("[%0-*.*i]\n", 5, -5, -5));
	//
	printf(" -0*.*i: %i\n", ft_printf("[%-0*.*i]\n", 5, -5, -5));
	printf(" -0*.*i: %i\n\n", printf("[%-0*.*i]\n", 5, -5, -5));
		// %d positive
	printf("********* %%d, positive *********\n");
	printf(" *.*d: %i\n", ft_printf("[%*.*d]\n", 5, -5, 5));
	printf(" *.*d: %i\n\n", printf("[%*.*d]\n", 5, -5, 5));
	//
	printf(" -*.*d: %i\n", ft_printf("[%-*.*d]\n", 5, -5, 5));
	printf(" -*.*d: %i\n\n", printf("[%-*.*d]\n", 5, -5, 5));
	//
	printf(" 0*.*d: %i\n", ft_printf("[%0*.*d]\n", 5, -5, 5));
	printf(" 0*.*d: %i\n\n", printf("[%0*.*d]\n", 5, -5, 5));
	//
	printf(" 0-*.*d: %i\n", ft_printf("[%0-*.*d]\n", 5, -5, 5));
	printf(" 0-*.*d: %i\n\n", printf("[%0-*.*d]\n", 5, -5, 5));
	//
	printf(" -0*.*d: %i\n", ft_printf("[%-0*.*d]\n", 5, -5, 5));
	printf(" -0*.*d: %i\n\n", printf("[%-0*.*d]\n", 5, -5, 5));
		// %d negative
	printf("********* %%d, negative *********");
	printf(" *.*d: %i\n", ft_printf("[%*.*d]\n", 5, -5, -5));
	printf(" *.*d: %i\n\n", printf("[%*.*d]\n", 5, -5, -5));
	//
	printf(" -*.*d: %i\n", ft_printf("[%-*.*d]\n", 5, -5, -5));
	printf(" -*.*d: %i\n\n", printf("[%-*.*d]\n", 5, -5, -5));
	//
	printf(" 0*.*d: %i\n", ft_printf("[%0*.*d]\n", 5, -5, -5));
	printf(" 0*.*d: %i\n\n", printf("[%0*.*d]\n", 5, -5, -5));
	//
	printf(" 0-*.*d: %i\n", ft_printf("[%0-*.*d]\n", 5, -5, -5));
	printf(" 0-*.*d: %i\n\n", printf("[%0-*.*d]\n", 5, -5, -5));
	//
	printf(" -0*.*d: %i\n", ft_printf("[%-0*.*d]\n", 5, -5, -5));
	printf(" -0*.*d: %i\n\n", printf("[%-0*.*d]\n", 5, -5, -5));
			// %u
	printf("********* %%u *********\n");
	printf(" *.*u: %i\n", ft_printf("[%*.*u]\n", 5, -5, 5));
	printf(" *.*u: %i\n\n", printf("[%*.*u]\n", 5, -5, 5));
	//
	printf(" -*.*u: %i\n", ft_printf("[%-*.*u]\n", 5, -5, 5));
	printf(" -*.*u: %i\n\n", printf("[%-*.*u]\n", 5, -5, 5));
	//
	printf(" 0*.*u: %i\n", ft_printf("[%0*.*u]\n", 5, -5, 5));
	printf(" 0*.*u: %i\n\n", printf("[%0*.*u]\n", 5, -5, 5));
	//
	printf(" 0-*.*u: %i\n", ft_printf("[%0-*.*u]\n", 5, -5, 5));
	printf(" 0-*.*u: %i\n\n", printf("[%0-*.*u]\n", 5, -5, 5));
	//
	printf(" -0*.*u: %i\n", ft_printf("[%-0*.*u]\n", 5, -5, 5));
	printf(" -0*.*u: %i\n\n", printf("[%-0*.*u]\n", 5, -5, 5));
			// %x
	printf("********* %%x *********\n");
	printf(" *.*x: %i\n", ft_printf("[%*.*x]\n", 5, -5, 5));
	printf(" *.*x: %i\n\n", printf("[%*.*x]\n", 5, -5, 5));
	//
	printf(" -*.*x: %i\n", ft_printf("[%-*.*x]\n", 5, -5, 5));
	printf(" -*.*x: %i\n\n", printf("[%-*.*x]\n", 5, -5, 5));
	//
	printf(" 0*.*x: %i\n", ft_printf("[%0*.*x]\n", 5, -5, 5));
	printf(" 0*.*x: %i\n\n", printf("[%0*.*x]\n", 5, -5, 5));
	//
	printf(" 0-*.*x: %i\n", ft_printf("[%0-*.*x]\n", 5, -5, 5));
	printf(" 0-*.*x: %i\n\n", printf("[%0-*.*x]\n", 5, -5, 5));
	//
	printf(" -0*.*x: %i\n", ft_printf("[%-0*.*x]\n", 5, -5, 5));
	printf(" -0*.*x: %i\n\n", printf("[%-0*.*x]\n", 5, -5, 5));
		// %p
	printf("********* %%p *********\n");
	printf(" *.*p: %i\n", ft_printf("[%*.*p]\n", 5, -5, &ptr));
	printf(" *.*p: %i\n\n", printf("[%*.*p]\n", 5, -5, &ptr));
	//
	printf(" -*.*p: %i\n", ft_printf("[%-*.*p]\n", 5, -5, &ptr));
	printf(" -*.*p: %i\n\n", printf("[%-*.*p]\n", 5, -5, &ptr));
	//
	printf(" 0*.*p: %i\n", ft_printf("[%0*.*p]\n", 5, -5, &ptr));
	printf(" 0*.*p: %i\n\n", printf("[%0*.*p]\n", 5, -5, &ptr));
	//
	printf(" 0-*.*p: %i\n", ft_printf("[%0-*.*p]\n", 5, -5, &ptr));
	printf(" 0-*.*p: %i\n\n", printf("[%0-*.*p]\n", 5, -5, &ptr));
	//
	printf(" -0*.*p: %i\n", ft_printf("[%-0*.*p]\n", 5, -5, &ptr));
	printf(" -0*.*p: %i\n\n", printf("[%-0*.*p]\n", 5, -5, &ptr));

	// END OF BIT: width AND precision with *, positive width, negative precision

	//////////////////////////////////////////////////////	
	// width AND precision with *, negative precision and negative width
	printf("* testing, with negative precision and negative width\n");
		// %c
	printf("********* %%c *********\n");
	printf(" *.*c: %i\n", ft_printf("[%*.*c]\n", -5, -5, 'c'));
	printf(" *.*c: %i\n\n", printf("[%*.*c]\n", -5, -5, 'c'));
		//
	printf(" -*.*c: %i\n", ft_printf("[%-*.*c]\n", -5, -5, 'c'));
	printf(" -*.*c: %i\n\n", printf("[%-*.*c]\n", -5, -5, 'c'));
		//
	printf(" 0*.*c: %i\n", ft_printf("[%0*.*c]\n", -5, -5, 'c'));
	printf(" 0*.*c: %i\n\n", printf("[%0*.*c]\n", -5, -5, 'c'));
		//
	printf(" 0-*.*c: %i\n", ft_printf("[%0-*.*c]\n", -5, -5, 'c'));
	printf(" 0-*.*c: %i\n\n", printf("[%0-*.*c]\n", -5, -5, 'c'));
		//
	printf(" -0*.*c: %i\n", ft_printf("[%-0*.*c]\n", -5, -5, 'c'));
	printf(" -0*.*c: %i\n\n", printf("[%-0*.*c]\n", -5, -5, 'c'));
		// %s
	printf("********* %%s *********\n");
	printf(" *.*s: %i\n", ft_printf("[%*.*s]\n", -5, -5, "hello world!"));
	printf(" *.*s: %i\n\n", printf("[%*.*s]\n", -5, -5, "hello world!"));
		//
	printf(" -*.*s: %i\n", ft_printf("[%-*.*s]\n", -5, -5, "hello world!"));
	printf(" -*.*s: %i\n\n", printf("[%-*.*s]\n", -5, -5, "hello world!"));
		//
	printf(" 0*.*s: %i\n", ft_printf("[%0*.*s]\n", -5, -5, "hello world!"));
	printf(" 0*.*s: %i\n\n", printf("[%0*.*s]\n", -5, -5, "hello world!"));
		//
	printf(" 0-*.*s: %i\n", ft_printf("[%0-*.*s]\n", -5, -5, "hello world!"));
	printf(" 0-*.*s: %i\n\n", printf("[%0-*.*s]\n", -5, -5, "hello world!"));
		//
	printf(" -0*.*s: %i\n", ft_printf("[%-0*.*s]\n", -5, -5, "hello world!"));
	printf(" -0*.*s: %i\n\n", printf("[%-0*.*s]\n", -5, -5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********\n");
	printf(" *.*i: %i\n", ft_printf("[%*.*i]\n", -5, -5, 5));
	printf(" *.*i: %i\n\n", printf("[%*.*i]\n", -5, -5, 5));
	//
	printf(" -*.*i: %i\n", ft_printf("[%-*.*i]\n", -5, -5, 5));
	printf(" -*.*i: %i\n\n", printf("[%-*.*i]\n", -5, -5, 5));
	//
	printf(" 0*.*i: %i\n", ft_printf("[%0*.*i]\n", -5, -5, 5));
	printf(" 0*.*i: %i\n\n", printf("[%0*.*i]\n", -5, -5, 5));
	//
	printf(" 0-*.*i: %i\n", ft_printf("[%0-*.*i]\n", -5, -5, 5));
	printf(" 0-*.*i: %i\n\n", printf("[%0-*.*i]\n", -5, -5, 5));
	//
	printf(" -0*.*i: %i\n", ft_printf("[%-0*.*i]\n", -5, -5, 5));
	printf(" -0*.*i: %i\n\n", printf("[%-0*.*i]\n", -5, -5, 5));
		// %i negative
	printf("********* %%i, negative *********\n");
	printf(" *.*i: %i\n", ft_printf("[%*.*i]\n", -5, -5, -5));
	printf(" *.*i: %i\n\n", printf("[%*.*i]\n", -5, -5, -5));
	//
	printf(" -*.*i: %i\n", ft_printf("[%-*.*i]\n", -5, -5, -5));
	printf(" -*.*i: %i\n\n", printf("[%-*.*i]\n", -5, -5, -5));
	//
	printf(" 0*.*i: %i\n", ft_printf("[%0*.*i]\n", -5, -5, -5));
	printf(" 0*.*i: %i\n\n", printf("[%0*.*i]\n", -5, -5, -5));
	//
	printf(" 0-*.*i: %i\n", ft_printf("[%0-*.*i]\n", -5, -5, -5));
	printf(" 0-*.*i: %i\n\n", printf("[%0-*.*i]\n", -5, -5, -5));
	//
	printf(" -0*.*i: %i\n", ft_printf("[%-0*.*i]\n", -5, -5, -5));
	printf(" -0*.*i: %i\n\n", printf("[%-0*.*i]\n", -5, -5, -5));
		// %d positive
	printf("********* %%d, positive *********\n");
	printf(" *.*d: %i\n", ft_printf("[%*.*d]\n", -5, -5, 5));
	printf(" *.*d: %i\n\n", printf("[%*.*d]\n", -5, -5, 5));
	//
	printf(" -*.*d: %i\n", ft_printf("[%-*.*d]\n", -5, -5, 5));
	printf(" -*.*d: %i\n\n", printf("[%-*.*d]\n", -5, -5, 5));
	//
	printf(" 0*.*d: %i\n", ft_printf("[%0*.*d]\n", -5, -5, 5));
	printf(" 0*.*d: %i\n\n", printf("[%0*.*d]\n", -5, -5, 5));
	//
	printf(" 0-*.*d: %i\n", ft_printf("[%0-*.*d]\n", -5, -5, 5));
	printf(" 0-*.*d: %i\n\n", printf("[%0-*.*d]\n", -5, -5, 5));
	//
	printf(" -0*.*d: %i\n", ft_printf("[%-0*.*d]\n", -5, -5, 5));
	printf(" -0*.*d: %i\n\n", printf("[%-0*.*d]\n", -5, -5, 5));
		// %d negative
	printf("********* %%d, negative *********\n");
	printf(" *.*d: %i\n", ft_printf("[%*.*d]\n", -5, -5, -5));
	printf(" *.*d: %i\n\n", printf("[%*.*d]\n", -5, -5, -5));
	//
	printf(" -*.*d: %i\n", ft_printf("[%-*.*d]\n", -5, -5, -5));
	printf(" -*.*d: %i\n\n", printf("[%-*.*d]\n", -5, -5, -5));
	//
	printf(" 0*.*d: %i\n", ft_printf("[%0*.*d]\n", -5, -5, -5));
	printf(" 0*.*d: %i\n\n", printf("[%0*.*d]\n", -5, -5, -5));
	//
	printf(" 0-*.*d: %i\n", ft_printf("[%0-*.*d]\n", -5, -5, -5));
	printf(" 0-*.*d: %i\n\n", printf("[%0-*.*d]\n", -5, -5, -5));
	//
	printf(" -0*.*d: %i\n", ft_printf("[%-0*.*d]\n", -5, -5, -5));
	printf(" -0*.*d: %i\n\n", printf("[%-0*.*d]\n", -5, -5, -5));
			// %u
	printf("********* %%u *********\n");
	printf(" *.*u: %i\n", ft_printf("[%*.*u]\n", -5, -5, 5));
	printf(" *.*u: %i\n\n", printf("[%*.*u]\n", -5, -5, 5));
	//
	printf(" -*.*u: %i\n", ft_printf("[%-*.*u]\n", -5, -5, 5));
	printf(" -*.*u: %i\n\n", printf("[%-*.*u]\n", -5, -5, 5));
	//
	printf(" 0*.*u: %i\n", ft_printf("[%0*.*u]\n", -5, -5, 5));
	printf(" 0*.*u: %i\n\n", printf("[%0*.*u]\n", -5, -5, 5));
	//
	printf(" 0-*.*u: %i\n", ft_printf("[%0-*.*u]\n", -5, -5, 5));
	printf(" 0-*.*u: %i\n\n", printf("[%0-*.*u]\n", -5, -5, 5));
	//
	printf(" -0*.*u: %i\n", ft_printf("[%-0*.*u]\n", -5, -5, 5));
	printf(" -0*.*u: %i\n\n", printf("[%-0*.*u]\n", -5, -5, 5));
			// %x
	printf("********* %%x *********\n");
	printf(" *.*x: %i\n", ft_printf("[%*.*x]\n", -5, -5, 5));
	printf(" *.*x: %i\n\n", printf("[%*.*x]\n", -5, -5, 5));
	//
	printf(" -*.*x: %i\n", ft_printf("[%-*.*x]\n", -5, -5, 5));
	printf(" -*.*x: %i\n\n", printf("[%-*.*x]\n", -5, -5, 5));
	//
	printf(" 0*.*x: %i\n", ft_printf("[%0*.*x]\n", -5, -5, 5));
	printf(" 0*.*x: %i\n\n", printf("[%0*.*x]\n", -5, -5, 5));
	//
	printf(" 0-*.*x: %i\n", ft_printf("[%0-*.*x]\n", -5, -5, 5));
	printf(" 0-*.*x: %i\n\n", printf("[%0-*.*x]\n", -5, -5, 5));
	//
	printf(" -0*.*x: %i\n", ft_printf("[%-0*.*x]\n", -5, -5, 5));
	printf(" -0*.*x: %i\n\n", printf("[%-0*.*x]\n", -5, -5, 5));
		// %p
	printf("********* %%p *********\n");
	printf(" *.*p: %i\n", ft_printf("[%*.*p]\n", -5, -5, &ptr));
	printf(" *.*p: %i\n\n", printf("[%*.*p]\n", -5, -5, &ptr));
	//
	printf(" -*.*p: %i\n", ft_printf("[%-*.*p]\n", -5, -5, &ptr));
	printf(" -*.*p: %i\n\n", printf("[%-*.*p]\n", -5, -5, &ptr));
	//
	printf(" 0*.*p: %i\n", ft_printf("[%0*.*p]\n", -5, -5, &ptr));
	printf(" 0*.*p: %i\n\n", printf("[%0*.*p]\n", -5, -5, &ptr));
	//
	printf(" 0-*.*p: %i\n", ft_printf("[%0-*.*p]\n", -5, -5, &ptr));
	printf(" 0-*.*p: %i\n\n", printf("[%0-*.*p]\n", -5, -5, &ptr));
	//
	printf(" -0*.*p: %i\n", ft_printf("[%-0*.*p]\n", -5, -5, &ptr));
	printf(" -0*.*p: %i\n\n", printf("[%-0*.*p]\n", -5, -5, &ptr));
	// END OF BIT: width AND precision with *, negative precision and negative width


}