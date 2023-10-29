#include<iostream>


int main(){
    int num;
    std::cout<<"enter the number : ";
    std::cin>>num;
std::cout<<"the multiplication table of number : "<<num<<std::endl;
    for(int i=1;i<=12;i++){
        std::cout<<num<<" * "<<i<<" = "<<num*i<<std::endl;
    }


    return 0;
}