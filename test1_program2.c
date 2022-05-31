#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,arr=0,t;
    int stat[5]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        stat[t-1]++;
    }
    for(j=0;j<5;j++)
    {
        if(stat[j] > stat[arr]) 
        arr = j;
    }
    arr=arr+1;
    printf("%d\n",arr);
    return 0;
}


/*

Input
6
1 4 4 4 5 3

Output
4

*/