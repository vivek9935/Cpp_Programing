#include <iostream>



int main()
{
auto var1{12};
auto var2{13.0};
auto var3{14.0f};
auto var4{15.0l};
auto var5{123u};//unsigned
auto var6{123ul};//unsigned long
auto var7{123ll};//long long
auto var8{'e'};//character
std::cout<<"var1 size : "<<sizeof(var1)<<" bytes "<<std::endl;
std::cout<<"var2 size : "<<sizeof(var2)<<" bytes "<<std::endl;
std::cout<<"var3 size : "<<sizeof(var3)<<" bytes "<<std::endl;
std::cout<<"var4 size : "<<sizeof(var4)<<" bytes "<<std::endl;
std::cout<<"var5 size : "<<sizeof(var5)<<" bytes "<<std::endl;
std::cout<<"var6 size : "<<sizeof(var6)<<" bytes "<<std::endl;
std::cout<<"var7 size : "<<sizeof(var7)<<" bytes "<<std::endl;
std::cout<<"var8 size : "<<sizeof(var8)<<" bytes "<<std::endl;
std::cout<<"var1 size : "<<sizeof(var8)<<" bytes "<<std::endl;
    return 0;
}