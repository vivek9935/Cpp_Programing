#include <iostream>

int addNumber(int first_param,int second_param){
    int result = first_param + second_param;
    return result;
}

int main(){
    int first_number = 3; //Stement
    int second_number = 7;
    std::cout << "first number : " << first_number << std::endl;//3
    std::cout << "second number : " << second_number << std::endl;//7
    int sum = first_number + second_number;
    std::cout << "sum : " << sum << std::endl;//10
    sum = addNumber(25,7);
    std::cout << "sum : " << sum << std::endl;//32
    sum = addNumber(37,66);
    std::cout << "sum : " << sum << std::endl;
    return 0;
}