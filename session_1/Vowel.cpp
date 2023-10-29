#include<iostream>


int main(){
    char c;
    std::cout<<"enter the Character : "<<std::endl;
    std::cin>>c;

    switch (c) {
        case 'a':
        case 'A':
            std::cout<<"is Vowel "<<std::endl;
            break;
        case 'o':
        case 'O':
            std::cout<<"is Vowel "<<std::endl;
            break;
        case 'u':
        case 'U':
             std::cout<<"is Vowel "<<std::endl;
            break;
        case 'i':
        case 'I':
            std::cout<<"is Vowel "<<std::endl;
            break;
        case 'e':
        case 'E':
            std::cout<<"is Vowel "<<std::endl;
            break;
        default:
            std::cout<<"is Not Vowel "<<std::endl;
            break;
    
    }
    return 0;
}