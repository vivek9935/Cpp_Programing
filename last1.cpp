#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
// void print(vector<int>&arr,int s,int e)
// {
//     for(int i=s;i<=e;i++)
// {
//   cout<<arr[i]<<"  ";
// }cout<<endl;
// }
int lastOcc(vector<int>& arr, int s,int e, int k,int ans) {

    int mid = s + (e-s)/2;
    //print(arr,s,e);
    if(s>=e){
        return -1;
    }

        if(arr[mid] == k){
            ans = max(mid,lastOcc(arr,mid,e,k,ans));
             return ans;
            
        }
        

        else if(k > arr[mid]) {//Right me jao
        lastOcc(arr,mid+1,e,k,ans);
            
        }
        else if(k < arr[mid]) {//left me jao
        lastOcc(arr,s,mid-1,k,ans);
        }

        //return ans;
    
}
int main()
{
    vector<int> arr{2,3,4,4,5,5,6,6,7,7};
    int s=0;
    int e=arr.size()-1;
    int k=4;
    int ans=-1;
    cout<<lastOcc(arr,s,e,k,ans)<<endl;
}