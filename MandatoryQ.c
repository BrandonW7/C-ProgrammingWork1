#include <stdio.h>

int main(void)
{
    //Program to illustrate errors in a C program
    int num1, num2;
    float num3;

    num1 = 400;
    num2 = 600;
    num3 = num2;

    printf("num1 contains %d\n", num1);
    printf("num2 conatains %d and num3 contains %f\n", num2, num3);

    return 0;
}