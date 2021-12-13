#include <stdio.h>
#include <stdlib.h>

void print(const char *c){
while(*c!='\0'){
    printf("%c",*c);
    c++;
}
printf("\n");
}
int main()
{
    char c[20]="Hello";
    print(c);
}
