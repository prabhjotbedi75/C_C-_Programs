#include <stdio.h>
#include <conio.h>

struct card
{
    int face;
    int shape;
    int color;
};

int main()
{
    struct card deck[4]={{1,0,0},{2,0,0},{1,1,0},{2,1,0}};
    printf("%d\n",deck[0].face);
    printf("%d",deck[0].shape);
    printf("%d",deck[2].face);
    return 0;
}
