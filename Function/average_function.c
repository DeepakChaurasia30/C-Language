#include <stdio.h>

int average(int a,int b,int c);

int main() {

    int a ,b ,c;

    printf("Program to find Average of three no.\n");

    printf("Enter three no.");

    scanf("%d%d%d",&a,&b,&c);

    printf("\n Average is %d",average(a,b,c));

    return 0;

}

int average(int a,int b ,int c)

{

    return ((a+b+c)/3);

}
