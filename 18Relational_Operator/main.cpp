#include <iostream>
#include<cmath>

int main()
{
    bool a{true};
    bool b{false};
    bool c{true};
    int d = log(2);
    std::cout << std::boolalpha;
    std::cout << "a :" << a << std::endl;
    std::cout << "b :" << b << std::endl;
    std::cout << "c :" << c << std::endl;
    std::cout << std::endl;
    std::cout << "a&&b:  " << (a && b) << std::endl;
    std::cout << "a&&c:  " << (a && c) << std::endl;
    std::cout << "a&&b&&c:  " << (a && b && c) << std::endl;
    std::cout << "<----------------------------------------------------------->" << std::endl;
    std::cout << "OR Operator   " << std::endl;
    std::cout << "a||b:  " << (a || b) << std::endl;
    std::cout << "a||c:  " << (a || c) << std::endl;
    std::cout << "a||b||c: " << (a || b || c) << std::endl;
    std::cout << "<----------------------------------------------------------->" << std::endl;
    std::cout << "NOT Operator   " << std::endl;
    std::cout << "!a:  " << (!a) << std::endl;
    std::cout << "<----------------------------------------------------------->" << std::endl;
    std::cout << "Combination of these operator" << std::endl;
    std::cout << std::endl;
    std::cout << "!(a&&b)||c : " << (!(a && b) || c) << std::endl;
    std::cout << "<----------------------------------------------------------->" << std::endl;
    std::cout << "Combining logical operator and relational operator" << std::endl;
    std::cout << std::endl;
    int d{45};
    int e{20};
    int f{11};
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << std::endl;
    std::cout << "d>e && d>f    : " << ((d>e)&&(d>f))   << std::endl;
    std::cout << "d==e || e<=f  : " << ((d==e)&&(e<=f)) << std::endl;
    std::cout <<"d<e || d>f     : " << ((d<e)||(d>f))   <<std::endl;
    std::cout <<"f>e || d<f     : " << ((f>e)||(d>f))   <<std::endl;
    std::cout <<"(d>f)&&(f<=d)  : " << ((d>f)&&(f<=d))  << std::endl;
    
    return 0;

}