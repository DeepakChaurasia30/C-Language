#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,m=0;
    scanf("%d", &n);
    
    //Complete the code to calculate the sum of the five digits on n.
    while(n!=0)
    {
       m = (n%10)+m; // 1-9%10=1-9
       if (n<10)
       {
       break;
       }
       else {
       n = n/10;
       }
       
    }
    printf("%d",m);
    
    return 0;
}
