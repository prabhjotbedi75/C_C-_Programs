#include <stdio.h>
#include <stdlib.h>

int main()
{
int A[]={4,5,6,7,8};
int i;
int *p = A;
p++;
for(i=0;i<5;i++){
    printf("Address = %d\n",&A[i]);
    printf("Address = %d\n",(A+i));
    printf("Value = %d\n",A[i]);
    printf("Value = %d\n",*(A+i));
    printf("Address = %d\n",*p);
}
}
