#include <iostream>

int mulNumber(int first, int second)
{
    int result = first * second;
    return result;
}

int main()
{
    int mul = mulNumber(22, 55);
    std::cout << "Multplication : " << mul << std::endl;
    return 0;
}