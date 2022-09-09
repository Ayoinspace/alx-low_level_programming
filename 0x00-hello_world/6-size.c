#include <stdio.h>

/**
 * main - program that prints the size of various types on the the computer it is compiled and run on
 *
 * return: Always return 0 (sucess) else return a non zero number
 */

int main(void)
{

        printf("Size of a char: %i byte(s)\n", sizeof(char));
        printf("Size of an int: %i byte(s)\n", sizeof(int));
        printf("Size of a long int: %i byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
        printf("Size of a float: %i byte(s)\n", sizeof(float));
        return (0);



}
