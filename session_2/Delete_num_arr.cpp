
#include<iostream>

void delete_num(int arr[],int *size,int num){
    int index=0;
    for(int i=0;i<*size;i++){
        if(arr[i]!=num){
            arr[index]=arr[i];
            index++;
        }
    
    }
     *size=index;  
}
int main(){
    int num=0;
    int arr[]={5,9,8,7,3,6,4,2};
    int size=(sizeof(arr)/sizeof(arr[0]));
    std::cout<<"Enter the number you want to delete : ";
    std::cin>>num;
    
    delete_num(arr,&size,num);

    std::cout << "The array after removing " << num << ": "<<std::endl;
    for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;
    std::cout<<"The new size is :"<<size<<std::endl;


}