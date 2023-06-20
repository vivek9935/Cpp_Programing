#include<iostream>
using namespace std;
int findPivot(int *arr, int low, int high)
{
	// Base cases
	if (high < low)
		return -1;
	if (high == low)
		return low;

	// low + (high - low)/2;
	int mid = (low + high) / 2;
	if (mid < high && arr[mid] > arr[mid + 1])
		return mid+1;

	if (mid > low && arr[mid] < arr[mid - 1])
		return (mid);

	if (arr[low] >= arr[mid])
		return findPivot(arr, low, mid - 1);

	return findPivot(arr, mid + 1, high);
}
int main(){
    int arr[7]={5,6,7,8,9,10,1};
    cout<<findPivot(arr,0,6)<<endl;
    
}