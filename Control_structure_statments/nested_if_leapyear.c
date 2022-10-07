
// 07-10-2022
#include <stdio.h>

int main() {

    printf("Program to check leap year\n");

    int i;

    printf("Enter a year: ");

    scanf("%d",&i);

    if(i>0){ //nested if

    if (i%4>0){

  printf("Not a leap year");}

  else if (i%100>0)

  printf("Not a leap year");

  else if (i%200>0)

printf("Not a leap year");

else 

printf("yes, %d is a leap year", i);

}

else if (i<0)

printf("not a valid choses ");

else 

printf ("invalid input");

    return 0;

}
