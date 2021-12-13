#include <stdio.h>
#include <conio.h>

int main()
{
    int number,digit1,digit2,digit3,digit4,digit5,sumOfDigit;
    printf("\n\tEnter number :");
    scanf("%d",&number);
    digit1=number%10;
    digit2=(number/10)%10;
    digit3=(number/100)%10;
    digit4=(number/1000)%10;
    digit5=(number/10000)%10;
    sumOfDigit=digit1+digit2+digit3+digit4+digit5;
    printf("\n\tsum : %d",sumOfDigit);
    return 0;
}
