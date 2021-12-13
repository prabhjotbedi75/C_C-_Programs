#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int isPrime=1;
    printf("Enter a number u want to check if it is prime or not:\n");
    scanf("%d",&n);
    for(int i=2;i*i<n;i++){
        if(n%i==0)
        {
            isPrime=0;
        }
    }
    if(isPrime){
        printf("The Number %d is prime number\n",n);
    }
    else{
        printf("The Number %d is not  prime number\n",n);
    }
}
