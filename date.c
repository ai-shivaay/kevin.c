#include<stdio.h>
int main()
{
    int date,month,year;
    char seperator[2];
    printf("input the date:");
    scanf("%d%c%d%c%d",&date,&seperator[0],&month,&seperator[1],&year);
    printf("Date: %d\n",date);
    printf("Month: %d\n",month);
    printf("Year: %d\n",year);
    return 0;
}