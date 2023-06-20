#include<iostream>
using namespace std;
class Hero{
    public:
Hero(){
    cout<<"costructor called"<<endl;
}
};
int main(){
    //static constructor called 
    Hero v;
    //dynamically constructor called
    Hero *h=new Hero;


}
