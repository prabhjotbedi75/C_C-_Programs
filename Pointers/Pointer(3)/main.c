#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int* p;
    p=&a;
    printf("Size of int %d bytes\n",sizeof(int));
    printf("Address = %d,value = %d\n",p,*p);
    void *p0;
    p0=p;
    printf("Address = %d\n",p0);
}
