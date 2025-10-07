#include<stdio.h>
#include<string.h>
int main()
{
    int bit,i,n;
    unsigned long decimal=0;
    char binary[33];    /*MAXIMUM 32 BITS*/
    printf("Input the binary number:");
    scanf("%32s",binary);
    n=strlen(binary);
    for(i=0;i<n;i++)
    {
    bit=binary[i]-'0';
    decimal=(decimal<<1)+bit;
}
printf("the decimal equivalent of binary number %s is %lu\n",binary,decimal);
return 0;
}