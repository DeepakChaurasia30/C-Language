#include<stdio.h>

main()
{ printf("Program to find ASCII Value\n");

    do{    // using do loop to make the project keep running
    char a ;// defining a char variable
    printf("\nEnter a char ");
    scanf("%c", &a); // user input
    printf("\nThe ascii value of  %c = %d " ,a, a); // we use variable type as char but outting value as integer thats why compiler give its ascii value which is an int
    }while(0!=1);

    return 0 ;
}