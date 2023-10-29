
#include "iostream"

int main(){
    int v1=0,v2=0,v3=0;
    std::cout<<"enter value 1 : "<<std::endl;
    std::cin>>v1;
    std::cout<<"enter value 2 : "<<std::endl;
    std::cin>>v2;
    std::cout<<"enter value 3 : "<<std::endl;
    std::cin>>v3;

    if(v1>v2 && v1>v3){
        std::cout<<"the max value : "<<v1<<std::endl;
    }
    else if(v2>v1 && v2>v3){
        std::cout<<"the max value : "<<v2<<std::endl;
    }
    else{
        std::cout<<"the max value : "<<v3<<std::endl;
    }
}