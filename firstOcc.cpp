#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int firstOcc(vector<int> &arr, int s, int e, int key)
{

    int mid = s + (e - s) / 2;
    int ans1;
    int ans2;
    if (s >= e)
    {
        return ans1;
    }

    if (arr[mid] == key)
    {
        
        firstOcc(arr, mid+1, e, key);
        ans1=max(INT_MIN,mid);
        ans2=min(INT_MAX,mid);
        cout<<ans1<<"    "<<ans2<<endl;
        return ans1;
        
        
    }

    if (key > arr[mid]) // Right me jao
        firstOcc(arr, mid + 1, e, key);

    else
        firstOcc(arr, s, mid - 1, key);

    //return ans;
}
int main(){
    vector<int> arr{1,2,9,9,10};
    int s=0;
    int e=arr.size();
    int key=9;
    cout<<firstOcc(arr,s,e,key);
    return 0;
}