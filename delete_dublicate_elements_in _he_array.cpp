#include <stdio.h>
#include <iostream>
using namespace std;



int main(){
    int arr[]={1,4,6,1,8,1,4,44};
    //1,4,6,8,44
    int size=sizeof(arr)/sizeof(arr[0]);
    //cout<<size;
    //for whole triversal
    for(int i=0;i<size;i++){
        //for checking dublicate elements
        for(int j=i+1;j<size-1;j++){
            //if found element do left shift of all array
            if(arr[i]==arr[j]){
                //left shif
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                //because of shifting the new value is there on the jth element 
                j--;
                
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<"  "<<arr[i]<<"  ";
    }
        
    
}
