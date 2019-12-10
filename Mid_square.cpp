#include<stdio.h>
#include<stdlib.h>

int main()
{
    int seed,seed_sq,next_no,n;
    printf("Enter the Seed:");
    scanf("%d",&seed);
    printf("Enter no of Random digits you want:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        seed_sq=seed*seed;
        next_no=(seed_sq%1000)/10;
        seed=next_no;
        printf("=>%d\n",seed);
    }
}

