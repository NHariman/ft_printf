/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   astrix_precision_with_width_tests.c                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 15:11:28 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/11 13:30:36 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int *ptr;

	ptr = 0;
		////////////////////////////////////////////////////////////////////
	// precision with *, positive precision
	printf("* testing, with positive precision\n");
		// %c
	printf("********* %%c *********\n");
	printf(" 5.*c: %i\n", ft_printf("[%5.*c]\n", 5, 'c'));
	printf(" 5.*c: %i\n\n", printf("[%5.*c]\n", 5, 'c'));
		//
	printf(" -5.*c: %i\n", ft_printf("[%-5.*c]\n", 5, 'c'));
	printf(" -5.*c: %i\n\n", printf("[%-5.*c]\n", 5, 'c'));
		//
	printf(" 05.*c: %i\n", ft_printf("[%05.*c]\n", 5, 'c'));
	printf(" 05.*c: %i\n\n", printf("[%05.*c]\n", 5, 'c'));
		//
	printf(" 0-5.*c: %i\n", ft_printf("[%0-5.*c]\n", 5, 'c'));
	printf(" 0-5.*c: %i\n\n", printf("[%0-5.*c]\n", 5, 'c'));
		//
	printf(" -05.*c: %i\n", ft_printf("[%-05.*c]\n", 5, 'c'));
	printf(" -05.*c: %i\n\n", printf("[%-05.*c]\n", 5, 'c'));
		// %s
	printf("********* %%s *********\n");
	printf(" 5.*s: %i\n", ft_printf("[%5.*s]\n", 5, "hello world!"));
	printf(" 5.*s: %i\n\n", printf("[%5.*s]\n", 5, "hello world!"));
		//
	printf(" -5.*s: %i\n", ft_printf("[%-5.*s]\n", 5, "hello world!"));
	printf(" -5.*s: %i\n\n", printf("[%-5.*s]\n", 5, "hello world!"));
		//
	printf(" 05.*s: %i\n", ft_printf("[%05.*s]\n", 5, "hello world!"));
	printf(" 05.*s: %i\n\n", printf("[%05.*s]\n", 5, "hello world!"));
		//
	printf(" 0-5.*s: %i\n", ft_printf("[%0-5.*s]\n", 5, "hello world!"));
	printf(" 0-5.*s: %i\n\n", printf("[%0-5.*s]\n", 5, "hello world!"));
		//
	printf(" -05.*s: %i\n", ft_printf("[%-05.*s]\n", 5, "hello world!"));
	printf(" -05.*s: %i\n\n", printf("[%-05.*s]\n", 5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********\n");
	printf(" 5.*i: %i\n", ft_printf("[%5.*i]\n", 5, 5));
	printf(" 5.*i: %i\n\n", printf("[%5.*i]\n", 5, 5));
	//
	printf(" -5.*i: %i\n", ft_printf("[%-5.*i]\n", 5, 5));
	printf(" -5.*i: %i\n\n", printf("[%-5.*i]\n", 5, 5));
	//
	printf(" 05.*i: %i\n", ft_printf("[%05.*i]\n", 5, 5));
	printf(" 05.*i: %i\n\n", printf("[%05.*i]\n", 5, 5));
	//
	printf(" 0-5.*i: %i\n", ft_printf("[%0-5.*i]\n", 5, 5));
	printf(" 0-5.*i: %i\n\n", printf("[%0-5.*i]\n", 5, 5));
	//
	printf(" -05.*i: %i\n", ft_printf("[%-05.*i]\n", 5, 5));
	printf(" -05.*i: %i\n\n", printf("[%-05.*i]\n", 5, 5));
		// %i negative
	printf("********* %%i, negative *********\n");
	printf(" 5.*i: %i\n", ft_printf("[%5.*i]\n", 5, -5));
	printf(" 5.*i: %i\n\n", printf("[%5.*i]\n", 5, -5));
	//
	printf(" -5.*i: %i\n", ft_printf("[%-5.*i]\n", 5, -5));
	printf(" -5.*i: %i\n\n", printf("[%-5.*i]\n", 5, -5));
	//
	printf(" 05.*i: %i\n", ft_printf("[%05.*i]\n", 5, -5));
	printf(" 05.*i: %i\n\n", printf("[%05.*i]\n", 5, -5));
	//
	printf(" 0-5.*i: %i\n", ft_printf("[%0-5.*i]\n", 5, -5));
	printf(" 0-5.*i: %i\n\n", printf("[%0-5.*i]\n", 5, -5));
	//
	printf(" -05.*i: %i\n", ft_printf("[%-05.*i]\n", 5, -5));
	printf(" -05.*i: %i\n\n", printf("[%-05.*i]\n", 5, -5));
		// %d positive
	printf("********* %%d, positive *********\n");
	printf(" 5.*d: %i\n", ft_printf("[%5.*d]\n", 5, 5));
	printf(" 5.*d: %i\n\n", printf("[%5.*d]\n", 5, 5));
	//
	printf(" -5.*d: %i\n", ft_printf("[%-5.*d]\n", 5, 5));
	printf(" -5.*d: %i\n\n", printf("[%-5.*d]\n", 5, 5));
	//
	printf(" 05.*d: %i\n", ft_printf("[%05.*d]\n", 5, 5));
	printf(" 05.*d: %i\n\n", printf("[%05.*d]\n", 5, 5));
	//
	printf(" 0-5.*d: %i\n", ft_printf("[%0-5.*d]\n", 5, 5));
	printf(" 0-5.*d: %i\n\n", printf("[%0-5.*d]\n", 5, 5));
	//
	printf(" -05.*d: %i\n", ft_printf("[%-05.*d]\n", 5, 5));
	printf(" -05.*d: %i\n\n", printf("[%-05.*d]\n", 5, 5));
		// %d negative
	printf("********* %%d, negative *********\n");
	printf(" 5.*d: %i\n", ft_printf("[%5.*d]\n", 5, -5));
	printf(" 5.*d: %i\n\n", printf("[%5.*d]\n", 5, -5));
	//
	printf(" -5.*d: %i\n", ft_printf("[%-5.*d]\n", 5, -5));
	printf(" -5.*d: %i\n\n", printf("[%-5.*d]\n", 5, -5));
	//
	printf(" 05.*d: %i\n", ft_printf("[%05.*d]\n", 5, -5));
	printf(" 05.*d: %i\n\n", printf("[%05.*d]\n", 5, -5));
	//
	printf(" 0-5.*d: %i\n", ft_printf("[%0-5.*d]\n", 5, -5));
	printf(" 0-5.*d: %i\n\n", printf("[%0-5.*d]\n", 5, -5));
	//
	printf(" -05.*d: %i\n", ft_printf("[%-05.*d]\n", 5, -5));
	printf(" -05.*d: %i\n\n", printf("[%-05.*d]\n", 5, -5));
		// %u
	printf("********* %%u *********\n");
	printf(" 5.*u: %i\n", ft_printf("[%5.*u]\n", 5, 5));
	printf(" 5.*u: %i\n\n", printf("[%5.*u]\n", 5, 5));
	//
	printf(" -5.*u: %i\n", ft_printf("[%-5.*u]\n", 5, 5));
	printf(" -5.*u: %i\n\n", printf("[%-5.*u]\n", 5, 5));
	//
	printf(" 05.*u: %i\n", ft_printf("[%05.*u]\n", 5, 5));
	printf(" 05.*u: %i\n\n", printf("[%05.*u]\n", 5, 5));
	//
	printf(" 0-5.*u: %i\n", ft_printf("[%0-5.*u]\n", 5, 5));
	printf(" 0-5.*u: %i\n\n", printf("[%0-5.*u]\n", 5, 5));
	//
	printf(" -05.*u: %i\n", ft_printf("[%-05.*u]\n", 5, 5));
	printf(" -05.*u: %i\n\n", printf("[%-05.*u]\n", 5, 5));
		// %x
	printf("********* %%x *********\n");
	printf(" 5.*x: %i\n", ft_printf("[%5.*x]\n", 5, 5));
	printf(" 5.*x: %i\n\n", printf("[%5.*x]\n", 5, 5));
	//
	printf(" -5.*x: %i\n", ft_printf("[%-5.*x]\n", 5, 5));
	printf(" -5.*x: %i\n\n", printf("[%-5.*x]\n", 5, 5));
	//
	printf(" 05.*x: %i\n", ft_printf("[%05.*x]\n", 5, 5));
	printf(" 05.*x: %i\n\n", printf("[%05.*x]\n", 5, 5));
	//
	printf(" 0-5.*x: %i\n", ft_printf("[%0-5.*x]\n", 5, 5));
	printf(" 0-5.*x: %i\n\n", printf("[%0-5.*x]\n", 5, 5));
	//
	printf(" -05.*x: %i\n", ft_printf("[%-05.*x]\n", 5, 5));
	printf(" -05.*x: %i\n\n", printf("[%-05.*x]\n", 5, 5));
		// %p
	printf("********* %%p *********\n");
	printf(" 5.*p: %i\n", ft_printf("[%5.*p]\n", 5, &ptr));
	printf(" 5.*p: %i\n\n", printf("[%5.*p]\n", 5, &ptr));
	//
	printf(" -5.*p: %i\n", ft_printf("[%-5.*p]\n", 5, &ptr));
	printf(" -5.*p: %i\n\n", printf("[%-5.*p]\n", 5, &ptr));
	//
	printf(" 05.*p: %i\n", ft_printf("[%05.*p]\n", 5, &ptr));
	printf(" 05.*p: %i\n\n", printf("[%05.*p]\n", 5, &ptr));
	//
	printf(" 0-5.*p: %i\n", ft_printf("[%0-5.*p]\n", 5, &ptr));
	printf(" 0-5.*p: %i\n\n", printf("[%0-5.*p]\n", 5, &ptr));
	//
	printf(" -05.*p: %i\n", ft_printf("[%-05.*p]\n", 5, &ptr));
	printf(" -05.*p: %i\n\n", printf("[%-05.*p]\n", 5, &ptr));

	// END OF BIT: precision with *, positive precision
	
	// precision with *, negative precision
	printf("* testing, with negative precision\n");
		// %c
	printf("********* %%c *********\n");
	printf(" 5.*c: %i\n", ft_printf("[%5.*c]\n", -5, 'c'));
	printf(" 5.*c: %i\n\n", printf("[%5.*c]\n", -5, 'c'));
		//
	printf(" -5.*c: %i\n", ft_printf("[%-5.*c]\n", -5, 'c'));
	printf(" -5.*c: %i\n\n", printf("[%-5.*c]\n", -5, 'c'));
		//
	printf(" 05.*c: %i\n", ft_printf("[%05.*c]\n", -5, 'c'));
	printf(" 05.*c: %i\n\n", printf("[%05.*c]\n", -5, 'c'));
		//
	printf(" 0-5.*c: %i\n", ft_printf("[%0-5.*c]\n", -5, 'c'));
	printf(" 0-5.*c: %i\n\n", printf("[%0-5.*c]\n", -5, 'c'));
		//
	printf(" -05.*c: %i\n", ft_printf("[%-05.*c]\n", -5, 'c'));
	printf(" -05.*c: %i\n\n", printf("[%-05.*c]\n", -5, 'c'));
		// %s
	printf("********* %%s *********\n");
	printf(" 5.*s: %i\n", ft_printf("[%5.*s]\n", -5, "hello world!"));
	printf(" 5.*s: %i\n\n", printf("[%5.*s]\n", -5, "hello world!"));
		//
	printf(" -5.*s: %i\n", ft_printf("[%-5.*s]\n", -5, "hello world!"));
	printf(" -5.*s: %i\n\n", printf("[%-5.*s]\n", -5, "hello world!"));
		//
	printf(" 05.*s: %i\n", ft_printf("[%05.*s]\n", -5, "hello world!"));
	printf(" 05.*s: %i\n\n", printf("[%05.*s]\n", -5, "hello world!"));
		//
	printf(" 0-5.*s: %i\n", ft_printf("[%0-5.*s]\n", -5, "hello world!"));
	printf(" 0-5.*s: %i\n\n", printf("[%0-5.*s]\n", -5, "hello world!"));
		//
	printf(" -05.*s: %i\n", ft_printf("[%-05.*s]\n", -5, "hello world!"));
	printf(" -05.*s: %i\n\n", printf("[%-05.*s]\n", -5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********\n");
	printf(" 5.*i: %i\n", ft_printf("[%5.*i]\n", -5, 5));
	printf(" 5.*i: %i\n\n", printf("[%5.*i]\n", -5, 5));
	//
	printf(" -5.*i: %i\n", ft_printf("[%-5.*i]\n", -5, 5));
	printf(" -5.*i: %i\n\n", printf("[%-5.*i]\n", -5, 5));
	//
	printf(" 05.*i: %i\n", ft_printf("[%05.*i]\n", -5, 5));
	printf(" 05.*i: %i\n\n", printf("[%05.*i]\n", -5, 5));
	//
	printf(" 0-5.*i: %i\n", ft_printf("[%0-5.*i]\n", -5, 5));
	printf(" 0-5.*i: %i\n\n", printf("[%0-5.*i]\n", -5, 5));
	//
	printf(" -05.*i: %i\n", ft_printf("[%-05.*i]\n", -5, 5));
	printf(" -05.*i: %i\n\n", printf("[%-05.*i]\n", -5, 5));
		// %i negative
	printf("********* %%i, negative *********\n");
	printf(" 5.*i: %i\n", ft_printf("[%5.*i]\n", -5, -5));
	printf(" 5.*i: %i\n\n", printf("[%5.*i]\n", -5, -5));
	//
	printf(" -5.*i: %i\n", ft_printf("[%-5.*i]\n", -5, -5));
	printf(" -5.*i: %i\n\n", printf("[%-5.*i]\n", -5, -5));
	//
	printf(" 05.*i: %i\n", ft_printf("[%05.*i]\n", -5, -5));
	printf(" 05.*i: %i\n\n", printf("[%05.*i]\n", -5, -5));
	//
	printf(" 0-5.*i: %i\n", ft_printf("[%0-5.*i]\n", -5, -5));
	printf(" 0-5.*i: %i\n\n", printf("[%0-5.*i]\n", -5, -5));
	//
	printf(" -05.*i: %i\n", ft_printf("[%-05.*i]\n", -5, -5));
	printf(" -05.*i: %i\n\n", printf("[%-05.*i]\n", -5, -5));
		// %d positive
	printf("********* %%d, positive *********\n");
	printf(" 5.*d: %i\n", ft_printf("[%5.*d]\n", -5, 5));
	printf(" 5.*d: %i\n\n", printf("[%5.*d]\n", -5, 5));
	//
	printf(" -5.*d: %i\n", ft_printf("[%-5.*d]\n", -5, 5));
	printf(" -5.*d: %i\n\n", printf("[%-5.*d]\n", -5, 5));
	//
	printf(" 05.*d: %i\n", ft_printf("[%05.*d]\n", -5, 5));
	printf(" 05.*d: %i\n\n", printf("[%5.*d]\n", -5, 5));
	//
	printf(" 0-5.*d: %i\n", ft_printf("[%0-5.*d]\n", -5, 5));
	printf(" 0-5.*d: %i\n\n", printf("[%5.*d]\n", -5, 5));
	//
	printf(" -05.*d: %i\n", ft_printf("[%-05.*d]\n", -5, 5));
	printf(" -05.*d: %i\n\n", printf("[%-05.*d]\n", -5, 5));
		// %d negative
	printf("********* %%d, negative *********\n");
	printf(" 5.*d: %i\n", ft_printf("[%5.*d]\n", -5, -5));
	printf(" 5.*d: %i\n\n", printf("[%5.*d]\n", -5, -5));
	//
	printf(" -5.*d: %i\n", ft_printf("[%-5.*d]\n", -5, -5));
	printf(" -5.*d: %i\n\n", printf("[%-5.*d]\n", -5, -5));
	//
	printf(" 05.*d: %i\n", ft_printf("[%05.*d]\n", -5, -5));
	printf(" 05.*d: %i\n\n", printf("[%05.*d]\n", -5, -5));
	//
	printf(" 0-5.*d: %i\n", ft_printf("[%0-5.*d]\n", -5, -5));
	printf(" 0-5.*d: %i\n\n", printf("[%0-5.*d]\n", -5, -5));
	//
	printf(" -05.*d: %i\n", ft_printf("[%-05.*d]\n", -5, -5));
	printf(" -05.*d: %i\n\n", printf("[%-05.*d]\n", -5, -5));
		// %u
	printf("********* %%u *********\n");
	printf(" 5.*u: %i\n", ft_printf("[%5.*u]\n", -5, 5));
	printf(" 5.*u: %i\n\n", printf("[%5.*u]\n", -5, 5));
	//
	printf(" -5.*u: %i\n", ft_printf("[%-5.*u]\n", -5, 5));
	printf(" -5.*u: %i\n\n", printf("[%-5.*u]\n", -5, 5));
	//
	printf(" 05.*u: %i\n", ft_printf("[%05.*u]\n", -5, 5));
	printf(" 05.*u: %i\n\n", printf("[%05.*u]\n", -5, 5));
	//
	printf(" 0-5.*u: %i\n", ft_printf("[%0-5.*u]\n", -5, 5));
	printf(" 0-5.*u: %i\n\n", printf("[%0-5.*u]\n", -5, 5));
	//
	printf(" -05.*u: %i\n", ft_printf("[%-05.*u]\n", -5, 5));
	printf(" -05.*u: %i\n\n", printf("[%-05.*u]\n", -5, 5));
		// %x
	printf("********* %%x *********\n");
	printf(" 5.*x: %i\n", ft_printf("[%5.*x]\n", -5, 5));
	printf(" 5.*x: %i\n\n", printf("[%5.*x]\n", -5, 5));
	//
	printf(" -5.*x: %i\n", ft_printf("[%-5.*x]\n", -5, 5));
	printf(" -5.*x: %i\n\n", printf("[%-5.*x]\n", -5, 5));
	//
	printf(" 05.*x: %i\n", ft_printf("[%05.*x]\n", -5, 5));
	printf(" 05.*x: %i\n\n", printf("[%05.*x]\n", -5, 5));
	//
	printf(" 0-5.*x: %i\n", ft_printf("[%0-5.*x]\n", -5, 5));
	printf(" 0-5.*x: %i\n\n", printf("[%0-5.*x]\n", -5, 5));
	//
	printf(" -05.*x: %i\n", ft_printf("[%-05.*x]\n", -5, 5));
	printf(" -05.*x: %i\n\n", printf("[%-05.*x]\n", -5, 5));
		// %p
	printf("********* %%p *********\n");
	printf(" 5.*p: %i\n", ft_printf("[%5.*p]\n", -5, &ptr));
	printf(" 5.*p: %i\n\n", printf("[%5.*p]\n", -5, &ptr));
	//
	printf(" -5.*p: %i\n", ft_printf("[%-5.*p]\n", -5, &ptr));
	printf(" -5.*p: %i\n\n", printf("[%-5.*p]\n", -5, &ptr));
	//
	printf(" 05.*p: %i\n", ft_printf("[%05.*p]\n", -5, &ptr));
	printf(" 05.*p: %i\n\n", printf("[%05.*p]\n", -5, &ptr));
	//
	printf(" 0-5.*p: %i\n", ft_printf("[%0-5.*p]\n", -5, &ptr));
	printf(" 0-5.*p: %i\n\n", printf("[%0-5.*p]\n", -5, &ptr));
	//
	printf(" -05.*p: %i\n", ft_printf("[%-05.*p]\n", -5, &ptr));
	printf(" -05.*p: %i\n\n", printf("[%-05.*p]\n", -5, &ptr));

	// END OF BIT: precision with *, negative precision
	return (0);
}