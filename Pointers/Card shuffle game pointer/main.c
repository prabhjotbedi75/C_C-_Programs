#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cash =100;
void Play(int bet){
    char C[3]={'J','Q','k'};
    printf("Shuffling....");
    srand(time(NULL)); //seeding random number generator
    int i;
    for(i = 0;i<5;i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp; //swaps character at position x and y
    }
    int playerGuess;
    printf("What's the position of queen - 1,2 or 3?  ");
    scanf("%d",&playerGuess);
    if(C[playerGuess - 1]== 'Q'){
        cash += 3*bet;
        printf("You Win! Result = \"%c %c %c\" Total Cash = %d\n",C[0],C[1],C[2],cash);
    }
    else {
        cash -= bet;
        printf("You Loose ! Result = \"%c %c %c\" Total Cash = %d\n",C[0],C[1],C[2],cash);
    }
}
int main()
{
    int bet;
    printf("**Welcome to virtual casino**\n\n");
    printf("Total cash = $%d\n",cash);
    while(cash >0){
        printf("what's your bet? $");
        scanf("%d",&bet);
        if(bet == 0|| bet > cash) break;
        Play(bet);
        printf("\n*****************************************************\n");
    }
}
