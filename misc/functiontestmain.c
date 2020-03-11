/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functiontestmain.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 17:51:11 by nhariman       #+#    #+#                */
/*   Updated: 2020/02/21 17:01:00 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_print_hex_low(int nb, int *count)
{
	if (nb >= 10 && nb < 16)
	{
		ft_putchar_fd(nb + 87, 0);
		*count = *count + 1;
	}
	else if (nb >= 16)
	{
		ft_print_hex_low(nb / 16, count);
		ft_print_hex_low(nb % 16, count);
	}
	else
	{
		ft_putchar_fd(nb + '0', 0);
		*count = *count + 1;
	}
}

void			ft_print_hex_up(int nb, int *count)
{
	if (nb >= 10 && nb < 16)
	{
		ft_putchar_fd(nb + 55, 0);
		*count = *count + 1;
	}
	else if (nb >= 16)
	{
		ft_print_hex_up(nb / 16, count);
		ft_print_hex_up(nb % 16, count);
	}
	else
	{
		ft_putchar_fd(nb + '0', 0);
		*count = *count + 1;
	}
}

int	main(void)
{
	int	lol;
	char *lmao;
	int	result;
	int count;
	int	*countp;

	lol = 11274532;
	count = 0;
	countp = &count;
	lmao = "123456789";
	ft_print_hex_low(lol, countp);
	printf("\nreturn count: %i\n", *countp);
	printf("print a string (s):\n%.*s\n", 3, "help"); // . indicates percision, * indicates that the 3 is the percision, it is given as an argument. s is string
	printf("print a string with percision minimum of 1 character, maximum of 4: %1.4s\nfrom original string: %s\n", lmao, lmao);
	printf("print a string with percision minimum of 1 character, maximum of 11: %1.11s\nfrom original string: %s\n", lmao, lmao);
	printf("%% 100%% 100\n"); // prints a % and nothing else. ONLY works this way, one % will result in no % printed. if only one % is present and stuff is written behind it(and not a newline), it creates a segmentation error.
	printf("%c and %c\n", 'c', 99); //prints character c once as character other time as int ascii decimal value converted to character
	printf("d flag (signed decimal): %d\ni flag (signed decimal): %i\nu flag (unsigned decimal): %u\n u flag with bits flipped: %u\nx flag (lowercase hexadecimal): %x\nX flag (uppercase hexadecimal): %X\n", ~lol, lol, lol, lol, lol, lol);
	printf("NOW WITH FLAGS:\nd flag (signed decimal): %d\ni flag (signed decimal): %i\nu flag (unsigned decimal): %u\nx flag (lowercase hexadecimal): %x\nX flag (uppercase hexadecimal): %X\n", lol, lol, lol, lol, lol);	 // now with flags the .5 indicates at least 5 digits must be printed, if less digits are available, 0 padding is provided in this case, the precision gives the MINIMUM amount of numbers that must be provided.
	result = printf("\n");
	printf("%i\n", result);
	return (0);
}
