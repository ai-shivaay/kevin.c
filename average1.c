#include<stdio.h>
int main()
{
    int i,num=0;
    float sum=0,average;
    printf("enter the marks,-1 at the end.\n");
    scanf("%d",&i);
    while(i!=-1)
    {
        sum=sum+i;
        num++;
        scanf("%d",&i);
    }
    average=sum/num;
    printf("average marks=%.2f",average);
    return 0;
}