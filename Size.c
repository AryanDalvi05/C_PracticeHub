#include<stdio.h>
//A Program to Find Size of int, float, double and char in our computer
int main()  
{ 
    printf("Size of int: %zu bytes \n", sizeof(int));
    printf("Size of long int: %zu bytes \n", sizeof(long int));
    printf("Size of float: %zu bytes \n", sizeof(float));
    printf("Size of double: %zu bytes \n", sizeof(double));
    printf("Size of char: %zu byte \n", sizeof(char));
}

// sizeof() element tells us about the size of that datatype in bytes
// for that %zu format specifier is used as above