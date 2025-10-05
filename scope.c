/* example to illustrate the scope of the variables*/
#include<stdio.h>
void main()
{
    int i=10;
    printf("in main.i is %d\n",i);
    {
    int i=20;
    printf("in compound statement.i is %d\n",i);
    i++;
    printf("after incrementing: i is %d\n",i);
}
printf("in main again. i is %d\n",i);

}