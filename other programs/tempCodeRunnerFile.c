#include<stdio.h>
void xy(int x,int y){
    int *ptr;
    x=0;
    ptr=&x;
    y=*ptr;
    *ptr=2;
    printf("%d,%d",x,y);
}
void main(){
    xy(0,2);
}
