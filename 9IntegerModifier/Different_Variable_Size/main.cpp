#include <iostream>

int main()
{
   //short int and long
   short short_var{-32768};//2 bytes
   short int short_int{455};
   signed short signed_short{455};
   signed short int signed_short_int{-456};
   unsigned short int unsigned_short_int{456};
   std::cout<<"short variable : "<<short_var<<", size : "<<sizeof(short)<<"bytes"<<std::endl;
   std::cout<<"short Int variable : "<<short_int<<", size : "<<sizeof(short int)<<"bytes"<<std::endl;
   std::cout<<"signed short variable : "<<signed_short<<", size : "<<sizeof(signed short)<<"bytes"<<std::endl;
   std::cout<<"signed short int variable : "<<signed_short_int<<", size : "<<sizeof(signed short int)<<"bytes"<<std::endl;
   std::cout<<"unsigned short int variable : "<<unsigned_short_int<<", size : "<<sizeof(unsigned short int)<<"bytes"<<std::endl;

   int int_var{55};//4 bytes 
   signed signed_var{66};
   signed int signed_int{77};
   unsigned int unsigned_int{77};
    std::cout<<"int variable : "<<int_var<<", size : "<<sizeof(int)<<"bytes"<<std::endl;
   std::cout<<"signed variable : "<<signed_var<<", size : "<<sizeof(signed)<<"bytes"<<std::endl;
   std::cout<<"signed int variable : "<<signed_int<<", size : "<<sizeof(signed int)<<"bytes"<<std::endl;
   std::cout<<"unsigned int variable : "<<unsigned_int<<", size : "<<sizeof(unsigned int)<<"bytes"<<std::endl;
    //same thing for long it take 8 bytes 
    return 0;
}