#include <iostream>


int main()
{
const size_t COUNT{10};
size_t i=0;
while(i<COUNT){
std::cout<<i<<"\n";
i++;
} 
for(int i=0;i<COUNT;i++){
    std::cout<<i<<"\n";
}   
}