/* program to illustrate the sum of the squares*/
#include<stdio.h>
int main()
{
int i;
int sum=0,sum_of_squares=0;
for(i=2;i<=20;i +=2)
{
    sum=sum+i;
    sum_of_squares +=i*i;
}
printf("sum of first 15 positive even numbers=%d\n",sum);
printf("sum of squares =%d\n",sum_of_squares);
return 0;
}