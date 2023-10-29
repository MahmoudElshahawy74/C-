
#include<iostream>
#include<cmath>

int main(){

    int num=0;
    int res=0;
    std::cout<<"Enter the number :  ";
    std::cin>>num;

    auto square=[](int x){return pow(x,2);};

    res=square(num);


    std::cout << "The square of " << num << " is: " << res << std::endl;

    return 0;





}