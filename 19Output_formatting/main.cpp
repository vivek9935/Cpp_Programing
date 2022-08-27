#include <iostream>
#include<ios>
#include<iomanip>

int main()
{
    
    std::cout << "Hello\n" ; 
    std::cout << "World\n";
    //std::flush flushes the output buffer to it's final destination
    std::cout<<"This is the message\n"<<std::flush;
    std::cout<<"\n";
    //formatting the table 
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" <<" "  << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " "  << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;
    std::cout<<"\n";
    std::cout<<"Formatted table \n";
    std::cout<< std::setw(10) <<"last name " <<std::setw(10)<<"First name"  <<std::setw(5)<<"Age" <<std::endl;
    std::cout<< std::setw(10) <<"Daniel "    <<std::setw(10)<<"Gray"        <<std::setw(5)<<"25"  <<std::endl;
    std::cout<< std::setw(10) <<"Stanley "   <<std::setw(10)<<"woods"       <<std::setw(5)<<"33"  <<std::endl;
    std::cout<< std::setw(10) <<"Jordan"     <<std::setw(10)<<"Parker"      <<std::setw(5)<<"45"  <<std::endl;
    std::cout<< std::setw(10) <<"Joe "       <<std::setw(10)<<"Ball"        <<std::setw(5)<<"21"  <<std::endl;
    std::cout<< std::setw(10) <<"Josh "      <<std::setw(10)<<"Carr"        <<std::setw(5)<<"27"  <<std::endl;
    std::cout<< std::setw(10) <<"Izaiah "    <<std::setw(10)<<"Robinson"    <<std::setw(5)<<"29"  <<std::endl;
    std::cout<<"<------------------------------------------------->\n";
     std::cout<<"\n";
    std::cout<<"Formatted table \n";
    int col_width=14;
    std::cout<< std::setw(col_width) <<"last name " <<std::setw(col_width)<<"First name"  <<std::setw(col_width/2)<<"Age" <<std::endl;
    std::cout<< std::setw(col_width) <<"Daniel "    <<std::setw(col_width)<<"Gray"        <<std::setw(col_width/2)<<"25"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Stanley "   <<std::setw(col_width)<<"woods"       <<std::setw(col_width/2)<<"33"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Jordan"     <<std::setw(col_width)<<"Parker"      <<std::setw(col_width/2)<<"45"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Joe "       <<std::setw(col_width)<<"Ball"        <<std::setw(col_width/2)<<"21"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Josh "      <<std::setw(col_width)<<"Carr"        <<std::setw(col_width/2)<<"27"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Izaiah "    <<std::setw(col_width)<<"Robinson"    <<std::setw(col_width/2)<<"29"  <<std::endl;
    std::cout<<"\n";
    //right justified 
    std::cout<<"Formatted table \n";
    col_width=25;
    std::cout<<std::left;
    std::cout << std::setfill('-');
    std::cout<< std::setw(col_width) <<"last name " <<std::setw(col_width)<<"First name"  <<std::setw(col_width/2)<<"Age" <<std::endl;
    std::cout<< std::setw(col_width) <<"Daniel "    <<std::setw(col_width)<<"Gray"        <<std::setw(col_width/2)<<"25"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Stanley "   <<std::setw(col_width)<<"woods"       <<std::setw(col_width/2)<<"33"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Jordan"     <<std::setw(col_width)<<"Parker"      <<std::setw(col_width/2)<<"45"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Joe "       <<std::setw(col_width)<<"Ball"        <<std::setw(col_width/2)<<"21"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Josh "      <<std::setw(col_width)<<"Carr"        <<std::setw(col_width/2)<<"27"  <<std::endl;
    std::cout<< std::setw(col_width) <<"Izaiah "    <<std::setw(col_width)<<"Robinson"    <<std::setw(col_width/2)<<"29"  <<std::endl;
    std::cout<<"\n";
    //internal justified : sign are left justified , data is right justified 
    std::cout<<std::right;
    std::cout<<std::setw(10)<<-123.45<<std::endl;
    std::cout<<std::internal;
    std::cout<<std::setw(10)<<-123.45<<std::endl;
    
    return 0;
}