#include<stdio.h>
void main()
{
    float secs, years;
    int success;
    printf("input your age in years");
    success = scanf("%f", &years);
    if(success == 0)
        printf("the input is not a floating-point number.\n");
    else
    {
        secs = years * 365 * 24 * 60 * 60;
        printf("you have lived for %f seconds\n", secs);
    }
}