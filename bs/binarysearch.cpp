#include<iostream>
using namespace std;


//binary search only works on monotonic function

int binary(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[5]={4,5,6,8,9};
    int index=binary(arr,5,9);
    cout<<index;
    
    return 0;
}