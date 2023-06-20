#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int lastOcc(vector<int>& arr, int s,int e, int k,int ans) {

    int mid = s + (e-s)/2;
    if(s>e){
        return -1;
    }

        if(arr[mid] == k){
            lastOcc(arr,mid+1,e,k,ans);
            ans = max(INT_MIN,mid);
        }
        else if(k > arr[mid]) {//Right me jao
        lastOcc(arr,mid+1,e,k,ans);
            
        }
        else if(k < arr[mid]) {//left me jao
        lastOcc(arr,s,mid-1,k,ans);
        }

        
    
    return ans;
}
int main()
{
    vector<int> arr{2,3,4,5,5,6,7};
    int s=0;
    int e=arr.size()-1;
    int k=5;
    int ans=-1;
    cout<<lastOcc(arr,s,e,k,ans)<<endl;
}