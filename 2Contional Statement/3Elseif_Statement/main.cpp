#include <iostream>

const int Pen {10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{
    int tool {Ellipse};
    if(tool == Pen){
        std::cout<<"Active tool is pen"<<"\n";
    }
    else if(tool == Marker){
        std::cout<<"Active tool is marker"<<"\n";
    }
    else if(tool == Eraser)
    {
        std::cout<<"Active tool is Eraser"<<"\n";
    }
    else if(tool==Rectangle) {
    std::cout<<"Active tool is Rectangle"<<"\n";
    }
    else if (tool==Circle){
        std::cout<<"Active tool is Circle"<<"\n";
    }
    else if(tool==Ellipse){
        std::cout<<"Active tool is Ellipse"<<"\n";
    }
}