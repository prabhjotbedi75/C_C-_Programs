#include <stdio.h>
#include <conio.h>
struct Rectangle
{
int length;
int breadth;
};
int main()
{
    struct Rectangle *P;
    P=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    P->length=10;
    P->breadth=20;
    printf("%d,%d",P->length,P->breadth);
}


