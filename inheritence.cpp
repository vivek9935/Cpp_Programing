/*Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.*/
//syntex to inherent parent class
/*class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
*/
#include<iostream>
#include<string>
using namespace std;
class Human{
public:
int height;
int weight;
int age;
int getage()
{
    return this->age;
}
void setweight(int w)
{
    this->weight=w;
}
};
class Male:public Human{
public:
string hair;
void sleep(){
    cout<<"Male is sleeping"<<endl;
}
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.hair<<endl;
    object1.setweight(84);
    cout<<object1.weight<<endl;
    object1.sleep();

}