// Online C compiler to run C program online
#include <stdio.h>

int main() {
    printf("C Programm to calculate length of a integer no.\n");
   int a,b,n=0 ;
   printf("Enter a no. ");
   scanf("%d",&b);
   a=b;
   while( !=0)
   {
       b = b/10 ;
       n++;
   }
   
   printf("\n%d is the length of %d",n,a);
   
    return 0;
    
}
