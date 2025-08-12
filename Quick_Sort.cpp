#include <bits/stdc++.h>
using namespace std;
int Arrange(int low, int high, vector<int>&A){
	int key = A[low]; // Choose the first element as the pivot
	int i = low;
	int j = high;
	while(i < j){
		while(i <= high && A[i] <= key){
			i++;
		}
		while(j >= low && A[j] > key){
			j--;
		}
		if(i < j){
			swap(A[i],A[j]);
		}
	}
	swap(A[low], A[j]);
	return j;
}
void QuickSort(int low, int high, vector<int>&A){
	if(low >= high) return;
	int pivot = Arrange(low, high, A);
	QuickSort(low,pivot,A);
	QuickSort(pivot+1,high, A);
}
int main()
{
	int n;
	cin >> n;
	vector<int>A(n);
	for(int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	QuickSort(0,n-1,A);
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
}
