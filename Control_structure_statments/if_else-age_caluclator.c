#include <stdio.h>

int main() {

    int a,b,c ;

    printf("Program to calculate age\n");

    printf("Enter current year like '2022' : ");

    scanf("%d",&a);

    printf("Enter your Birth year : ");

    scanf("%d", &b);

    c=a-b;

    if (c<=18)

    printf("\nyou are a child of %d years",c);

    else if (c>=18)

    printf("\nyou are muture of %d years",c);

    else 

    printf ("invalid input ");

    return 0;

}
