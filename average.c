#include<stdio.h>
void main()
{
    int n,i;
    float avg,sum=0,marks;
    printf("enter the number of subject:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the marks of subject:");
        scanf("%f",&marks);
        sum=sum+marks;
    }
        avg=sum/n;
        printf("average marks =%.2f\n",avg);
        
}