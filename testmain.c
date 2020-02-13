/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 17:51:11 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/11 20:00:50 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	lol;
	char *lmao;

	lol = 1127;
	lmao = "123456789";
	printf("print a string (s):\n%.*s\n", 3, "help"); // . indicates percision, * indicates that the 3 is the percision, it is given as an argument. s is string
	printf("print a string with percision minimum of 1 character, maximum of 4: %1.4s\nfrom original string: %s\n", lmao, lmao);
	printf("print a string with percision minimum of 1 character, maximum of 11: %1.11s\nfrom original string: %s\n", lmao, lmao);
	printf("%% 100%% 100%\n"); // prints a % and nothing else. ONLY works this way, one % will result in no % printed. if only one % is present and stuff is written behind it(and not a newline), it creates a segmentation error.
	printf("%c and %c\n", 'c', 99); //prints character c once as character other time as int ascii decimal value converted to character
	printf("d flag (signed decimal): %d\ni flag (signed decimal): %i\nu flag (unsigned decimal): %u\nx flag (lowercase hexadecimal): %x\nX flag (uppercase hexadecimal): %X\n", lol, lol, lol, lol, lol);
	printf("NOW WITH FLAGS:\nd flag (signed decimal): %d\ni flag (signed decimal): %i\nu flag (unsigned decimal): %u\nx flag (lowercase hexadecimal): %x\nX flag (uppercase hexadecimal): %X\n", lol, lol, lol, lol, lol);	 // now with flags the .5 indicates at least 5 digits must be printed, if less digits are available, 0 padding is provided in this case, the precision gives the MINIMUM amount of numbers that must be provided.
	return (0);
}
