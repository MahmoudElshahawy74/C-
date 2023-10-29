
#include<iostream>

#include <algorithm>


int main(){
    int arr[]={5,4,7,9,8,6,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    
  
    std::sort(arr,arr + size, [](int a, int b) {
        return a < b;
    });

    std::cout << "Ascending order: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Sort the array in descending order using a lambda function
    std::sort(arr, arr + size, [](int a, int b) {
        return a > b;
    });

    std::cout << "Descending order: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}