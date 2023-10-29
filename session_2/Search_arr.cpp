
#include<iostream>


int search_arr(int arr[],int size,int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            return i;
        }
    
    }
    return -1;
}



int main(){
    int arr[]={5,9,8,7,3,6,4,2};
    int res=0;
    int num=0;
    std::cout<<"enter the number : "<<" ";
    std::cin>>num;

    res=search_arr(arr, (sizeof(arr)/sizeof(arr[0])),num);
    
    if(res!=-1){
        std::cout<<"number is found at the index : "<<res;
    }
    else{
        std::cout<<"number is not found"<<std::endl;
    }








    
}