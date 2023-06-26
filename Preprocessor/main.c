#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include "1-pi.h"
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

    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
