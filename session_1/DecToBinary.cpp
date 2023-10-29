#include <iostream>
#include <bitset>
#include <string>



void dec_binary(int decimalNumber){
    std::bitset<8> binary(decimalNumber);
    std::cout << "Binary representation: " << binary << std::endl;
}

void Bin_Dec(std::string binaryString){
    std::bitset<64> binary(binaryString);
    unsigned long long decimalNumber = binary.to_ullong();

    std::cout << "Decimal representation: " << decimalNumber << std::endl;
}


int main() {
    int decimalNumber;
    std::string binaryString;
    int c;
    std::cout<<"please enter your choice : "<<std::endl;
    std::cout<<"1.Decimal to Binary "<<std::endl;
    std::cout<<"2.Binary to Decimal "<<std::endl;
    std::cin>>c;

    switch (c) {
        case 1:
        std::cout << "Enter a decimal number: ";
        std::cin >> decimalNumber;
        dec_binary(decimalNumber);
        break;

        case 2:
        std::cout << "Enter a binary number: ";
        std::cin >> binaryString;
        Bin_Dec(binaryString);
        break;

        default:
        std::cout<<"wrong choice !"<<std::endl;
    
    }

    return 0;
}