#include <iostream>
#include <string>
int main()
{
   size_t a;
   std::cout<<"Put the numbewr which you want to find the multible"<<"\n";
   std::cin>>a;
   std::cout<<"Factorial of "<<a<<" are :\n";
for(size_t i{1};i<100000000;i++)
//i is only valid to use within the boundries of for {}
{ if(a%i==0){
   std::cout<<i<<"   ";
}
}
std::cout<<"sizeof(size_t) is :"<<sizeof(size_t)<<"\n";
return 0;
}