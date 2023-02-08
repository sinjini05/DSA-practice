#include <iostream>
using namespace std;

//in this approach we reverse the arrays in the boxes and then swap them

//for ex-- 
// {5,6,3,9} ,rotate by 2 ----> [5,6],[3,9] -- swap 5 and 6 and swap 3 and 9 --> then we get [6,5],[9,3] ---> [3,5],[9,6] -- { 3,9,5,6 }



 void reverse(int arr[],int start,int end){
        while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
 }

void rotate(int arr[],int n,int d){
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
}

int main(){
    int arr[]={5,4,3,2,5};
    cout<<rotate(arr,5,2);
    return 0;
}