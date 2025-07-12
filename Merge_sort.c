#include<stdio.h>
void merge_sort(int[],int,int);
void merge(int[],int,int,int);
int main()
{
	int n,i;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	merge_sort(a,0,n-1);
	printf("After implementing merge: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void merge_sort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
		
	}
}
void merge(int a[],int low,int mid,int high)
{
	int b[10],i,j,k,l;
	i=low;
	j=mid+1;
	k=low;
	while((i<=mid)&&(j<=high))
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=high)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(l=low;l<k;l++)
	a[l]=b[l];
}
