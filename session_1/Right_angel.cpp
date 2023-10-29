
#include<iostream>
#include<cmath>


int main(){
    int side1,side2,side3,max;
    std::cout<<"Enter side1 : "<<std::endl;
    std::cin>>side1;
    std::cout<<"Enter side2 : "<<std::endl;
    std::cin>>side2;
    std::cout<<"Enter side3 : "<<std::endl;
    std::cin>>side3;

    if(std::pow(side1 , 2)+ std::pow(side2 , 2)==std::pow(side3,2)){
        std::cout<<"this right angel !"<<std::endl;
    }
    else if(std::pow(side2 , 2)+ std::pow(side3 , 2)==std::pow(side1,2)){
        std::cout<<"this right angel !"<<std::endl;
    }
    else if(std::pow(side1 , 2)+ std::pow(side3 , 2)==std::pow(side2,2)){
        std::cout<<"this right angel !"<<std::endl;
    }
    else{
        std::cout<<"this is Not right angel !"<<std::endl;
    }
    



    return 0;
}