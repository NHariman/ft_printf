/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   double_astrix_width_and_precision_tests.c          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 15:34:37 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/11 13:22:58 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int		*ptr;

	ptr = 0;
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