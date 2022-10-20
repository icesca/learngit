#include<stdio.h>
#include"1.h"

void test_print()
{
    printf("test_print: %p\n", &num);
    printf("test_print: %d\n", num);
}
//static int num = 2;

void test()
{
    test_print();
    printf("test: %p\n", &num);
    printf("test: %d\n", num);
}
