#include<iostream>


int main()
{
    std::cout<<"ASCII Table : "<< std::endl ;
    std::cout<<"-----------------"<<std::endl;
    std::cout<<"|  char  | ASCII |"<<std::endl;
    std::cout<<"-----------------"<<std::endl;

    for(int c=0;c<128;c++){
         std::cout << static_cast<char>(c)  << "\t\t" << c << std::endl;
        //std::cout<<"| "<< static_cast<char>(c) << "\t\t" << c << "  |"<<std::endl;
    }


}               