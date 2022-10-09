#include <iostream>


int main()
{
    int num1;
    int num2;
    //bool result;
    std::cout<<"enter the value of number 1 "<<"\n";
    std::cin>>num1;
    std::cout<<"\n";
    std::cout<<"enter the value of number 2"<<"\n";
    std::cin>>num2;
    std::cout<<"\n";
    std::cout<<"value of number1 is :  "<<num1<<"\nthe value of number 2 is : "<<num2<<"\n";
    std::cout<<"\n";
    /*result = (num1<num2);
    if(result == 1)
    {
        std::cout<<num1<<" is less than "<<num2<<"\n";
    }
    if(result == 0){
       std::cout<<num2<<" is less than "<<num1<<"\n"; 
    }*/
     if(num1<num2)
    {
        std::cout<<num1<<" is less than "<<num2<<"\n";
    }
    else{
       std::cout<<num2<<" is less than "<<num1<<"\n"; 
    }


    return 0;
}