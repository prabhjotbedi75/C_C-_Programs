#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int *A =(int*)calloc(n,sizeof(int));    //dynamically allocated memory
    for(int i=0;i<n;i++)
    {
        A[i]=i+1;
    }
    int *B =(int* )realloc( A,2*n*sizeof(int));
    printf("Prev block address = %d , new block address = %d\n",A,B);
    for(int i=0;i<2*n;i++)
    {
        B[i]=i+1;
        printf("%d\n",B[i]);
    }
}
