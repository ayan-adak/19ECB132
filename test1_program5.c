#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,tall,tallest=0,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&tall);
        if(tall>tallest)
        {
            tallest=tall;
            count=1;
        }
        else if(tall==tallest)
        {
            count++;
        }
    }
    printf("%d",count);
}