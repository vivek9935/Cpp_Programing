/*Features of Encapsulation
Below are the features of encapsulation:

We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class. 
The function which we are making inside the class must use only member variables, only then it is called encapsulation.
If we don’t make a function inside the class which is using the member variable of the class then we don’t call it encapsulation.
Increase in the security of data
It helps to control the modification of our data members.*/
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person(string name, int age) {
	this->name = name;
	this->age = age;
	}
	void setName(string name) {
	this->name = name;
	}
	string getName() {
	return name;
	}
	void setAge(int age) {
	this->age = age;
	}
	int getAge() {
	return age;
	}
};

int main() {
Person person("John Doe", 30);

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

person.setName("Jane Doe");
person.setAge(32);

cout << "Name: " << person.getName() << endl;
cout << "Age: " << person.getAge() << endl;

return 0;
}
