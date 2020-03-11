/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_c.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/30 09:21:34 by dkrecisz       #+#    #+#                */
/*   Updated: 2020/03/10 17:16:33 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include <stdlib.h>
//MAKE IT WORK WITH GLOBAL PATH LATER
#include "~/.brew/Cellar/criterion/2.3.3/include/criterion/criterion.h"
#include <strings.h>

/*	TEST TEMPLATE:
	Test()
	{
		cr_assert(ft_printf("%c", ) == printf("%c", ));
	}
*/


Test(single_specifier, specifier_only)
{
	cr_assert(ft_printf("%c", 'A') == printf("%c", 'A'));
	cr_assert(ft_printf("%c", '\n') == printf("%c", '\n'));
	cr_assert(ft_printf("%c", '\t') == printf("%c", '\t'));
	cr_assert(ft_printf("%c", '\v') == printf("%c", '\v'));
	cr_assert(ft_printf("%c", '\r') == printf("%c", '\r'));
	cr_assert(ft_printf("%c", '\a') == printf("%c", '\a'));
	cr_assert(ft_printf("%c", '\\') == printf("%c", '\\'));
	cr_assert(ft_printf("%c", '\'') == printf("%c", '\''));
	cr_assert(ft_printf("%c", '\f') == printf("%c", '\f'));
	cr_assert(ft_printf("%c", '\b') == printf("%c", '\b'));
}


Test(single_specifier, various_width)
{
	cr_assert(ft_printf("%1c", 'A') == printf("%1c", 'A'));
	cr_assert(ft_printf("%2c", 'A') == printf("%2c", 'A'));
	cr_assert(ft_printf("%9c", 'A') == printf("%9c", 'A'));
	cr_assert(ft_printf("%10c", 'A') == printf("%10c", 'A'));
	cr_assert(ft_printf("%100c", 'A') == printf("%100c", 'A'));
	cr_assert(ft_printf("%1000c", 'A') == printf("%1000c", 'A'));
	cr_assert(ft_printf("%1000000c", 'A') == printf("%1000000c", 'A'));
	cr_assert(ft_printf("%1000000c", ' ') == printf("%1000000c", ' '));
}

Test(single_specifier, various_width_char0)
{
	cr_assert(ft_printf("%1c", (char)0) == printf("%1c", (char)0));
	cr_assert(ft_printf("%2c", (char)0) == printf("%2c", (char)0));
	cr_assert(ft_printf("%9c", (char)0) == printf("%9c", (char)0));
	cr_assert(ft_printf("%10c", (char)0) == printf("%10c", (char)0));
	cr_assert(ft_printf("%100c", (char)0) == printf("%100c", (char)0));
	cr_assert(ft_printf("%1000c", (char)0) == printf("%1000c", (char)0));
	cr_assert(ft_printf("%1000000c", (char)0) == printf("%1000000c", (char)0));
}

Test(single_specifier, misc_test)
{
	cr_assert(ft_printf("%10c", (char)0) == printf("%10c", (char)0));
	cr_assert(ft_printf("%10c", 'A') == printf("%10c", 'A'));

}

Test(multi_specifier, misc_test)
{
	cr_assert(ft_printf("%%c%%") == printf("%%c%%"));
	cr_assert(ft_printf("%%c") == printf("%%c"));
	cr_assert(ft_printf("%%") == printf("%%"));
	cr_assert(ft_printf("%%%c", 'A') == printf("%%%c", 'A'));
	cr_assert(ft_printf("%c%c+++%c%c\n", 'A', 'B', 'C', 'D') == printf("%c%c+++%c%c\n", 'A', 'B', 'C', 'D'));
	cr_assert(ft_printf("%c%%c+++%c%c\n", 'A', 'B', 'C') == printf("%c%%c+++%c%c\n", 'A', 'B', 'C'));
	cr_assert(ft_printf("%c%%%%%%c+++%c%c%%\n", 'A', 'B', 'C') == printf("%c%%%%%%c+++%c%c%%\n", 'A', 'B', 'C'));
}
/* 
Test(single_specifier, one_asterisk)
{
	cr_assert(ft_printf("%*c", -100, 'A') == printf("%*c", -100, 'A'));
	cr_assert(ft_printf("%*c", -10, 'A') == printf("%*c", -10, 'A'));
	cr_assert(ft_printf("%*c", -1, 'A') == printf("%*c", -1, 'A'));
	cr_assert(ft_printf("%*c", 0, 'A') == printf("%*c", 0, 'A'));
	cr_assert(ft_printf("%*c", 1, 'A') == printf("%*c", 1, 'A'));
	cr_assert(ft_printf("%*c", 10, 'A') == printf("%*c", 10, 'A'));
	cr_assert(ft_printf("%*c", 100, 'A') == printf("%*c", 100, 'A'));
}


Test(two_specifiers, asterisks)
{
	cr_assert(ft_printf("%*c%*c", -100, 'A', -10, 'B') == printf("%*c%*c", -100, 'A', -10, 'B'));
	cr_assert(ft_printf("%*c%*c", -10, 'A', -100, 'B') == printf("%*c%*c", -10, 'A', -100, 'B'));
	cr_assert(ft_printf("%*c%*c", -1, 'A', -5, 'B') == printf("%*c%*c", -1, 'A', -5, 'B'));
	cr_assert(ft_printf("%*c%*c", 0, 'A', 5 , 'B') == printf("%*c%*c", 0, 'A', 5 , 'B'));
	cr_assert(ft_printf("%*c%*c", 1, 'A', 5, 'B') == printf("%*c%*c", 1, 'A', 5, 'B'));
	cr_assert(ft_printf("%*c%*c", 10, 'A', -5, 'B') == printf("%*c%*c", 10, 'A', -5, 'B'));
	cr_assert(ft_printf("%*c%*c", 100, 'A', 3, 'B') == printf("%*c%*c", 100, 'A', 3, 'B'));
}
*/
