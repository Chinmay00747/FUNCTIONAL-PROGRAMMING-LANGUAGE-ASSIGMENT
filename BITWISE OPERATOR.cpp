// PROGRAM FOR BITWISE OPERATOR

#include<stdio.h>

int main()
{
    int a,b;
    a=10;
    b=20;
        printf("%d\n",a & b); //BITWISE AND
        printf("%d\n",a | b); //BITWISE OR
        printf("%d\n",a<<b);  //BITWISE LEFT SHIFT
        printf("%d\n",a>>b);  //BITWISE RIGHT SHIFT
        printf("%d\n",a=~b);  //BITWISE NOT
        printf("%d\n",a^b);   //BITWISE XOR

        return 0;
        
}