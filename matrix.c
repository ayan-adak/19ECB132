//Write a program to read m x n matrix and display the sum of row major formats of each column

#include<stdio.h>
void main()
{
	int a[10][10];
	int i,j,m,n,sum=0;
	printf("Enter the Order of the Matrix: \n");
	scanf("%d %d",&m,&n);
	printf("Enter the Coefficients of the Matrix: \n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			sum=sum+a[i][j];
		}
		printf("Sum of the %d row is = %d\n",i,sum);
		sum=0;
 }
}
  

/* Output

Enter the Order of the Matrix:
2 2

Enter the Coefficients of the Matrix:
1 4 2 3

Sum of the 0 row is = 5
Sum of the 1 row is = 5

*/