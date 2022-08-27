#include <iostream>


int main()
{
    int value{45};
    std::cout <<"The value is : "<<value <<std::endl;
    std::cout<<std::endl;
    value +=5;
    std::cout <<"The value is : "<<value <<std::endl;
    value -=5;
    std::cout <<"The value is : "<<value <<std::endl;
    value *=2;
    std::cout <<"The value is : "<<value <<std::endl;
    value /=3;
    std::cout <<"The value is : "<<value <<std::endl;
    value %=11;
    std::cout <<"The value is : "<<value <<std::endl;
}