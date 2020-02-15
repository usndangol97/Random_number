#include<stdio.h>
#include<stdlib.h>

int checknum(int arr[],int i,int flag)
{
    for(int j=0;j<i;j++)
    {
        if(arr[i]==arr[j])
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    int seed[50],seed_sq,next_no,i=0,flag=0;
    printf("Enter the Seed:");
    scanf("%d",&seed[i]);
    do
    {
        seed_sq=seed[i]*seed[i];
        next_no=(seed_sq%1000)/10;
        seed[i+1]=next_no;
        printf("=>%d\n",seed[i]);
        i++;
        flag=checknum(seed,i,flag);
    }while(flag==0);
}

