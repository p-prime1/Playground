#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include "1-pi.h"
#include "3-function_like_macro.h"
#include "4-sum.h"
#include "4-sum.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    /*int s;

    s = 98 + SIZE;
    printf("%d\n", s);*/

 /*   float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    */
/*
	
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    */
	
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
