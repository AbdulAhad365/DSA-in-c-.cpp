#include <iostream>
using namespace std;
int display(int arr[],int b);

int insert(int arr[], int capacity, int size, int number, int index);

int arr[100];
int main(){
    int arr[100]={1,2,3,4};
   
    int capacity=100;
    int size=4;
    int number=100;
    int index=4;
    size=size+1;
    insert(arr,capacity,size,number,index);
//    cout<<"*************";
    
    display(arr,size);
    
    return 0;

}
int display(int arr[],int b){
    for (int i = 0; i < b; i++) {
        cout<<arr[i];
        cout<<"\n";
    }
    return 0;
}
int insert(int arr[], int capacity, int size, int number, int index){
    if(capacity<=size){
        return -1;
    } else{
        for(int i=size-1;i>=index;i--){
            arr[i+1]= arr[i];
        }
        arr[index]=number;
        
        
        return 1;
    }
}
