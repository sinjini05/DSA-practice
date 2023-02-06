#include <iostream>
using namespace std;

rotate(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;//assigning last no. to the prev first
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[]={2,4,3,5};
    rotate(arr,4);



    return 0;
}