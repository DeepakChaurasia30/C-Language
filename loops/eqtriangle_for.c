  

#include<stdio.h>

#include<conio.h>

main()

{

clrscr();

int i,j,c,k;

printf("enter size");

scanf("%d",&c);

for(i=1;i<=c;i++)

{

for(k=(c-1);k>=i;k--)

{

printf(" ");

}

for(j=1;j<=i;j++)

{

printf("* ");

}

printf("\n");

}

getch();

}
