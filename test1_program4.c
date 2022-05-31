#include<stdio.h>
#include<stdlib.h>
int main()
{
    int first,second,left=0,right=0,n,j,i=0;
    scanf("%d",&n);
    int arr[n][n];
    for(first=0;first<n;first++)
    {
        for(second=0;second<n;second++)
        {
            scanf("%d",&arr[first][second]);
        }
    }
    while(i<n)
    {
        right=right+arr[i][i];
        i++;
    }
    j=n-1,i=0;
    while(i<n)
    {
        left=left+arr[i][j];
        i++;
        j--;
    }
    printf("%d",abs(right-left));
}


/*

Input
3
11 2 4
4 5 6
10 8 -12

Output
15

*/