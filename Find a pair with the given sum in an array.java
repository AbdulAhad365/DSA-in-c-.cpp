// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void search(int arr[],int e,int size){
    //search the element
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==e){
                cout<<"pair ("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
    }
}
int main() {
    
    cout<<"enter the size of the array";
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the "<<i+1<<"element";
        cin>>arr[i];
    }
    int e;
    cout<<"enter the element whose sum is to find by the pair";
    cin>>e;
    search(arr,e,size);
    return 0;
}
