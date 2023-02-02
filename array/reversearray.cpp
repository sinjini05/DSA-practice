#include <iostream>
using namespace std;

void reverse(int arr[],int n){

    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


}

void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
}

int main(){
    // exchange elements
    int arr[3]={2,5,3};

    reverse(arr,3);
    printarray(arr,3);


    return 0;
}