//Write a program for generating the Fibonacci numbers for a given number

#include<stdio.h>
int fibbonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else 
	{
		return(fibbonacci (n-1) + fibbonacci (n-2));
	}
}

int main()
{
	int n,i;
	printf("Enter the Number: ");
	scanf("%d",&n);
	printf("\n Fibbonacci of %d: ",n);
	for(i=0;i<n;i++)
	{
		printf("%d ",fibbonacci(i));
	}
}


/* 

Input - 5
Output - 0 1 1 2 3

*/