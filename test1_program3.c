#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int *ar=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    printf("%d\n",sum);
    return 0;
}


/*

Input
6
1 2 3 4 10 11

Output
31

*/