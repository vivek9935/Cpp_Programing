#include <iostream>


int main()
{
    //Braced initialization
    int elephent_count{15};
    int lion_count;
    int dog_count{};
    //funtion initialixation
    int apple_count(5);
    int kiwi_count(2.9);
    //assignment initialization
    int bike_count{2};



    std::cout << "value :" << elephent_count << std::endl;
    std::cout << "value :" << lion_count << std::endl;
    std::cout << "value :" << dog_count << std::endl;
    std::cout << "value :" << apple_count << std::endl;
    std::cout << "value :" << kiwi_count << std::endl;
    std::cout << "value :" << bike_count << std::endl;
    std::cout <<"sizeof int : "<<sizeof(int)<<std::endl;
    std::cout <<"sizeof int : "<<sizeof(apple_count)<<std::endl;

    return 0;
}