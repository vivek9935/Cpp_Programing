#include <iostream>

int main()
{
   bool red_light{false};
   bool green_light{true};
   if(red_light == true){
    std::cout<<"Stop ! "<<std::endl;
   }else{
    std::cout<<"go through !"<<std::endl;
   }
   if(green_light){
    std::cout<<"the light is green"<<std::endl;
    }else{
        std::cout<<"light is red"<<std::endl;

    }
//size of
std::cout<<"sizeof(bool) "<<sizeof(bool)<<std::endl;
//printing out bool
//1=true
//0=false
std::cout<<std::endl;
std::cout<<"red_light "<<red_light<<std::endl;
std::cout<<"red_light "<<green_light<<std::endl;
std::cout<<std::endl;
std::cout<<std::boolalpha;
std::cout<<"red_light "<<red_light<<std::endl;
std::cout<<"red_light "<<green_light<<std::endl;
    return 0;
}