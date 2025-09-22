/* find substring without using string function*/
#include<stdio.h>
void substr(char*,int,int);
void main()
{
    char str[30]={"this is a simple string"};
    printf("given string:%s",str);
    printf("\n subtracting of length 12,starting at index position 9:");
    substr(str,9,12);
}
void  substr(char*s,int x,int y)
{
    int i,j=0;
    char sub[50];
    for(i=x-1;i<=x+y-1-1;i++)
    {
        sub[j]=s[i];
        j=j+1;
    }
    sub[j]='\0';
    printf("%s",sub);
}