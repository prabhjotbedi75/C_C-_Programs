#include <stdio.h>
#include <stdlib.h>

void Increment(int *a)
{
    *a=*a+1;

}
int main()
{
    int a;
    a=10;
    Increment(&a);
    printf("a=%d",a);
}
