#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1025;
    int* p;
    p=&a;
    printf("Size of int %d bytes\n",sizeof(int));
    printf("Address = %d,value = %d\n",p,*p);
    printf("After Addition Address = %d,value = %d\n",p+1,*(p+1));
    char *p0;
    p0=(char*)p;
    printf("Size of char %d bytes\n",sizeof(char));
    printf("Address = %d,value = %d\n",p0,*p0);
    printf("After Addition Address = %d,value = %d\n",p0+1,*(p0+1));
    }
