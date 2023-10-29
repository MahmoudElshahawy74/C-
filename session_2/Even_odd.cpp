

#include<iostream>


void Even_odd(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            std::cout<<"the number ("<<arr[i]<<")"<<" at the index : "<<i<<"  is Even"<<std::endl;
        }
        else if(arr[i]%2==1){
            std::cout<<"the number ("<<arr[i]<<")"<<" at the index : "<<i<<"  is Odd"<<std::endl;
        }
    }   
    
}



int main(){
    int arr[]={5,9,8,7,3,6,4,2};
 
    Even_odd(arr, (sizeof(arr)/sizeof(arr[0])));
    
 








    
}