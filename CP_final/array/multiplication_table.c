#include <stdio.h>

int main(){
	//declaring variables
    int n, i, a, start, end;

    //taking and printing the instructions
    printf("Enter first number from where you want to start multiplication : \n");
    scanf("%d",&start);

    printf("Enter Last number from where you want to end multiplication : \n");
    scanf("%d",&end);

  	//using loops
    for(n=start; n<=end; n++){
        a=0;
        for(i=1; i<=10; i++){
            a+=n; /* setting the value of a. i used addition instead of multiplication,
                    because computer takes too much time for multiplating numbers than doing addition */
          
            printf("%d x %d = %d\n",n,i,a);

        }
        printf("Multiplication has ended of %d\n\n",n);
    }


    return 0;
}