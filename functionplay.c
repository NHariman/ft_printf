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

    number = 6;
    pointer = &number;
    printf("printing i for number: %i\n",number);
    printf("printing i for *pointer: %i\n", *pointer);
    printf("print address of number: %x\n", &number);
    printf("print address of pointer: %x\n", pointer);
    printf("change value of number though pointer: to 5\n");
    *pointer = 5;
    printf("printing i for *pointer: %i\n", *pointer);
    printf("make a function that changes value of pointer to add one\n");
    value_change(pointer);
    printf("printing i for *pointer: %i\n", *pointer);
    
    return (0);
}