
//logic 1
#include <stdio.h>

int cal(int,int);

int c;

int main() {

    int a,b;

    printf("Programm for calculator\n");

    printf("Enter two no : ");

    scanf("%d %d", &a,&b);

    printf("enter chose \n 1- + \n 2 - - \n 3 - * \n 4 - /  \n");

   scanf("%d",&c);

   printf("%d",cal(a,b));

    return 0;

}

int cal(int x, int y)

{

    if (c==1)

    return x+y;

    else if (c==2)

    return x-y;

    else if (c==3)

    return x*y;

    else

return x/y;

}

