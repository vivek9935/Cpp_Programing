#include<iostream>
using namespace std;
void home(int start,int end)
{
    cout<<"Sourse "<<start<<"  destination  "<<end<<endl;
    if(start==end)
    {
        cout<<"you reach"<<endl;
        return;
    }
    start++;
    home(start,end);
}
int main(){
    home(1,10);
}