#include<stdio.h>
#include<stdlib.h>
int main(){
int a;
int *p;
p = (int*)malloc(20*sizeof(int));
*p=20;
printf("%d",*p);
return 0;
}
