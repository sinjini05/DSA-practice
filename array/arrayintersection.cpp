#include <iostream>
using namespace std;

bool isSorted(int arr[],int N){
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
        if(arr[i]>arr[j]){
            return false;
        }}
    }
    return true;
    
}


int main(){
    int arr[]={1,2,3,4};
    cout<<isSorted(arr,4);
    return 0;
}