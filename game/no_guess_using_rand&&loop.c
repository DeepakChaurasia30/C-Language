#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,k=0;

srand(time(0));
    i = rand()%100+1;
    /* code */
do {
    printf("Enter your guss no. ");
    scanf("%d",&j);

    if (j<i){
    printf("Enter higher no.\n");
    }
    else if(j>i){
    printf("Enter lower no. \n");
    }
    else 
    {
        printf("You gussed no. in %d th time\n",k);
    }
k++;
}
while(i!=j);
    return 0;
}
