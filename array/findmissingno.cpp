#include<iostream>
using namespace std;

int missing(int arr[],int n){
    int N=n+1;
    int total=(N)*(N+1)/2;  //n is 1 less, bc we took size of array
    for (int i=0;i<n;i++){
        total-=arr[i];     //subtracting from summation to find missing number
    }
    return total;

}

int main(){
    int arr[]={1,2,4,5};
    int N=sizeof(arr)/sizeof(arr[0]);
    cout<<missing(arr,N);

    return 0;
}