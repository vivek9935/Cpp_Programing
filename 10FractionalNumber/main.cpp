#include <iostream>
#include <iomanip>


int main()
{
    //Declare and initialize the variables 
    float number1{1.12345678901234567890f};
    double number2{1.12345678901234567890};
    long double number3{1.12345678901234567890L};

    //Printout the size 
    std::cout<<std::setprecision(20);
    std::cout<<"size of float : "<<number1<<" size "<<sizeof(float)<<std::endl;
    std::cout<<"size double : "<<number2<<" size "<<sizeof(double)<<std::endl;
    std::cout<<"size of long double :"<<number3<<" size "<<sizeof(long double)<<std::endl;
    std::cout<<"--------------------------------------------"<<std::endl;
    double number5{192400023};
    double number6{1.192400023e8};
    double number7{1.924e8};
    double number8{0.00000000003498};
    double number9{3.498e-11};
    std::cout<<std::setprecision(20);
    std::cout<<"number5 "<<number5<<std::endl;
    std::cout<<"number6 "<<number6<<std::endl;
    std::cout<<"number7 "<<number7<<std::endl;
    std::cout<<"number8 "<<number8<<std::endl;
    std::cout<<"number9 "<<number9<<std::endl;
    //infinity and NaN
    std::cout<<std::endl;
    std::cout<<"infinty and NaN"<<std::endl;
    double number10{5.6};
    double number11{};
    double number12{};
    //Infinity 
    double result {number10/number11};
    std::cout<<number10<<"/"<<number11<<"="<<result<<std::endl;
    std::cout<<result<<"+"<<number10<<"="<<result + number10<<std::endl;
    //NaN
    result=number11/number12;
    std::cout<<number11<<"/"<<number12<<"="<<result<<std::endl;
    return 0;
}