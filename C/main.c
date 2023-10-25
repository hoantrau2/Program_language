#include <stdio.h>
#include "non_static_funtion.h"
#include "static_funtion.h"

int main()
{
    int a = 5;
    int b = 7;

    printf(" a = %d, b= %d, cong = %d, tru =%d \n", a, b, cong(a, b), tru(a, b));

    return 0;
}

// gcc -c static_funtion.c -o static_funtion.o
// gcc -c non_static_funtion.c -o non_static_funtion.o
// gcc main.c static_funtion.o non_static_funtion.o -o main
// ./main