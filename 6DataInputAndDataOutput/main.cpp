#include <iostream>
#include<string>

int main()
{
   
    //std::cout << "Hello World : " << std::endl;
    //int age = 28;
    //std::cout << "Age : " << age << std::endl;
    //std::cerr << "Error message :somthing is wrong" << std::endl;
    //std::clog << "Log message : Somthing "<< std::endl;  
    
    /*int age1;
    std::string name;
    std::cout << "Please type your name and age : " << std::endl;
    std::cin >> name;
    std::cin >> age1;
    std::cout << "Hello : " << name <<" you are  "<< age1 << " year old  " << std::endl;*/
    std::string full_name;
    int age3;
    std::cout<<"Please type in your full name and age "<< std::endl;
    std::getline(std::cin,full_name);
    std::cin>>age3;
    std::cout<<full_name<<" you are "<<age3<<" year old "<<std::endl;
    return 0;
}