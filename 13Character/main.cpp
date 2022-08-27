#include <iostream>

int main()
{
    char character1{'a'};
    char character2{'b'};
    char character3{'c'};
    char character4{'d'};
    char character5{'e'};

    std::cout<<character1<<std::endl;
    std::cout<<character2<<std::endl;
    std::cout<<character3<<std::endl;
    std::cout<<character4<<std::endl;
    std::cout<<character5<<std::endl;
    std::cout<<std::endl;
    char value=65;//ASII character code of 'A'
    std::cout<<"value: "<<value<<std::endl;
    std::cout<<"value(int) : "<<static_cast<int>(value)<<std::endl;
    return 0;



}