#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];  //XOR function for same ele does not give anything
    }
    return ans;
   
}


int main(){
    //m number comes twice and 1 number 
    //appears once
    //so all number comes twice except one

    int arr[]={3,4,5,3,5,4,7};
    unique(arr,7);

    return 0;
}