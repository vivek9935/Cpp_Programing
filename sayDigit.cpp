#include<iostream>
#include<string>
using namespace std;
void call(int n,string arr[])
{
if(n==0)
return ;
int digit=n%10;
n=n/10;
call(n,arr);
cout<<arr[digit]<<"  ";
}
int main(){
    int n;
    cout<<"write the number"<<endl;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","siven","eight","nine"};
    if(n>0){
    call(n,arr);
    }
    else if(n==0)
    {
        cout<<"zero"<<endl;
    }
    else
    {
        n=n*-1;
        cout<<"minus ";
        call(n,arr);
    }
}