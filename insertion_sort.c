#include <stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter size: ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=A[i];
		j=i-1;
		while(temp<A[j] && (j>=0))
		{
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=temp;
	}
	printf("sorted array: ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
