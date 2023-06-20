/*Encasulation
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.*/
//getter and setter methrod so we can acces private member
#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
     
    }
     int Health;
};

int main() {
  Employee myObj;
  Employee *myObj1=new Employee;
  myObj.setSalary(50000);
  cout <<"my static allocation" <<myObj.getSalary()<<endl;
  cout<<(*myObj1).Health<<endl;
  (*myObj1).setSalary(2000);
  cout<<"dynamic allocation   "<<(*myObj1).getSalary()<<endl;
  //alternate style to write 
  cout<<myObj1->Health<<endl;
 myObj1->setSalary(2000);
  cout<<"dynamic allocation   "<<myObj1->getSalary()<<endl; 

  delete myObj1;
  return 0;
}
