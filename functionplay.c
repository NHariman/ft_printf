#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    oops_another_function(int *pointer)
{
    *pointer = *pointer + 5;
}

void    value_change(int *pointer)
{
    oops_another_function(pointer);
    //*pointer = *pointer + 1;
}

int     main(void)
{
    int *pointer;
    int number;

    number = -6000;
    pointer = &number;
    int lol = -5;
    printf("printing i for number: %i\n",number);
    printf("printing i for *pointer: %i\n", *pointer);
   // printf("print address of number: %x\n", &number);
   // printf("print address of pointer: %x\n", pointer);
    printf("X of number: %X\n", number);
    printf("made positive and inverted bits: %X\nX of 6000: %X\n", ~(-number + 1), number);
    printf("change value of number though pointer: to 5\n");
    *pointer = 5;
    printf("printing i for *pointer: %i\n", *pointer);
    printf("make a function that changes value of pointer to add one\n");
    value_change(pointer);
    printf("printing i for *pointer: %i\n", *pointer);
    printf("print number %%06i: %06i stff\n", lol);
    printf("print string %%s but with precision and padding: %10.5s", "hereklhadlfkhdflahfjkhs\n");
    write(0, '0', 5);
    return (0);
}