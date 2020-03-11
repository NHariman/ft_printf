/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ultimate_printf_test.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 17:26:42 by dkrecisz       #+#    #+#                */
/*   Updated: 2020/03/10 17:42:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[1;31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int     main(void)
{
	char c;
	printf("%s++++ Simple ft_printf output tester ++++%s\n", KRED, KNRM);
	printf("%s++++ Enable slow output? [Y]es, [n]o ++++%s\n", KRED, KNRM);
	scanf("%c", &c);

	printf("%s---- TEST 1 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%caaa%-7saaa%%3caa%d] ", 'Z', "TOAST", 'Z'));
    printf("[%d]\n", ft_printf("MINE [%caaa%-7saaa%%3caa%d] ", 'Z', "TOAST", 'Z'));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 2 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%05.1d] ", 1));
    printf("[%d]\n", ft_printf("MINE [%05.1d] ", 1));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 3 ----%s\n", KRED, KNRM);
	printf("[%d]\n", printf("REAL [%d%d] ", 1, 2));
	printf("[%d]\n", ft_printf("MINE [%d%d] ", 1, 2));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 4 ----%s\n", KRED, KNRM);
	printf("[%d]\n", printf("REAL [%-s%.3sdv9d9okKRo%%eEbdDo] ", "", "Polvtlui3zGGPR"));
    printf("[%d]\n", ft_printf("MINE [%-s%.3sdv9d9okKRo%%eEbdDo] ", "", "Polvtlui3zGGPR"));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 5 ----%s\n", KRED, KNRM);
	printf("[%d]\n", printf("REAL [%-.5iBGTE%%cKyxBLU%%aR84rr] ", 0));
    printf("[%d]\n", ft_printf("MINE [%-.5iBGTE%%cKyxBLU%%aR84rr] ", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 6 ----%s\n", KRED, KNRM);
	printf("[%d]\n", printf("REAL [%XGsj4%0u%-17.2snTPWx%020.1u%-*c] ", 0, 2147483647, "jO egLeJqkVntjqFq7ZKzzVxTLwTeqVN1NxtepV0K8GuTom5hAFqYSXwZGz4BH8Pym2TKtqjso0kyC", -2147483647, 3, 'u'));
	printf("[%d]\n", ft_printf("MINE [%XGsj4%0u%-17.2snTPWx%020.1u%-*c] ", 0, 2147483647, "jO egLeJqkVntjqFq7ZKzzVxTLwTeqVN1NxtepV0K8GuTom5hAFqYSXwZGz4BH8Pym2TKtqjso0kyC", -2147483647, 3, 'u'));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 7 ----%s\n", KRED, KNRM);
	printf("[%d]\n", printf("REAL [%020u%-*c] ", -2147483646, 3, 'u'));
	printf("[%d]\n", ft_printf("MINE [%020u%-*c] ", -2147483646, 3, 'u'));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 8 ----%s\n", KRED, KNRM);
	printf("[%d]\n", printf("REAL [%-17.2d] ", 1));
	printf("[%d]\n", ft_printf("MINE [%-17.2d] ", 1));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);
	
	printf("%s---- TEST 9 ----%s\n", KRED, KNRM);
	printf("[%d]\n", printf("REAL [%017.*d] ", 5, 1));
	printf("[%d]\n", ft_printf("MINE [%017.*d] ", 5, 1));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 11 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%.*x] ", 5, 615601428));
	printf("[%d]\n", ft_printf("MINE [%.*x] ", 5, 615601428));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	int a = 1;
	printf("%s---- TEST 12 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%.p] ", &a));
	printf("[%d]\n", ft_printf("MINE [%.p] ", &a));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 13 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%.p] ", NULL));
	printf("[%d]\n", ft_printf("MINE [%.p] ", NULL));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);


	printf("%s---- TEST 14 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%p] ", NULL));
	printf("[%d]\n", ft_printf("MINE [%p] ", NULL));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 15 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%-.5%] "));
	printf("[%d]\n", ft_printf("MINE [%-.5%] "));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 16 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%2u] ", -1));
	printf("[%d]\n", ft_printf("MINE [%2u] ", -1));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 17 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%p]", (void*)-1));
	printf("[%d]\n", ft_printf("MINE [%p]", (void*)-1));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 18 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%p]", (void*)ULONG_MAX));
	printf("[%d]\n", ft_printf("MINE [%p]", (void*)ULONG_MAX));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 19 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%2u] ", -1));
    printf("[%d]\n", ft_printf("MINE [%2u] ", -1));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 20 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [15chiffre 1 %.d chiffre 2 %.d] ", 42, -42));
	printf("[%d]\n", ft_printf("MINE [15chiffre 1 %.d chiffre 2 %.d] ", 42, -42));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 21 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%5%] "));
	printf("[%d]\n", ft_printf("MINE [%5%] "));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 22 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%d] ", INT_MIN));
    printf("[%d]\n", ft_printf("MINE [%d] ", INT_MIN));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 23 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%-11u] ", UINT_MAX));
    printf("[%d]\n", ft_printf("MINE [%-11u] ", UINT_MAX));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 24 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [ultimate1 %*d        %*i]", 500, 0, 10, 10));
	printf("[%d]\n", ft_printf("MINE [ultimate1 %*d        %*i]", 500, 0, 10, 10));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 25 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%5.0d]", 0));
	printf("[%d]\n", ft_printf("MINE [%5.0d]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 26 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%05.0d]", 0));
	printf("[%d]\n", ft_printf("MINE [%05.0d]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 27 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%00.0d]", 0));
	printf("[%d]\n", ft_printf("MINE [%00.0d]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 28 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%5.0u]", 0));
	printf("[%d]\n", ft_printf("MINE [%5.0u]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 29 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%05.0u]", 0));
	printf("[%d]\n", ft_printf("MINE [%05.0u]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 30 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%00.0u]", 0));
	printf("[%d]\n", ft_printf("MINE [%00.0u]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 31 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%5.0x]", 0));
	printf("[%d]\n", ft_printf("MINE [%5.0x]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);
	
	printf("%s---- TEST 32 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%05.0x]", 0));
	printf("[%d]\n", ft_printf("MINE [%05.0x]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 33 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%00.0x]", 0));
	printf("[%d]\n", ft_printf("MINE [%00.0x]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 34 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%5.0X]", 0));
	printf("[%d]\n", ft_printf("MINE [%5.0X]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 35 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%05.0X]", 0));
	printf("[%d]\n", ft_printf("MINE [%05.0X]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 36 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%00.0X]", 0));
	printf("[%d]\n", ft_printf("MINE [%00.0X]", 0));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 37 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%.5s%.4s]", "ABC", " DEF"));
	printf("[%d]\n", ft_printf("MINE [%.5s%.4s]", "ABC", " DEF"));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 38 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%s%s%s%s]", "Some", "body ", "once ", "told me"));
	printf("[%d]\n", ft_printf("MINE [%s%s%s%s]", "Some", "body ", "once ", "told me"));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);


	printf("%s---- TEST 39 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [%4.10.4d]", 42));
	printf("[%d]\n", ft_printf("MINE [%4.10.4d]", 42));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);
	
	printf("%s---- TEST 40 ----%s\n", KRED, KNRM);
	struct s_test {
	int i1;
	int i2;
	} __attribute__((packed, aligned(1)));
	struct s_test test;
	test.i1 = INT_MAX;
	test.i2 = INT_MAX;
	printf("   printf:\t\t\t%d\n",     printf("|%x|", test));
	printf("ft_printf:\t\t\t%d\n",  ft_printf("|%x|", test));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);

	printf("%s---- TEST 41 ----%s\n", KRED, KNRM);
    printf("[%d]\n", printf("REAL [% ]"));
	printf("[%d]\n", ft_printf("MINE [% ]"));
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);


	int i0 = 0;
    int i1 = INT_MIN;
    int i2 = INT_MAX;
    int i3 = -1;
    int i4 = 0;
    int i5 = 1;
    int i6 = 42;

    unsigned int ui0 = 0;
    unsigned int ui1 = INT_MAX;
    unsigned int ui2 = 0;
    unsigned int ui3 = 1;
    unsigned int ui4 = 42;

    char c0 = 0;
    char c1 = 'A';
    char c2 = '\t';
    char c3 = '\r';

    char *s0 = NULL;
    char *s1 = "";
    char *s2 = "ABC";
    char *s3 = "";
    char *s4 = "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";

    
    int ret_original;
    int ret_own;

	
	printf("%s---- TEST 42 ----%s\n", KRED, KNRM);
	printf("%s+++Get ready for the final Boss!!!+++%s\n", KRED, KNRM);
	sleep(3);
	printf("%sReady...!%s\n", KRED, KNRM);
	sleep(2);
	printf("%sSteady...!%s\n", KRED, KNRM);
	sleep(2);
	printf("%s...%s\n", KRED, KNRM);
	sleep(2);
	printf("%s...%s\n", KRED, KNRM);
	sleep(2);
	printf("%s+++GO!+++%s\n", KRED, KNRM);
	sleep(2);
    ret_own =   ft_printf("|%-10.d %-.5d %d ABC  %% %24.12d %          %00%        %%    %5.4%  %%%-.5%%%   %020%           % %0.20% %020% %d%d%10d%02u%10.10u%-20.4u%-.u%5.u%c%c%c%c%42.21s%s%s%s%s|\n", i0, i1, i2, i3, i4, i5, i6, ui0, ui1, ui2, ui3, ui4, c0, c1, c2, c3, s0, s1, s2, s3, s4);
    ret_original = printf("|%-10.d %-.5d %d ABC  %% %24.12d %          %00%        %%    %5.4%  %%%-.5%%%   %020%           % %0.20% %020% %d%d%10d%02u%10.10u%-20.4u%-.u%5.u%c%c%c%c%42.21s%s%s%s%s|\n", i0, i1, i2, i3, i4, i5, i6, ui0, ui1, ui2, ui3, ui4, c0, c1, c2, c3, s0, s1, s2, s3, s4);
	printf("\n");
	if (c == 'y' || c == 'Y')
		sleep(1);
	if (ret_original == ret_own)
	{
		printf("%sCongrats mate you beat the final boss!%s\n", KGRN, KNRM);
		printf("%sFinal return values of the boss fight:\nft_printf: %d\n   printf: %d%s\n", KGRN, ret_own, ret_original, KNRM);
		sleep(1);
		printf("%sNow you are ready to beat the arse of the ultimate super final Boss: Moulinette!%s\n", KRED, KNRM);
		printf("%sGood luck bro!%s\n", KRED, KNRM);
	}
	else
	{
		printf("%sYou dead!%s\n", KRED, KNRM);
		sleep(2);
		printf("\n%sShame on you!!!%s\n", KRED, KNRM);
		sleep(2);
		printf("%sFinal return values of the boss fight:\nft_printf: %d\n   printf: %d%s\n", KGRN, ret_own, ret_original, KNRM);
	}



	printf("%s--- Run leaks command on executable for leak check ---\n", KRED);
	sleep(60);


	return(0);
}
