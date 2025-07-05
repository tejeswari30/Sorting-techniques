#include <stdio.h>
int main()
{
	int n,temp,i,j;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j+1];
				A[j+1]=A[j];
				A[j]=temp;
			}
		}
	}
	printf("sorted elements: ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
