#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int result;
    result=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>result){
            result=arr[i];
        }
        }
    return result;
}

int main(){
    int arr[]={2,5,1,3,0};
    cout<<largest(arr,5);


    return 0;
}