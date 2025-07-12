#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter size of an array: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
				min=j;
	    }
			  temp=A[i];
			  A[i]=A[min];
			  A[min]=temp;
	}
	printf("sorted list: ");
	for(int i=0;i<n;i++)
	printf("%d ",A[i]);
}
