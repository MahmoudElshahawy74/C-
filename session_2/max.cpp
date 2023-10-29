#include<iostream>

int max(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[]={5,9,8,1,3,7,6,4};
    int size_arr=sizeof(arr) / sizeof(arr[0]);
    int res=max(arr,size_arr);
    std::cout<<"the max number in array : "<<res<<std::endl;
  

}  