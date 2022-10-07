#include <stdio.h>

long long int factorial(long long int i);

int main() {

    int f;

    printf("Program to do factors of a no.\n");

    printf("Enter a no.");

    scanf("%d" ,&f);

    // Write C code here

    printf("the factorial of %d is %d", f ,factorial(f));

    return 0;

}

long long int factorial(long long int i){

    if (i ==1 || i==0){

    return 1;

    }

    else{

        return i* factorial(i-1);

    }

}
