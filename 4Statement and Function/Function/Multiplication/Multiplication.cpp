#include <iostream>

int mulNumber(int first, int second)
{
    int result = first * second;
    return result;
}

int main()
{
    int num1 = 7;//first number 
    int num2 = 8;//second number 
    int mul;
    mul= num1*num2;
    std::cout<<"Multiplication : "<< mul << std::endl;
    mul = mulNumber(22, 55);
    std::cout << "Multplication : " << mul << std::endl;
    return 0;
}