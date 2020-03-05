/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/12 15:14:24 by nhariman       #+#    #+#                */
/*   Updated: 2020/03/05 16:49:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ft_printf_result;
    int printf_result;
    char *format;

    printf("From hereon out, ft_printf will be used and compared with the original printf:\n");
    // first case
    ft_printf_result = ft_printf("ft_printf test, no arguments\n");
    printf_result = printf("ft_printf test, no arguments\n");
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    ft_printf("two i values:\n");
    ft_printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    // second case
    printf("printing a string:\n");
    ft_printf_result = ft_printf("string: %s\n", "hello world");
    printf_result = printf("string: %s\n", "hello world");
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //third case
    ft_printf("printing %% diuxX and p:\n");
    ft_printf_result = ft_printf("%%c: %c\n%%s: %s\n%%: %%\n%%i: %i\n%%d: %d\n%%u: %u\n%%x: %x\n%%X: %X\n%%p: %p\n", 'c', "Hello world!", 100, 100, 3000, 4000, 4000, &ft_printf_result);
    printf_result = printf("%%c: %c\n%%s: %s\n%%: %%\n%%i: %i\n%%d: %d\n%%u: %u\n%%x: %x\n%%X: %X\n%%p: %p\n", 'c', "Hello world!", 100, 100, 3000, 4000, 4000, &ft_printf_result);
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //fourth case
    printf("printing %% diuxX and p with negative values:\n");
    ft_printf_result = ft_printf("%%c: %c\n%%s: %s\n%%: %%\n%%i: %i\n%%d: %d\n%%u: %u\n%%x: %x\n%%X: %X\n%%p: %p\n", 'c', "Hello world!", -100, -100, -3000, -4000, -4000, &ft_printf_result);
    printf_result = printf("%%c: %c\n%%s: %s\n%%: %%\n%%i: %i\n%%d: %d\n%%u: %u\n%%x: %x\n%%X: %X\n%%p: %p\n", 'c', "Hello world!", -100, -100, -3000, -4000, -4000, &ft_printf_result);
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //fifth case
    printf("printing an empty string:\n");
    ft_printf_result = ft_printf("string: %s\n", "");
    printf_result = printf("string: %s\n", "");
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //sixth case
    printf("printing a string with precision .5:\n");
    ft_printf_result = ft_printf("string: %.5s\n", "hello world!");
    printf_result = printf("string: %.5s\n", "hello world!");
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
     //seventh case
    printf("printing a string with precision .0:\n");
    ft_printf_result = ft_printf("string: %.0s\n", "hello world!");
    printf_result = printf("string: %.0s\n", "hello world!");
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //eigth case, undefined behaviour
    printf("printing a nonexistent string:\n");
    printf_result = printf("string: %s\n", NULL);
    ft_printf_result = ft_printf("string: %s\n", NULL);
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //nineth case
    printf("printing a string with a width and dash:\n");
    printf_result = printf("string width 10: %10s test\n string width 10 with -: %-10s test\n", "hello world", "hello world");
    ft_printf_result = ft_printf("string width 10: %10s test\n string width 10 with -: %-10s test\n", "hello world", "hello world");
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //tenth case
    printf("printing a string with a width and dash, where * is given for width:\n");
    printf_result = printf("string width 10: %10s test\n string width 10 with -: %-*s test\n", "hello world", 10, "hello world");
    ft_printf_result = ft_printf("string width 10: %10s test\n string width 10 with -: %-*s test\n", "hello world", 10, "hello world");
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //eleventh case
    printf("printing digits with precisions .15:\n");
    format = "%%c: %c\n%%s: %s\n%%: %%\n%%i: %.15i\n%%d: %.15d\n%%u: %.15u\n%%x: %.15x\n%%X: %.15X\n%%p: %p\n\n";
    ft_printf_result = ft_printf(format, 'c', "Hello world!", -100, -100, -3000, -4000, -4000, &ft_printf_result);
    printf_result = printf(format, 'c', "Hello world!", -100, -100, -3000, -4000, -4000, &ft_printf_result);
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //twelveth case
    printf("printing digits with width 15:\n");
    format = "%%c: %c\n%%s: %s\n%%: %%\n%%i: %15i\n%%d: %15d\n%%u: %15u\n%%x: %15x\n%%X: %15X\n%%p: %p\n\n";
    ft_printf_result = ft_printf(format, 'c', "Hello world!", -100, -100, -3000, -4000, -4000, &ft_printf_result);
    printf_result = printf(format, 'c', "Hello world!", -100, -100, -3000, -4000, -4000, &ft_printf_result);
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    // new case
    ft_printf_result = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
    printf_result = printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\n",' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
     printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //new case
    printf("printing digits with width 15:\n");
    format = "test %*s test\n";
    ft_printf_result = ft_printf(format, -1, "abc");
    printf_result = printf(format, -1, "abc");
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //new case
    printf("printing:\n");
    ft_printf_result = ft_printf("%08i\n", 34);
    printf_result = printf("%08i\n", 34);
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    //new
    printf("printing:\n");
    ft_printf_result = ft_printf("%7i\n", -14);
    printf_result = printf("%7i\n", -14);
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    // new
    printf("printing:\n");
    ft_printf_result = ft_printf("%5.i\n", 0);
    printf_result = printf("%5.i\n", 0);
    printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    // new
 //   printf("printing:\n");
 //   ft_printf_result = ft_printf("%8.5i\n", 34);
 //   printf_result = printf("%8.5i\n", 34);
 //   printf("result ft_printf: %i\nresult printf: %i\n\n", ft_printf_result, printf_result);
    return (0);

}
