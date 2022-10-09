#include <iostream>


int main()
{
    
    bool red{false};
    bool green{true};
    bool yellow{false};
    bool police_stop{true};
    if(green){
       if(police_stop){
        std::cout<<"Stop the vechile "<<"\n";
       }
    }
    else{
        std::cout<<"go"<<"\n";
    }
     std::cout << std::endl;
	 std::cout << "Police officer stops(less verbose)" << std::endl;
	 if(green && !police_stop){
         std::cout << "Go" << std::endl;
     }else{
         std::cout << "Stop" << std::endl;
     }

    return 0;
}