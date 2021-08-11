
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1;
    while(i<=3){
    printf("%d :inner loop is executed only once\n",i);
    int j=1;
    while(j<=4){
            printf("%d :Outer loop is executed until to completion\n",j);
            j++;
    }
    i++;
    }
    
    return 0;
}
