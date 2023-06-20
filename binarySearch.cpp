#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int k)
{
    int mid=s+(e-s)/2;
 if(s>e)
 return false;
 if(arr[mid]==k)
 return true;
 if(k<mid)
 binarySearch(arr,mid+1,e,k);
 else
 binarySearch(arr,s,mid-1,k);
}
int main(){
    int arr[5]{2,5,7,88,97};
    int n=5;
    int k=8;
    int s=arr[0];
    int e=arr[n-1];
    cout<<binarySearch(arr,s,e,k)<<endl;
}
