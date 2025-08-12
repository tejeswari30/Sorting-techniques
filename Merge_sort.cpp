#include <bits/stdc++.h>
using namespace std; 
// time complexity O(n log n)
//Space complexity O(n)
void Merge(int low, int mid, int high , vector<int>&A, int n){
	
	 //i: index for the left half
	 //j: index for the right half
	 //k: index for temporary array B.

    int i = low;
    int j = mid + 1;
    vector<int>B(n);  // Temporary array to store merged result
    int k = 0;
    while(i <= mid && j <= high){
        if(A[i] <= A[j]){
            B[k++] = A[i++];
        }
        else{
            B[k++] = A[j++];
        }
        //Compare elements from both halves and insert the smaller into B.
    }
    while (i <= mid)
    {
        B[k++] = A[i++];
    }
    while(j <= high){
        B[k++] = A[j++];
     //Copy remaining elements from the half that is not fully traversed yet.
    }
    //copy all this B into A;
    for(int i = 0 ; i < high - low + 1 ; i++){
        A[i + low ] = B[i];
    }
    
}
void MergeSort(int low, int high, vector<int>&A, int n){
    if(low >= high)return;// Base case: single element
    int mid = (low + high) / 2;
    MergeSort(low , mid , A, n);  // Sort left half
    MergeSort(mid + 1, high , A, n); // Sort right half

    Merge(low, mid, high , A, n); // Merge both halves

}
int main(){
	int n;
	cin >> n;
	vector<int>A(n);
	for(int i = 0; i < n; i++) cin >> A[i];
	MergeSort(0,n-1,A,n);// Call MergeSort on entire array
	
	for(int i = 0; i < n; i++)
	{
		cout << A[i] << endl;
	}
	
}
