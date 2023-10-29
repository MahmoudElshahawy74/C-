#include<iostream>


int main(){
    int num=0,rem=0,res=0;
    std::cout<<"enter the number : ";
    std::cin>>num;

    while(num!=0){
         int digit = num % 10; // Extract the last digit
        res += digit; // Add the digit to the sum
        num /= 10; // Remove the last digit

    }
    std::cout<<"the summation of digits : "<<res<<std::endl;

    return 0;
}