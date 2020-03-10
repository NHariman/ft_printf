/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   astrix_width_with_precision_tests.c                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:32:01 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/10 15:12:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int		main(void)
{
	int		*ptr;

	ptr = 0;
// width with *, positive width
	printf("* testing, with positive width\n");
		// %c
	printf("********* %%c *********");
	printf(" *.5c: %i\n", ft_printf("[%*.5c]\n", 5, 'c'));
	printf(" *.5c: %i\n\n", printf("[%*.5c]\n", 5, 'c'));
		//
	printf(" -*.5c: %i\n", ft_printf("[%-*.5c]\n", 5, 'c'));
	printf(" -*.5c: %i\n\n", printf("[%-*.5c]\n", 5, 'c'));
		//
	printf(" 0*.5c: %i\n", ft_printf("[%0*.5c]\n", 5, 'c'));
	printf(" 0*.5c: %i\n\n", printf("[%*.5c]\n", 5, 'c'));
		//
	printf(" 0-*.5c: %i\n", ft_printf("[%0-*.5c]\n", 5, 'c'));
	printf(" 0-*.5c: %i\n\n", printf("[%*.5c]\n", 5, 'c'));
		//
	printf(" -0*.5c: %i\n", ft_printf("[%-0*.5c]\n", 5, 'c'));
	printf(" -0*.5c: %i\n\n", printf("[%-0*.5c]\n", 5, 'c'));
		// %s
	printf("********* %%s *********");
	printf(" *.5s: %i\n", ft_printf("[%*.5s]\n", 5, "hello world!"));
	printf(" *.5s: %i\n\n", printf("[%*.5s]\n", 5, "hello world!"));
		//
	printf(" -*.5s: %i\n", ft_printf("[%-*.5s]\n", 5, "hello world!"));
	printf(" -*.5s: %i\n\n", printf("[%-*.5s]\n", 5, "hello world!"));
		//
	printf(" 0*.5s: %i\n", ft_printf("[%0*.5s]\n", 5, "hello world!"));
	printf(" 0*.5s: %i\n\n", printf("[%*.5s]\n", 5, "hello world!"));
		//
	printf(" 0-*.5s: %i\n", ft_printf("[%0-*.5s]\n", 5, "hello world!"));
	printf(" 0-*.5s: %i\n\n", printf("[%*.5s]\n", 5, "hello world!"));
		//
	printf(" -0*.5s: %i\n", ft_printf("[%-0*.5s]\n", 5, "hello world!"));
	printf(" -0*.5s: %i\n\n", printf("[%-0*.5s]\n", 5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********");
	printf(" *.5i: %i\n", ft_printf("[%*.5i]\n", 5, 5));
	printf(" *.5i: %i\n\n", printf("[%*.5i]\n", 5, 5));
		//
	printf(" -*.5i: %i\n", ft_printf("[%-*.5i]\n", 5, 5));
	printf(" -*.5i: %i\n\n", printf("[%-*.5i]\n", 5, 5));
		//
	printf(" 0*.5i: %i\n", ft_printf("[%0*.5i]\n", 5, 5));
	printf(" 0*.5i: %i\n\n", printf("[%*.5i]\n", 5, 5));
		//
	printf(" 0-*.5i: %i\n", ft_printf("[%0-*.5i]\n", 5, 5));
	printf(" 0-*.5i: %i\n\n", printf("[%*.5i]\n", 5, 5));
		//
	printf(" -0*.5i: %i\n", ft_printf("[%-0*.5i]\n", 5, 5));
	printf(" -0*.5i: %i\n\n", printf("[%-0*.5i]\n", 5, 5));
		// %i negative
	printf("********* %%i, negative *********");
	printf(" *.5i: %i\n", ft_printf("[%*.5i]\n", 5, -5));
	printf(" *.5i: %i\n\n", printf("[%*.5i]\n", 5, -5));
		//
	printf(" -*.5i: %i\n", ft_printf("[%-*.5i]\n", 5, -5));
	printf(" -*.5i: %i\n\n", printf("[%-*.5i]\n", 5, -5));
		//
	printf(" 0*.5i: %i\n", ft_printf("[%0*.5i]\n", 5, -5));
	printf(" 0*.5i: %i\n\n", printf("[%*.5i]\n", 5, -5));
		//
	printf(" 0-*.5i: %i\n", ft_printf("[%0-*.5i]\n", 5, -5));
	printf(" 0-*.5i: %i\n\n", printf("[%*.5i]\n", 5, -5));
		//
	printf(" -0*.5i: %i\n", ft_printf("[%-0*.5i]\n", 5, -5));
	printf(" -0*.5i: %i\n\n", printf("[%-0*.5i]\n", 5, -5));
		// %u
	printf("********* %%u *********");
	printf(" *.5u: %u\n", ft_printf("[%*.5u]\n", 5, 5));
	printf(" *.5u: %u\n\n", printf("[%*.5u]\n", 5, 5));
		//
	printf(" -*.5u: %i\n", ft_printf("[%-*.5u]\n", 5, 5));
	printf(" -*.5u: %i\n\n", printf("[%-*.5u]\n", 5, 5));
		//
	printf(" 0*.5u: %i\n", ft_printf("[%0*.5u]\n", 5, 5));
	printf(" 0*.5u: %i\n\n", printf("[%*.5u]\n", 5, 5));
		//
	printf(" 0-*.5u: %i\n", ft_printf("[%0-*.5u]\n", 5, 5));
	printf(" 0-*.5u: %i\n\n", printf("[%*.5u]\n", 5, 5));
		//
	printf(" -0*.5u: %i\n", ft_printf("[%-0*.5u]\n", 5, 5));
	printf(" -0*.5u: %i\n\n", printf("[%-0*.5u]\n", 5, 5));
		// %d positive
	printf("********* %%d positive *********");
	printf(" *.5d: %i\n", ft_printf("[%*.5d]\n", 5, 5));
	printf(" *.5d: %i\n\n", printf("[%*.5d]\n", 5, 5));
		//
	printf(" -*.5d: %i\n", ft_printf("[%-*.5d]\n", 5, 5));
	printf(" -*.5d: %i\n\n", printf("[%-*.5d]\n", 5, 5));
		//
	printf(" 0*.5d: %i\n", ft_printf("[%0*.5d]\n", 5, 5));
	printf(" 0*.5d: %i\n\n", printf("[%*.5d]\n", 5, 5));
		//
	printf(" 0-*.5d: %i\n", ft_printf("[%0-*.5d]\n", 5, 5));
	printf(" 0-*.5d: %i\n\n", printf("[%*.5d]\n", 5, 5));
		//
	printf(" -0*.5d: %i\n", ft_printf("[%-0*.5d]\n", 5, 5));
	printf(" -0*.5d: %i\n\n", printf("[%-0*.5d]\n", 5, 5));
		// %d negative
	printf("********* %%d negative *********");
	printf(" *.5d: %i\n", ft_printf("[%*.5d]\n", 5, -5));
	printf(" *.5d: %i\n\n", printf("[%*.5d]\n", 5, -5));
		//
	printf(" -*.5d: %i\n", ft_printf("[%-*.5d]\n", 5, -5));
	printf(" -*.5d: %i\n\n", printf("[%-*.5d]\n", 5, -5));
		//
	printf(" 0*.5d: %i\n", ft_printf("[%0*.5d]\n", 5, -5));
	printf(" 0*.5d: %i\n\n", printf("[%*.5d]\n", 5, -5));
		//
	printf(" 0-*.5d: %i\n", ft_printf("[%0-*.5d]\n", 5, -5));
	printf(" 0-*.5d: %i\n\n", printf("[%*.5d]\n", 5, -5));
		//
	printf(" -0*.5d: %i\n", ft_printf("[%-0*.5d]\n", 5, -5));
	printf(" -0*.5d: %i\n\n", printf("[%-0*.5d]\n", 5, -5));
		// %x
	printf("********* %%x *********");
	printf(" *.5x: %i\n", ft_printf("[%*.5x]\n", 5, 5));
	printf(" *.5x: %i\n\n", printf("[%*.5x]\n", 5, 5));
		//
	printf(" -*.5x: %i\n", ft_printf("[%-*.5x]\n", 5, 5));
	printf(" -*.5x: %i\n\n", printf("[%-*.5x]\n", 5, 5));
		//
	printf(" 0*.5x: %i\n", ft_printf("[%0*.5x]\n", 5, 5));
	printf(" 0*.5x: %i\n\n", printf("[%*.5x]\n", 5, 5));
		//
	printf(" 0-*.5x: %i\n", ft_printf("[%0-*.5x]\n", 5, 5));
	printf(" 0-*.5x: %i\n\n", printf("[%*.5x]\n", 5, 5));
		//
	printf(" -0*.5x: %i\n", ft_printf("[%-0*.5x]\n", 5, 5));
	printf(" -0*.5x: %i\n\n", printf("[%-0*.5x]\n", 5, 5));
		// %X
	printf("********* %%X *********");
	printf(" *.5X: %i\n", ft_printf("[%*.5X]\n", 5, 5));
	printf(" *.5X: %i\n\n", printf("[%*.5X]\n", 5, 5));
		//
	printf(" -*.5X: %i\n", ft_printf("[%-*.5X]\n", 5, 5));
	printf(" -*.5X: %i\n\n", printf("[%-*.5X]\n", 5, 5));
		//
	printf(" 0*.5X: %i\n", ft_printf("[%0*.5X]\n", 5, 5));
	printf(" 0*.5X: %i\n\n", printf("[%*.5X]\n", 5, 5));
		//
	printf(" 0-*.5X: %i\n", ft_printf("[%0-*.5X]\n", 5, 5));
	printf(" 0-*.5X: %i\n\n", printf("[%*.5X]\n", 5, 5));
		//
	printf(" -0*.5X: %i\n", ft_printf("[%-0*.5X]\n", 5, 5));
	printf(" -0*.5X: %i\n\n", printf("[%-0*.5X]\n", 5, 5));
		// %p
	printf("********* %%p *********");
	printf(" *.5p: %i\n", ft_printf("[%*.5p]\n", 5, &ptr));
	printf(" *.5p: %i\n\n", printf("[%*.5p]\n", 5, &ptr));
		//
	printf(" -*.5p: %i\n", ft_printf("[%-*.5p]\n", 5, &ptr));
	printf(" -*.5p: %i\n\n", printf("[%-*.5p]\n", 5, &ptr));
		//
	printf(" 0*.5p: %i\n", ft_printf("[%0*.5p]\n", 5, &ptr));
	printf(" 0*.5p: %i\n\n", printf("[%*.5p]\n", 5, &ptr));
		//
	printf(" 0-*.5p: %i\n", ft_printf("[%0-*.5p]\n", 5, &ptr));
	printf(" 0-*.5p: %i\n\n", printf("[%*.5p]\n", 5, &ptr));
		//
	printf(" -0*.5p: %i\n", ft_printf("[%-0*.5p]\n", 5, &ptr));
	printf(" -0*.5p: %i\n\n", printf("[%-0*.5p]\n", 5, &ptr));
	
	//////////////////////////////////////////////////////////////////
	// width with *, negative width
	printf("* testing, with negative width\n");
		// %c
	printf("********* %%c *********");
	printf(" *.5c: %i\n", ft_printf("[%*.5c]\n", -5, 'c'));
	printf(" *.5c: %i\n\n", printf("[%*.5c]\n", -5, 'c'));
		//
	printf(" -*.5c: %i\n", ft_printf("[%-*.5c]\n", -5, 'c'));
	printf(" -*.5c: %i\n\n", printf("[%-*.5c]\n", -5, 'c'));
		//
	printf(" 0*.5c: %i\n", ft_printf("[%0*.5c]\n", -5, 'c'));
	printf(" 0*.5c: %i\n\n", printf("[%*.5c]\n", -5, 'c'));
		//
	printf(" 0-*.5c: %i\n", ft_printf("[%0-*.5c]\n", -5, 'c'));
	printf(" 0-*.5c: %i\n\n", printf("[%*.5c]\n", -5, 'c'));
		//
	printf(" -0*.5c: %i\n", ft_printf("[%-0*.5c]\n", -5, 'c'));
	printf(" -0*.5c: %i\n\n", printf("[%-0*.5c]\n", -5, 'c'));
		// %s
	printf("********* %%s *********");
	printf(" *.5s: %i\n", ft_printf("[%*.5s]\n", -5, "hello world!"));
	printf(" *.5s: %i\n\n", printf("[%*.5s]\n", -5, "hello world!"));
		//
	printf(" -*.5s: %i\n", ft_printf("[%-*.5s]\n", -5, "hello world!"));
	printf(" -*.5s: %i\n\n", printf("[%-*.5s]\n", -5, "hello world!"));
		//
	printf(" 0*.5s: %i\n", ft_printf("[%0*.5s]\n", -5, "hello world!"));
	printf(" 0*.5s: %i\n\n", printf("[%*.5s]\n", -5, "hello world!"));
		//
	printf(" 0-*.5s: %i\n", ft_printf("[%0-*.5s]\n", -5, "hello world!"));
	printf(" 0-*.5s: %i\n\n", printf("[%*.5s]\n", -5, "hello world!"));
		//
	printf(" -0*.5s: %i\n", ft_printf("[%-0*.5s]\n", -5, "hello world!"));
	printf(" -0*.5s: %i\n\n", printf("[%-0*.5s]\n", -5, "hello world!"));
		// %i positive
	printf("********* %%i, positive *********");
	printf(" *.5i: %i\n", ft_printf("[%*.5i]\n", -5, 5));
	printf(" *.5i: %i\n\n", printf("[%*.5i]\n", -5, 5));
		//
	printf(" -*.5i: %i\n", ft_printf("[%-*.5i]\n", -5, 5));
	printf(" -*.5i: %i\n\n", printf("[%-*.5i]\n", -5, 5));
		//
	printf(" 0*.5i: %i\n", ft_printf("[%0*.5i]\n", -5, 5));
	printf(" 0*.5i: %i\n\n", printf("[%*.5i]\n", 5, 5));
		//
	printf(" 0-*.5i: %i\n", ft_printf("[%0-*.5i]\n", -5, 5));
	printf(" 0-*.5i: %i\n\n", printf("[%*.5i]\n", -5, 5));
		//
	printf(" -0*.5i: %i\n", ft_printf("[%-0*.5i]\n", -5, 5));
	printf(" -0*.5i: %i\n\n", printf("[%-0*.5i]\n", -5, 5));
		// %i negative
	printf("********* %%i, negative *********");
	printf(" *.5i: %i\n", ft_printf("[%*.5i]\n", -5, -5));
	printf(" *.5i: %i\n\n", printf("[%*.5i]\n", -5, -5));
		//
	printf(" -*.5i: %i\n", ft_printf("[%-*.5i]\n", -5, -5));
	printf(" -*.5i: %i\n\n", printf("[%-*.5i]\n", 5, -5));
		//
	printf(" 0*.5i: %i\n", ft_printf("[%0*.5i]\n", -5, -5));
	printf(" 0*.5i: %i\n\n", printf("[%*.5i]\n", -5, -5));
		//
	printf(" 0-*.5i: %i\n", ft_printf("[%0-*.5i]\n", -5, -5));
	printf(" 0-*.5i: %i\n\n", printf("[%*.5i]\n", -5, -5));
		//
	printf(" -0*.5i: %i\n", ft_printf("[%-0*.5i]\n", -5, -5));
	printf(" -0*.5i: %i\n\n", printf("[%-0*.5i]\n", -5, -5));
		// %u
	printf("********* %%u *********");
	printf(" *.5u: %u\n", ft_printf("[%*.5u]\n", -5, 5));
	printf(" *.5u: %u\n\n", printf("[%*.5u]\n", -5, 5));
		//
	printf(" -*.5u: %i\n", ft_printf("[%-*.5u]\n", -5, 5));
	printf(" -*.5u: %i\n\n", printf("[%-*.5u]\n", -5, 5));
		//
	printf(" 0*.5u: %i\n", ft_printf("[%0*.5u]\n", -5, 5));
	printf(" 0*.5u: %i\n\n", printf("[%*.5u]\n", -5, 5));
		//
	printf(" 0-*.5u: %i\n", ft_printf("[%0-*.5u]\n", -5, 5));
	printf(" 0-*.5u: %i\n\n", printf("[%*.5u]\n", -5, 5));
		//
	printf(" -0*.5u: %i\n", ft_printf("[%-0*.5u]\n", -5, 5));
	printf(" -0*.5u: %i\n\n", printf("[%-0*.5u]\n", -5, 5));
		// %d positive
	printf("********* %%d positive *********");
	printf(" *.5d: %i\n", ft_printf("[%*.5d]\n", -5, 5));
	printf(" *.5d: %i\n\n", printf("[%*.5d]\n", -5, 5));
		//
	printf(" -*.5d: %i\n", ft_printf("[%-*.5d]\n", -5, 5));
	printf(" -*.5d: %i\n\n", printf("[%-*.5d]\n", -5, 5));
		//
	printf(" 0*.5d: %i\n", ft_printf("[%0*.5d]\n", -5, 5));
	printf(" 0*.5d: %i\n\n", printf("[%*.5d]\n", -5, 5));
		//
	printf(" 0-*.5d: %i\n", ft_printf("[%0-*.5d]\n", -5, 5));
	printf(" 0-*.5d: %i\n\n", printf("[%*.5d]\n", -5, 5));
		//
	printf(" -0*.5d: %i\n", ft_printf("[%-0*.5d]\n", -5, 5));
	printf(" -0*.5d: %i\n\n", printf("[%-0*.5d]\n", -5, 5));
		// %d negative
	printf("********* %%d negative *********");
	printf(" *.5d: %i\n", ft_printf("[%*.5d]\n", -5, -5));
	printf(" *.5d: %i\n\n", printf("[%*.5d]\n", -5, -5));
		//
	printf(" -*.5d: %i\n", ft_printf("[%-*.5d]\n", -5, -5));
	printf(" -*.5d: %i\n\n", printf("[%-*.5d]\n", -5, -5));
		//
	printf(" 0*.5d: %i\n", ft_printf("[%0*.5d]\n", -5, -5));
	printf(" 0*.5d: %i\n\n", printf("[%*.5d]\n", -5, -5));
		//
	printf(" 0-*.5d: %i\n", ft_printf("[%0-*.5d]\n", -5, -5));
	printf(" 0-*.5d: %i\n\n", printf("[%*.5d]\n", -5, -5));
		//
	printf(" -0*.5d: %i\n", ft_printf("[%-0*.5d]\n", -5, -5));
	printf(" -0*.5d: %i\n\n", printf("[%-0*.5d]\n", -5, -5));
		// %x
	printf("********* %%x *********");
	printf(" *.5x: %i\n", ft_printf("[%*.5x]\n", -5, 5));
	printf(" *.5x: %i\n\n", printf("[%*.5x]\n", -5, 5));
		//
	printf(" -*.5x: %i\n", ft_printf("[%-*.5x]\n", -5, 5));
	printf(" -*.5x: %i\n\n", printf("[%-*.5x]\n", -5, 5));
		//
	printf(" 0*.5x: %i\n", ft_printf("[%0*.5x]\n", -5, 5));
	printf(" 0*.5x: %i\n\n", printf("[%*.5x]\n", -5, 5));
		//
	printf(" 0-*.5x: %i\n", ft_printf("[%0-*.5x]\n", -5, 5));
	printf(" 0-*.5x: %i\n\n", printf("[%*.5x]\n", -5, 5));
		//
	printf(" -0*.5x: %i\n", ft_printf("[%-0*.5x]\n", -5, 5));
	printf(" -0*.5x: %i\n\n", printf("[%-0*.5x]\n", -5, 5));
		// %X
	printf("********* %%X *********");
	printf(" *.5X: %i\n", ft_printf("[%*.5X]\n", -5, 5));
	printf(" *.5X: %i\n\n", printf("[%*.5X]\n", -5, 5));
		//
	printf(" -*.5X: %i\n", ft_printf("[%-*.5X]\n", -5, 5));
	printf(" -*.5X: %i\n\n", printf("[%-*.5X]\n", -5, 5));
		//
	printf(" 0*.5X: %i\n", ft_printf("[%0*.5X]\n", -5, 5));
	printf(" 0*.5X: %i\n\n", printf("[%*.5X]\n", -5, 5));
		//
	printf(" 0-*.5X: %i\n", ft_printf("[%0-*.5X]\n", -5, 5));
	printf(" 0-*.5X: %i\n\n", printf("[%*.5X]\n", -5, 5));
		//
	printf(" -0*.5X: %i\n", ft_printf("[%-0*.5X]\n", -5, 5));
	printf(" -0*.5X: %i\n\n", printf("[%-0*.5X]\n", -5, 5));
		// %p
	printf("********* %%p *********");
	printf(" *.5p: %i\n", ft_printf("[%*.5p]\n", -5, &ptr));
	printf(" *.5p: %i\n\n", printf("[%*.5p]\n", -5, &ptr));
		//
	printf(" -*.5p: %i\n", ft_printf("[%-*.5p]\n", -5, &ptr));
	printf(" -*.5p: %i\n\n", printf("[%-*.5p]\n", -5, &ptr));
		//
	printf(" 0*.5p: %i\n", ft_printf("[%0*.5p]\n", -5, &ptr));
	printf(" 0*.5p: %i\n\n", printf("[%*.5p]\n", -5, &ptr));
		//
	printf(" 0-*.5p: %i\n", ft_printf("[%0-*.5p]\n", -5, &ptr));
	printf(" 0-*.5p: %i\n\n", printf("[%*.5p]\n", -5, &ptr));
		//
	printf(" -0*.5p: %i\n", ft_printf("[%-0*.5p]\n", -5, &ptr));
	printf(" -0*.5p: %i\n\n", printf("[%-0*.5p]\n", -5, &ptr));


	//END OF BIT: width with *, negative width
	return (0);
}
