#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"this is a"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"this is b"<<endl;
    }
};
class C:public A,public B{

};
int main(){
    C obj;
    obj.A::fun();
    obj.B::fun();
}

