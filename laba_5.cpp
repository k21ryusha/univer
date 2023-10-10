#include <stdio.h>
#include <iostream>
#include <math.h>
int main()
{
    float a = 8;
    float b = sin(a);
    float c = log10(a);
    float d = exp(a);
    float e = abs(a);
    float s = (a+b)*(a+b+c)*(a+b+c+d)*(a+b+c+d+e);
    float ss = (a+sin(a))*(a+sin(a)+log10(a))*(a+sin(a)+log10(a)+exp(a))*(a+sin(a)+log10(a)+exp(a)+abs(a));
    printf("%f\n",a);
    printf("%f\n",b);
    printf("%f\n",c);
    printf("%f\n",d);
    printf("%f\n",e);
    printf("%f\n",s);
    printf("%f\n",ss);

    return 0;
}