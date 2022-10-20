#include<stdio.h>
#include"1.h"

//static int num = 2;

int main()
{
    test_print();
    test();
    printf("2.c: %p\n", &num);
    printf("2.c: %d\n", num);
}
