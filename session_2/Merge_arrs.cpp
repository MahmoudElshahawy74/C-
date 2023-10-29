
#include<iostream>

void merged_array(int arr1[],int arr2[],int arr[],int size,int size_1,int size_2){
    for(int i=0;i<size_1;i++){
        arr[i]=arr1[i];
    }

     for(int j=0;j<size_2;j++){
        arr[j+size_1]=arr2[j];
    }
    std::cout<<"the merged array is : "<<std::endl;
     for(int k=0;k<size;k++){
        std::cout<<arr[k]<<" ";
    }
    std::cout<<std::endl;
}


int main(){
    
    int arr[10]={};

    int arr1[]={1,2,3,4,5};
    int size_1=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={6,7,8,9,10};
    int size_2=sizeof(arr2)/sizeof(arr2[0]);

    int merged_size=size_1+size_2;
    merged_array(arr1,arr2,arr,merged_size,size_1,size_2);


}