#include<iostream>
using namespace std;
int arraySum(int arr[],int n)
{
    int sum=0;
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];
    int a=arraySum(arr+1,n-1);
    cout<<a<<endl;
    sum=arr[0]+a;
    return sum;
    
}
int main(){
    int arr[5]{1,2,3,4,5};
    int n=5;
    cout<<arraySum(arr,n)<<endl;
}