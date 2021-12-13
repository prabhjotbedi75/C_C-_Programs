#include <stdio.h>
#include <stdlib.h>
//With The help of pointers you can modify values of the variable to which the pointer points to
int main(){
    int a=10;
    int* p;
    p=&a;
    printf("The address of a is %d\n",p);
    printf("Value of a is %d\n",*p);
    //Performing Pointer Arithmetic
    printf("Size Of Integer is %d\n",sizeof(int));
    printf("Address after performing the arithmetic is %d\n",p+1);
    printf("Value on the added address is %d\n",*(p+1));
}
