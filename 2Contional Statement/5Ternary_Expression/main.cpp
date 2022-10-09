#include <iostream>
#include <string>
int main()
{
   int Max{};
   int a;
   int b;
   std::cout<<"Enter the Number 1 and Number 2\n";
   std::cin>>a;
   std::cin>>b;
   Max={a>b?a:b};
   std::cout<<"Max value is = "<<Max;
}