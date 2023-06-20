#include<iostream>
using namespace std;
int sqrt(int n)
{ int ans=0;
   for(int i=1;i<n;i++)
   {
    if((i*i)<=n)
    {
       ans=i;
    }
    else 
    break;
   }
   return ans;
}
int main(){
    int n=25;
    cout<<sqrt(n)<<endl;
}