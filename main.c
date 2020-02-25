/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 15:14:24 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/24 20:31:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
    int     lol;
    int     num = 47;
    char    *lmao;
    char    *string;
    int     result;
    int     other;
    char    *test;
    char    c;

    lol = -5000;
    lmao = "123456789";
    test = "test case %% %c %skhfdh\nd: %d\ni: %i\nu: %u\nx: %x\nX: %X\np: %p\n";
    c = 'c';
    string = "testing if main string can be given as argument. %i, %%, %s\n";
    printf(string, lol, lmao); //first argument can be given as a string (obv.)
    printf("CONVERSIONS\nc:\nint to unsigned char conversion. The resulting character is written.\n");
    printf("example: %i becomes %c\n", num, num);
    printf("testcase: %ic\n", lol);
    result = printf("testcase save to int variable result %i\n",2147483646);
    printf("%i\n", result);
    printf("TESTING MY OWN PRINTF FROM HERE\n");
    result = ft_printf(test, c, lmao, lol, lol, lol, lol, lol, *test);
    other = printf(test, c, lmao, lol, lol, lol, lol, lol, *test);
    printf("result of ft_printf: %i\n", result);
    printf("result of printf:    %i\n", other);
    return (0);

}
