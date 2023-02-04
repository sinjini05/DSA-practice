#include<iostream>
using namespace std;

void swapalt(int arr[],int n){
    for(int i=0;i<n;i+=2){       //i+=2 because we are swapping the ele and the one next to it, so we take the ele after that
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }

    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={5,3,2,4,6,4,3,2};
    swapalt(arr,8);
    print(arr,8);

    return 0;
}
