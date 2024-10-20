#include<stdio.h>
int main()
{
    int N,row,col,t;
    scanf("%d",&N);
    t=N;
    for(row=0;row<N;row++)
    {
        for(col=0;col<N-row;col++)
        {
            printf("%d ",t);
        }
          t=t-1;
        printf("\n");
    }
}
