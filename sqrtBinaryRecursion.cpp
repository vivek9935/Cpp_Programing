#include<iostream>
using namespace std;
void print(int n,int s,int e)
{
    for(int i=0;i<=e;i++)
    {
        cout<<i<<"   ";
    }cout<<endl;
}
int sqrt(int n,int s ,int e,int ans)
{  
    print(n,s,e);
    if(s>=e)
    return -1;
     int mid=s+(e-s)/2;
    if((mid*mid)<=n)
    {
     return mid;
    }
    if((mid*mid)>n)
    sqrt(n,s,mid-1,ans);

    sqrt(n,mid+1,e,ans);
   
}
int main(){
    int n=10;
    int s=0;
    int e=n;
    int ans =0;
    cout<<sqrt(n,s,e,ans)<<endl;
}