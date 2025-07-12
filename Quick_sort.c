#include<stdio.h>
int QuickSort(int [], int, int);
int Quick(int [], int, int, int);
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
    scanf("%d", &A[i]);
    QuickSort(A,0,n-1);
    printf("The sorted array is: ");
    for(int i = 0 ; i < n ; i++)
	{
        printf("%d ", A[i]);
    }
}
int QuickSort(int A[], int low, int high)
{
    if(low < high)
	{
        int pivot = low;
        pivot = Quick(A, low, high, pivot);
        QuickSort(A, low, pivot - 1);
        QuickSort(A,pivot+1, high);

    }
}
int Quick(int A[], int low , int high, int pivot)
{
    int key = A[pivot];
    int s = low;
    int e = high;
    while(s < e)
	{
        while(A[s] <= key)
		{
            s++;
        }
        while(A[e] > key)
		{
            e--;
        }
        if(s < e)
		{
            int temp = A[s];
            A[s] = A[e];
            A[e] = temp;
        }

    }
    int temp = A[e];
    A[e] = A[pivot];
    A[pivot] = temp;
    return e;
}

