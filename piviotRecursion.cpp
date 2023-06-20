#include<iostream> 
using namespace std;

int getPivot(int arr[], int s,int e) {
    int mid = s + (e-s)/2;
if(s>e)
return -1;

        if(arr[mid] >= arr[0])
        {
            getPivot(arr, mid+1,e);
        }
        else{
            getPivot(arr, s,mid);
        }
        mid = s + (e-s)/2;

}
int main() {
    int arr[5] = {1, 3, 8, 10, 17};
    int n=5;
    int s=0;
    int e=n-1;
    cout << "Pivot is " << getPivot(arr, s,e) << endl;
}