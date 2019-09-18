#include <stdio.h>
int main(int argc, char *argv[])
{
    float a = 8.7, b = 1.3;
    printf("Looks like: %.1f + %.1f = %.1f\n", a, b, a+b);
    printf("The truth: %.20f + %.20f = %.20f\n", a, b, a+b);
    return 0;
}