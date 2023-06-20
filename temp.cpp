#include<iostream>
using namespace std;
bool arraySum(int arr[],int n,int k)
{
    
    if(n==0)
    return 0;
    if(arr[0]==k)
    return 1;
    int a=arraySum(arr+1,n-1,k);
    cout<<a<<endl;
    
    
}
int main(){
    int arr[5]{1,2,3,4,5};
    int n=5;
    int k=3;
    arraySum(arr,n,k);
    return 0;
}