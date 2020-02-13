/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 15:14:24 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/13 19:13:42 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
    int lol;
    int num = 47;
    char *lmao;
    char *string;
    int  result;

    lol = 5;
    lmao = "123456789";
    string = "testing if main string can be given as argument. %i, %%, %s\n";
    printf(string, lol, lmao); //first argument can be given as a string (obv.)
    printf("CONVERSIONS\nc:\nint to unsigned char conversion. The resulting character is written.\n");
    printf("example: %i becomes %c\n", num, num);
    printf("testcase: %ic\n", lol);
    result = printf("testcase save to int variable result %i\n",2147483646);
    printf("%i\n", result);
    printf("TESTING MY OWN PRINTF FROM HERE\n");
    result = ft_printf("test case\n");
    printf("result of ft_printf: %i\n", result);
    return (0);

}
