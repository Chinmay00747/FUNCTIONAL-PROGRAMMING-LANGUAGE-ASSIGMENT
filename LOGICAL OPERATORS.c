// PROGRAM FOR LOGIC OPERATORS

#include<stdio.h>

int main()
{
    int a,b,c;
    a=10;
    b=10;
    c=30;
        printf("%d\n",(a>b)&&(b>c)); //LOGICAL AND
        printf("%d\n",(a>b)||(b<c)); //LOGICAL OR
        printf("%d\n",!(a>b));       //LOGICAL NOT

        return 0;
}
