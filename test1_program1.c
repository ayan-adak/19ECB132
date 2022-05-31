#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i=0,j,ar=0,k,n,c;
    scanf("%d %d",&n,&c);
    int *a=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if((a[j]+a[k]) % c==0)
            ar++;
        }
    }
    printf("%d\n",ar);
}


/* 

Input
6 3
1 3 2 6 1 2

Output
5

*/